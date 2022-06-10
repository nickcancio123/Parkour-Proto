// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "Legend/Hero/Components/ParkourComponent.h"



#pragma region General
UParkourComponent::UParkourComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UParkourComponent::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<ACharacter>(GetOwner());
	if (!Character) {
		UE_LOG(LogTemp, Error, TEXT("No owner ref"));
		return;
	}

	TraceCollisionParams.AddIgnoredActor(Character);
	Collider = Character->FindComponentByClass<UCapsuleComponent>();
	CharacterMovement = Character->FindComponentByClass<UCharacterMovementComponent>();
}


bool UParkourComponent::TryParkour(bool bIsAutoCall) {
	if (bIsBusy)
		return false;

	ActorFeet = Character->GetActorLocation() + FVector::DownVector * RootHeight;

	if (!ValidObstacleAhead())
		return false;

	GetObstacleHeight();
	GetObstacleDepth();

	bool bCanVault = CanVault(bIsAutoCall);
	bool bCanClimb = CanClimb(bIsAutoCall);

	// Start parkour move
	if (bCanVault) {
		StartParkour(EParkourMoveType::Vault);
	} else if (bCanClimb) {
		StartParkour(EParkourMoveType::Climb);
	}

	return bCanClimb || bCanVault;
}

bool UParkourComponent::ValidObstacleAhead() {
	// Trace for obstacle at LOW height
	TraceForwardFromActor(LowObstacleTraceResult, MinObstacleTraceHeight, ObstacleTraceRange);
	bLowObstacleHit = LowObstacleTraceResult.bBlockingHit && !LowObstacleTraceResult.bStartPenetrating;
	DebugTrace(LowObstacleTraceResult);

	// Trace for obstacle at MID height
	float MidObstacleTraceHeight = (MaxObstacleTraceHeight + MinObstacleTraceHeight) / 2;
	TraceForwardFromActor(MidObstacleTraceResult, MidObstacleTraceHeight, ObstacleTraceRange);
	bMidObstacleHit = MidObstacleTraceResult.bBlockingHit && !MidObstacleTraceResult.bStartPenetrating;
	DebugTrace(MidObstacleTraceResult);

	// Trace for obstacle at HIGH height
	TraceForwardFromActor(HighObstacleTraceResult, MaxObstacleTraceHeight, ObstacleTraceRange);
	bHighObstacleHit = HighObstacleTraceResult.bBlockingHit && !HighObstacleTraceResult.bStartPenetrating;
	DebugTrace(HighObstacleTraceResult);

	// Check for CLEARANCE above max parkour height
	float ClearanceTraceHeight = MaxObstacleTraceHeight + 5;
	TraceForwardFromActor(ClearanceTraceResult, ClearanceTraceHeight, ObstacleTraceRange);
	bool bIsClearance = !ClearanceTraceResult.bBlockingHit;
	DebugTrace(ClearanceTraceResult);

	return (bLowObstacleHit || bMidObstacleHit || bHighObstacleHit) && bIsClearance;
}

void UParkourComponent::GetObstacleHeight() {
	float TraceStartHeight = MaxObstacleTraceHeight + 10;
	float HeightTraceLength = MaxObstacleTraceHeight;

	FHitResult ObstacleTraceResult = GetObstacleTraceResult();
	FVector DirectionToObstacle = (ObstacleTraceResult.ImpactPoint - ObstacleTraceResult.TraceStart);

	FVector TraceStart = 
		ActorFeet + // start here
		DirectionToObstacle + // go to impact point but on floor
		(FVector::UpVector * TraceStartHeight) + // go up
		(-ObstacleTraceResult.ImpactNormal * HeightTraceDepth); // go over obstacle

	FVector TraceEnd = TraceStart + FVector::DownVector * HeightTraceLength;

	GetWorld()->LineTraceSingleByChannel(
		HeightTraceResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);
	DebugTrace(HeightTraceResult);

	// Set obstacle height based on results
	ObstacleHeight = (HeightTraceResult.bBlockingHit) ? 
		HeightTraceResult.ImpactPoint.Z - ActorFeet.Z : 
		999999;
}

void UParkourComponent::GetObstacleDepth() {
	float TraceStartHeight = MaxObstacleTraceHeight + 10;
	float DepthTraceLength = MaxObstacleTraceHeight;

	FHitResult ObstacleTraceResult = GetObstacleTraceResult();
	FVector DirectionToObstacle = (ObstacleTraceResult.ImpactPoint - ObstacleTraceResult.TraceStart);

	FVector TraceStart =
		ActorFeet +	// start here
		DirectionToObstacle + // go to impact point (but at foot height)
		(FVector::UpVector * TraceStartHeight) + // go up
		(-ObstacleTraceResult.ImpactNormal * MaxObstacleDepthToVault); // forward above obstacle

	FVector TraceEnd = TraceStart + FVector::DownVector * DepthTraceLength;

	GetWorld()->LineTraceSingleByChannel(
		DepthTraceResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);
	DebugTrace(DepthTraceResult);
}


