// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Legend/Hero/Hero.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Legend/Hero/Components/ClimbComponent.h"


#pragma region General
UClimbComponent::UClimbComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UClimbComponent::BeginPlay()
{
	Super::BeginPlay();

	Hero = Cast<AHero>(GetOwner());
	TraceCollisionParams.AddIgnoredActor(Hero);
	Collider = Hero->FindComponentByClass<UCapsuleComponent>();
	CharacterMovement = Hero->FindComponentByClass<UCharacterMovementComponent>();
}

void UClimbComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (CharacterMovement->IsFalling())
		QueryClimbSystem();
}
#pragma endregion


#pragma region Climbing
bool UClimbComponent::QueryClimbSystem() {
	if (!bComponentEnabled)
		return false;

	if (bIsBusy)
		return false;

	ActorFeet = Hero->GetActorLocation() + FVector::DownVector * RootHeight;

	// Get data from space above and ahead of actor
	float FallingOffset = 0;
	if (CharacterMovement->IsFalling())
		FallingOffset = FallingTraceHeightOffset;

	TraceForwardFromActor(WallTraceHeight + FallingOffset, ClimbTraceRange, WallTraceResult);
	TraceForwardFromActor(ClearanceTraceHeight + FallingOffset, ClimbTraceRange, ClearanceTraceResult);

	bool bCanClimb = CanClimb();
	if (bCanClimb) 
		StartClimb();

	return bCanClimb;
}

bool UClimbComponent::CanClimb() {
	return (WallTraceResult.bBlockingHit && !ClearanceTraceResult.bBlockingHit);
}

void UClimbComponent::StartClimb() {
	bIsBusy = true;
	bClimbTrigger = true;

	// Debug
	DebugTrace(WallTraceResult, false, 5);
	DebugTrace(ClearanceTraceResult, false, 5);

	// Temporarily deactivate collider
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Temporarily et movement mode to flying
	if (CharacterMovement)
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying);

	// Snap actor rotation to obstacle's
	FQuat TargetRotation = (-WallTraceResult.ImpactNormal).ToOrientationQuat();
	Hero->SetActorRotation(TargetRotation);

	// Snap actor to correct climbing position
	FVector LedgePosition = GetLedgePosition();
	FVector TargetPosition = GetLedgePosition() +
		Hero->GetActorForwardVector() * HeroLedgeOffset.X +
		Hero->GetActorRightVector() * HeroLedgeOffset.Y +
		Hero->GetActorUpVector() * HeroLedgeOffset.Z;
	Hero->SetActorLocation(TargetPosition, false, nullptr, ETeleportType::ResetPhysics);

	if (bUseDebug)
		DrawDebugSphere(GetWorld(), LedgePosition, 10, 10, FColor::Yellow, false, 5);
}

void UClimbComponent::StopClimb() {
	bClimbTrigger = false;
	bIsBusy = false;

	Collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Reset movement mode
	if (CharacterMovement) {
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking);
	}
}

FVector UClimbComponent::GetLedgePosition() {

	// Check height of object
	FVector TraceDirection = (ClearanceTraceResult.TraceEnd - WallTraceResult.ImpactPoint).GetSafeNormal();
	TraceDirection = FVector(TraceDirection.X, TraceDirection.Y, 0);

	FVector HeightTraceStart = WallTraceResult.ImpactPoint + TraceDirection * 20;
	HeightTraceStart = FVector(HeightTraceStart.X, HeightTraceStart.Y, ClearanceTraceResult.TraceEnd.Z);

	FVector HeightTraceEnd = 
		HeightTraceStart + FVector::DownVector * (ClearanceTraceHeight - WallTraceHeight);
	FHitResult HeightTraceResult;

	bool bHeightTraceHit = GetWorld()->LineTraceSingleByChannel(
		HeightTraceResult,
		HeightTraceStart,
		HeightTraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);

	if (bUseDebug)
		DebugTrace(HeightTraceResult, false, 5);

	HeightTraceEnd = bHeightTraceHit ? HeightTraceResult.ImpactPoint : HeightTraceEnd;

	FVector LedgePosition =
		FVector(WallTraceResult.ImpactPoint.X, WallTraceResult.ImpactPoint.Y, HeightTraceEnd.Z);

	return LedgePosition;
}
#pragma endregion


#pragma region Utility
void UClimbComponent::TraceForwardFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult) {
	FVector TraceStart = ActorFeet + FVector::UpVector * TraceHeight;
	FVector TraceEnd = TraceStart + Hero->GetActorForwardVector() * TraceRange;

	GetWorld()->LineTraceSingleByChannel(
		TraceResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);
}

void UClimbComponent::DebugTrace(FHitResult TraceResult, bool bPersist, float LifeTime) {

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
