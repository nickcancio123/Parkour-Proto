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

	bool bObstacleFound =
		LowObstacleTraceResult.bBlockingHit ||
		MidObstacleTraceResult.bBlockingHit ||
		HighObstacleTraceResult.bBlockingHit;

	DebugTrace(LowObstacleTraceResult);
	DebugTrace(MidObstacleTraceResult);
	DebugTrace(HighObstacleTraceResult);

	if (!bObstacleFound)
		return false;

	// Height trace
	GetObstacleHeight();
	DebugTrace(HeightTraceResult);

	// Depth trace
	GetObstacleDepth();
	DebugTrace(DepthTraceResult);

	// Check results
	bool bShouldClimb = ShouldClimb(CanClimb(), bIsAutoCall);
	bool bShouldVault = ShouldVault(CanVault(), bIsAutoCall);

	if (bShouldClimb) {
		StartClimb();
	} else if (bShouldVault) {
		StartVault();
	}

	return false;
}

void UParkourComponent::RunObstacleTraces() {
	float MidObstacleTraceHeight = (MaxObstacleTraceHeight + MinObstacleTraceHeight) / 2;

	TraceForwardFromActor(LowObstacleTraceResult, MinObstacleTraceHeight, ObstacleTraceRange);
	TraceForwardFromActor(MidObstacleTraceResult, MidObstacleTraceHeight, ObstacleTraceRange);
	TraceForwardFromActor(HighObstacleTraceResult, MaxObstacleTraceHeight, ObstacleTraceRange);
}

void UParkourComponent::GetObstacleHeight() {
	float TraceStartHeight = MaxObstacleTraceHeight + 10;
	float HeightTraceRange = TraceStartHeight;
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

	if (HeightTraceResult.bBlockingHit)
		ObstacleHeight = HeightTraceResult.ImpactPoint.Z - ActorFeet.Z;
	else
		ObstacleHeight = 9999999;
}

void UParkourComponent::GetObstacleDepth() {
	float TraceStartHeight = MaxObstacleTraceHeight + 10;
	float DepthTraceRange = TraceStartHeight;
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

void UParkourComponent::StartParkour(FVector LedgeOffset) {
	bIsBusy = true;

	// Disable collision and enable flying
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying);

	// Snap to rotation
	FHitResult ObstacleTraceResult = GetObstacleTraceResult();
	FQuat TargetRotation = (-ObstacleTraceResult.ImpactNormal).ToOrientationQuat();
	Character->SetActorRotation(TargetRotation);

	// Snap to position
	FVector TargetPosition = GetLedgePosition() +
		Character->GetActorForwardVector() * LedgeOffset.X +
		Character->GetActorRightVector() * LedgeOffset.Y +
		Character->GetActorUpVector() * LedgeOffset.Z;
	Character->SetActorLocation(TargetPosition, false, nullptr, ETeleportType::ResetPhysics);
}

void UParkourComponent::StopParkourCallback() {
	bIsBusy = false;

	// Reset movement and collision
	Collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking);
}

FVector UParkourComponent::GetLedgePosition() {
	FVector ObstacleTraceImpactPoint = GetObstacleTraceResult().ImpactPoint;
	return FVector(ObstacleTraceImpactPoint.X, ObstacleTraceImpactPoint.Y, HeightTraceResult.ImpactPoint.Z);
}


#pragma endregion



#pragma region Climbing
bool UParkourComponent::CanClimb() {
	// Obstacle must be within height parameters
	float TrueMaxClimbHeight = 
		(MaxObstacleTraceHeight > MaxClimbHeight) ? MaxClimbHeight : MaxObstacleTraceHeight;

	float TrueMinClimbHeight =
		(MinObstacleTraceHeight < MinClimbHeight) ? MinClimbHeight : MinObstacleTraceHeight;

	if (ObstacleHeight > TrueMaxClimbHeight || ObstacleHeight < TrueMinClimbHeight)
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

		if (ObstacleHeight > MaxObstacleHeightToAutoClimb)
			return false;
	}

	return true;
}

void UParkourComponent::StartClimb() {
	UE_LOG(LogTemp, Warning, TEXT("Climb"));

	StartParkour(ClimbLedgeOffset);
	Character->PlayAnimMontage(ClimbMontage);
}
#pragma endregion



#pragma region Vaulting
bool UParkourComponent::CanVault() {
	// Obstacle must be within height parameters
	float TrueMaxVaultHeight =
		(MaxObstacleTraceHeight > MaxVaultHeight) ? MaxVaultHeight : MaxObstacleTraceHeight;

	float TrueMinVaultHeight =
		(MinObstacleTraceHeight < MinVaultHeight) ? MinVaultHeight : MinObstacleTraceHeight;

	if (ObstacleHeight > TrueMaxVaultHeight || ObstacleHeight < TrueMinVaultHeight)
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

		if (ObstacleHeight > MaxObstacleHeightToAutoVault)
			return false;
	}

	return true;
}

void UParkourComponent::StartVault() {
	UE_LOG(LogTemp, Warning, TEXT("Vault"));

	StartParkour(ClimbLedgeOffset);
	Character->PlayAnimMontage(VaultMontage);
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
