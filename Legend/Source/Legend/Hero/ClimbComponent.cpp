// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Legend/Hero/ClimbComponent.h"

UClimbComponent::UClimbComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UClimbComponent::BeginPlay()
{
	Super::BeginPlay();

	Owner = GetOwner();
	TraceCollisionParams.AddIgnoredActor(Owner);

	Collider = Owner->FindComponentByClass<UCapsuleComponent>();
	CharacterMovement = Owner->FindComponentByClass<UCharacterMovementComponent>();
}


void UClimbComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


// Survey area ahead of actor, using traces, to determine if vaulting/climbing is possible
bool UClimbComponent::TryToClimb() {

	ActorFeet = Owner->GetActorLocation() + FVector::DownVector * RootHeight;

	// Get data from space ahead of actor
	TraceFromActor(LowTraceHeight, ClimbTraceRange, LowTraceResult);
	TraceFromActor(MidTraceHeight, ClimbTraceRange, MidTraceResult);
	TraceFromActor(HighTraceHeight, ClimbTraceRange, HighTraceResult);

	// DEBUG
	DebugTrace(LowTraceResult);
	DebugTrace(MidTraceResult);
	DebugTrace(HighTraceResult);

	// Check short objects
	bool bCanVault, bCanShortClimb;
	CheckForShortObstacles(bCanVault, bCanShortClimb);

	if (bCanVault) {
		StartVault();
	}

	// Check tall objects

	return false;
}


void UClimbComponent::CheckForShortObstacles(bool& bCanVault, bool& bCanShortClimb) {

	bCanVault = false;
	bCanShortClimb = false;

	// Only consider short objects
	if (!LowTraceResult.bBlockingHit)
		return;

	if (MidTraceResult.bBlockingHit)
		return;

	// Check for depth of object, if short then vault, if long, then half-climb
	FVector VaultDirection = -LowTraceResult.ImpactNormal;

	FVector TraceStart = 
		LowTraceResult.ImpactPoint + // start here
		FVector::DownVector *  LowTraceHeight +	// go to floor
		FVector::UpVector * ActorHeight +  // go to head height
		VaultDirection * DepthTraceDistance;	// go in direction of normal

	FVector TraceEnd = TraceStart + FVector::DownVector * DepthTraceRange;
	FHitResult DepthTraceResult;

	bool bDepthHit = GetWorld()->LineTraceSingleByChannel(
		DepthTraceResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);

	// DEBUG
	DebugTrace(DepthTraceResult);

	// Account for if trace started in object
	bDepthHit = bDepthHit || DepthTraceResult.bStartPenetrating;

	bCanVault = !bDepthHit;
	bCanShortClimb = bDepthHit;

	return;
}


void UClimbComponent::StartVault() {
	if (bIsBusy)
		return;

	bIsBusy = true;
	bVaultTrigger = true;

	// Snap actor rotation to obstacle's
	FQuat TargetRotation = (-LowTraceResult.ImpactNormal).ToOrientationQuat();
	Owner->SetActorRotation(TargetRotation);

	// Temporarily deactivate collider
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (CharacterMovement)
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying);
}

void UClimbComponent::StopVault() {
	bVaultTrigger = false;
	bIsBusy = false;

	Collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	if (CharacterMovement)
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking);
}



// UTILITY
void UClimbComponent::TraceFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult) {
	FVector TraceStart = ActorFeet + FVector::UpVector * TraceHeight;
	FVector TraceEnd = TraceStart + Owner->GetActorForwardVector() * TraceRange;

	GetWorld()->LineTraceSingleByChannel(
		TraceResult,
		TraceStart,
		TraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);
}


// DEBUG
void UClimbComponent::DebugTrace(FHitResult TraceResult, bool bPersist, float LifeTime) {

	bool bHit = TraceResult.bBlockingHit;
	
	FColor Color = bHit ? FColor::Red : FColor::Blue;
	FVector TraceEnd = bHit ? TraceResult.ImpactPoint : TraceResult.TraceEnd;

	DrawDebugLine(GetWorld(), TraceResult.TraceStart, TraceEnd, Color, bPersist, LifeTime);

	if (bHit) 
		DrawDebugSphere(GetWorld(), TraceEnd, 10, 10, Color, bPersist, LifeTime);
}