void UParkourComponent::StartParkour(EParkourMoveType MoveType) {
	bIsBusy = true;

	// Get parkour variant
	TArray<FParkourVariant>* ParkourVariants;
	switch (MoveType) {
	case EParkourMoveType::Climb:
		ParkourVariants = &ClimbVariants;
		break;
	case EParkourMoveType::Vault:
		ParkourVariants = &VaultVariants;
		break;
	default:
		ParkourVariants = &ClimbVariants;
		break;
	}
	FParkourVariant ParkourVariant = GetParkourVariant(ParkourVariants);

	// Disable collision and enable flying
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying);

	// Snap to rotation
	bWasUsingControllerYaw = Character->bUseControllerRotationYaw;
	Character->bUseControllerRotationYaw = false;

	FHitResult ObstacleTraceResult = GetObstacleTraceResult();
	FQuat TargetRotation = (-ObstacleTraceResult.ImpactNormal).ToOrientationQuat();
	Character->SetActorRotation(TargetRotation);

	// Snap to position
	if (ParkourVariant.bUseLedgeOffset) {
		FVector LedgePosition = GetLedgePosition();
		FVector TargetPosition = LedgePosition +
			Character->GetActorForwardVector() * ParkourVariant.LedgeOffset.X +
			Character->GetActorRightVector() * ParkourVariant.LedgeOffset.Y +
			Character->GetActorUpVector() * ParkourVariant.LedgeOffset.Z;
		Character->SetActorLocation(TargetPosition, false, nullptr, ETeleportType::ResetPhysics);

		if (bUseDebug)
			DrawDebugSphere(GetWorld(), LedgePosition, 10, 10, FColor::Yellow, false, 5);

		if (bUseDebug)
			DrawDebugSphere(GetWorld(), TargetPosition, 10, 10, FColor::Magenta, false, 5);
	}

	Character->PlayAnimMontage(ParkourVariant.Montage);
}

void UParkourComponent::StopParkourCallback() {
	bIsBusy = false;

	// Reset movement and collision
	Character->bUseControllerRotationYaw = bWasUsingControllerYaw;
	Collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking);
}
#pragma endregion



#pragma region Climbing
bool UParkourComponent::CanClimb(bool bIsAutoCall) {

	// Obstacle must have enough depth
	if (!DepthTraceResult.bBlockingHit)
		return false;

	if (bIsAutoCall)
		return CanAutoClimb();

	if (ObstacleHeight > MaxClimbHeight || ObstacleHeight < MinClimbHeight)
		return false;

	return true;
}

bool UParkourComponent::CanAutoClimb() {
	if (!bCanAutoClimb)
		return false;

	if (CharacterMovement->IsFalling()) {
		if (!bAutoClimbWhileFalling)
			return false;

		if (ObstacleHeight > MaxAutoClimbHeightFalling || ObstacleHeight < MinAutoClimbHeightFalling)
			return false;

		return true;
	}

	if (ObstacleHeight > MaxAutoClimbHeight || ObstacleHeight < MinAutoClimbHeight)
		return false;

	return true;
}
#pragma endregion



#pragma region Vaulting
bool UParkourComponent::CanVault(bool bIsAutoCall) {
	// Obstacle must be short in depth
	if (DepthTraceResult.bBlockingHit)
		return false;

	if (bIsAutoCall)
		return CanAutoVault();

	if (ObstacleHeight > MaxVaultHeight || ObstacleHeight < MinVaultHeight)
		return false;

	return true;
}

bool UParkourComponent::CanAutoVault() {
	if (!bCanAutoVault)
		return false;

	if (CharacterMovement->IsFalling()) {
		if (!bAutoVaultWhileFalling)
			return false;

		if (ObstacleHeight > MaxAutoVaultHeightFalling || ObstacleHeight < MinAutoVaultHeightFalling)
			return false;

		return true;
	}

	if (ObstacleHeight > MaxAutoVaultHeight || ObstacleHeight < MinAutoVaultHeight)
		return false;

	return true;
}
#pragma endregion



#pragma region Utility
void UParkourComponent::TraceForwardFromActor(FHitResult& TraceResult, float TraceHeight, float TraceLength) {
	FVector TraceStart = ActorFeet + FVector::UpVector * TraceHeight;
	FVector TraceEnd = TraceStart + Character->GetActorForwardVector() * TraceLength;

	GetWorld()->LineTraceSingleByChannel(
		TraceResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);
}

FHitResult UParkourComponent::GetObstacleTraceResult() {
	if (bLowObstacleHit)
		return LowObstacleTraceResult;
	else if (bMidObstacleHit)
		return MidObstacleTraceResult;
	else
		return HighObstacleTraceResult;
}

FVector UParkourComponent::GetLedgePosition() {
	FVector ObstacleTraceImpactPoint = GetObstacleTraceResult().ImpactPoint;
	return FVector(ObstacleTraceImpactPoint.X, ObstacleTraceImpactPoint.Y, HeightTraceResult.ImpactPoint.Z);
}

FParkourVariant UParkourComponent::GetParkourVariant(const TArray<FParkourVariant>* Variants) {
	for (FParkourVariant Variant : *Variants) {
		if (ObstacleHeight < Variant.ObstacleHeight)
			return Variant;
	}
	return Variants->Last();
}

void UParkourComponent::DebugTrace(FHitResult TraceResult, bool bPersist, float LifeTime) {
	if (!bUseDebug)
		return;

	bool bHit = TraceResult.bBlockingHit;
	FColor Color = bHit ? FColor::Red : FColor::Blue;
	FVector TraceEnd = bHit ? TraceResult.ImpactPoint : TraceResult.TraceEnd;

	DrawDebugLine(GetWorld(), TraceResult.TraceStart, TraceEnd, Color, bPersist, LifeTime);
	if (bHit)
		DrawDebugSphere(GetWorld(), TraceEnd, 10, 10, Color, bPersist, LifeTime);
}
#pragma endregion
