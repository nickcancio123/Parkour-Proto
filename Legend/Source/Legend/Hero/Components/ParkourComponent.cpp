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

	// Obstacle traces
	RunObstacleTraces();

	bool bObstacleFound = bLowObstacleHit || bMidObstacleHit || bHighObstacleHit;
	if (!bObstacleFound)
		return false;

	DebugTrace(LowObstacleTraceResult);
	DebugTrace(MidObstacleTraceResult);
	DebugTrace(HighObstacleTraceResult);

	// Height trace
	GetObstacleHeight();
	DebugTrace(HeightTraceResult);

	// Clreance trace
	RunClearanceTrace();

	// Depth trace
	GetObstacleDepth();
	DebugTrace(DepthTraceResult);

	// Check results
	bool bShouldClimb = ShouldClimb(CanClimb(), bIsAutoCall);
	bool bShouldVault = ShouldVault(CanVault(), bIsAutoCall);

	// Start parkour
	if (bShouldVault) {
		StartVault();
	} else if (bShouldClimb) {
		StartClimb();
	}

	return false;
}

void UParkourComponent::RunObstacleTraces() {
	float MidObstacleTraceHeight = (MaxObstacleTraceHeight + MinObstacleTraceHeight) / 2;

	TraceForwardFromActor(LowObstacleTraceResult, MinObstacleTraceHeight, ObstacleTraceRange);
	bLowObstacleHit = LowObstacleTraceResult.bBlockingHit && !LowObstacleTraceResult.bStartPenetrating;

	TraceForwardFromActor(MidObstacleTraceResult, MidObstacleTraceHeight, ObstacleTraceRange);
	bMidObstacleHit = MidObstacleTraceResult.bBlockingHit && !MidObstacleTraceResult.bStartPenetrating;

	TraceForwardFromActor(HighObstacleTraceResult, MaxObstacleTraceHeight, ObstacleTraceRange);
	bHighObstacleHit = HighObstacleTraceResult.bBlockingHit && !HighObstacleTraceResult.bStartPenetrating;
}

void UParkourComponent::GetObstacleHeight() {
	float TraceStartHeight = MaxObstacleTraceHeight + 10;

	float HeightTraceRange = MaxObstacleTraceHeight;

	FHitResult ObstacleTraceResult = GetObstacleTraceResult();
	FVector DirectionToObstacle = (ObstacleTraceResult.ImpactPoint - ObstacleTraceResult.TraceStart);

	FVector TraceStart = 
		ActorFeet + // start here
		DirectionToObstacle + // go to impact point but on floor
		(FVector::UpVector * TraceStartHeight) + // go up
		(-ObstacleTraceResult.ImpactNormal * HeightTraceDepth); // go over obstacle

	FVector TraceEnd = TraceStart + FVector::DownVector * HeightTraceRange;

	GetWorld()->LineTraceSingleByChannel(
		HeightTraceResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);

	// Set obstacle height based on results
	if (HeightTraceResult.bBlockingHit)
		ObstacleHeight = HeightTraceResult.ImpactPoint.Z - ActorFeet.Z;
}

void UParkourComponent::GetObstacleDepth() {
	float TraceStartHeight = MaxObstacleTraceHeight + 10;

	float DepthTraceRange = MaxObstacleTraceHeight;

	FHitResult ObstacleTraceResult = GetObstacleTraceResult();
	FVector DirectionToObstacle = (ObstacleTraceResult.ImpactPoint - ObstacleTraceResult.TraceStart);

	FVector TraceStart =
		ActorFeet +	// start here
		DirectionToObstacle + // go to impact point (but at foot height)
		(FVector::UpVector * TraceStartHeight) + // go up
		(-ObstacleTraceResult.ImpactNormal * MaxObstacleDepthToVault); // forward above obstacle

	FVector TraceEnd = TraceStart + FVector::DownVector * DepthTraceRange;

	GetWorld()->LineTraceSingleByChannel(
		DepthTraceResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);
}

void UParkourComponent::RunClearanceTrace() {
	float ClearanceTraceHeight = MaxObstacleTraceHeight + 5;
	TraceForwardFromActor(ClearanceTraceResult, ClearanceTraceHeight, ObstacleTraceRange);
}


void UParkourComponent::StartParkour(bool bClimbing) {
	bIsBusy = true;

	TArray<FParkourVariant>* ParkourVariants = bClimbing ? &ClimbVariants : &VaultVariants;
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

#pragma endregion



#pragma region Climbing
bool UParkourComponent::CanClimb() {

	// Obstacle must be within height parameters
	if (ClearanceTraceResult.bBlockingHit)
		return false;

	if (ObstacleHeight > MaxClimbHeight || ObstacleHeight < MinClimbHeight)
		return false;

	// Obstacle must have enough depth
	if (!DepthTraceResult.bBlockingHit)
		return false;

	return true;
}

bool UParkourComponent::ShouldClimb(bool bCanClimb, bool bIsAutoCall) {
	if (!bCanClimb)
		return false;

	// Check auto settings
	if (bIsAutoCall) {
		if (!bCanAutoClimb)
			return false;

		if (CharacterMovement->IsFalling() && !bAutoClimbWhileFalling)
			return false;

		if (ObstacleHeight > MaxAutoClimbHeight || ObstacleHeight < MinAutoClimbHeight)
			return false;
	}

	return true;
}

void UParkourComponent::StartClimb() {
	StartParkour(true);
}
#pragma endregion



#pragma region Vaulting
bool UParkourComponent::CanVault() {
	// Obstacle must be within height parameters
	if (ObstacleHeight > MaxVaultHeight || ObstacleHeight < MinVaultHeight)
		return false;

	// Obstacle must be short in depth
	if (DepthTraceResult.bBlockingHit)
		return false;

	return true;

	return false;
}

bool UParkourComponent::ShouldVault(bool bCanVault, bool bIsAutoCall) {
	if (!bCanVault)
		return false;

	// Check auto settings
	if (bIsAutoCall) {
		if (!bCanAutoVault)
			return false;

		if (CharacterMovement->IsFalling() && !bAutoVaultWhileFalling)
			return false;

		if (ObstacleHeight > MaxAutoVaultHeight || ObstacleHeight < MinAutoVaultHeight)
			return false;
	}

	return true;
}

void UParkourComponent::StartVault() {
	StartParkour(false);
}
#pragma endregion



#pragma region Utility
void UParkourComponent::TraceForwardFromActor(FHitResult& TraceResult, float TraceHeight, float TraceRange) {
	FVector TraceStart = ActorFeet + FVector::UpVector * TraceHeight;
	FVector TraceEnd = TraceStart + Character->GetActorForwardVector() * TraceRange;

	GetWorld()->LineTraceSingleByChannel(
		TraceResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);
}

void UParkourComponent::DebugTrace(FHitResult TraceResult, bool bPersist, float LifeTime) {

	if (!bUseDebug)
		return;

	bool bHit = TraceResult.bBlockingHit;

	//if (!bHit)
	//	return;

	FColor Color = bHit ? FColor::Red : FColor::Blue;
	FVector TraceEnd = bHit ? TraceResult.ImpactPoint : TraceResult.TraceEnd;

	DrawDebugLine(GetWorld(), TraceResult.TraceStart, TraceEnd, Color, bPersist, LifeTime);

	if (bHit)
		DrawDebugSphere(GetWorld(), TraceEnd, 10, 10, Color, bPersist, LifeTime);
}

FHitResult UParkourComponent::GetObstacleTraceResult() {
	if (LowObstacleTraceResult.bBlockingHit)
		return LowObstacleTraceResult;
	else if (MidObstacleTraceResult.bBlockingHit)
		return MidObstacleTraceResult;
	else
		return HighObstacleTraceResult;
}
#pragma endregion
