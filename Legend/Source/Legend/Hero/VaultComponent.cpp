// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Legend/Hero/Hero.h"
#include "Legend/Hero/VaultComponent.h"

UVaultComponent::UVaultComponent() {
	PrimaryComponentTick.bCanEverTick = false;
}


void UVaultComponent::BeginPlay() {
	Super::BeginPlay();

	Owner = GetOwner();
	Hero = Cast<AHero>(Owner);
	TraceCollisionParams.AddIgnoredActor(Owner);
	Collider = Owner->FindComponentByClass<UCapsuleComponent>();
	CharacterMovement = Owner->FindComponentByClass<UCharacterMovementComponent>();
}


void UVaultComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


// Survey area ahead of actor, using traces, to determine if vaulting/climbing is possible
bool UVaultComponent::TryToClimb() {

	ActorFeet = Owner->GetActorLocation() + FVector::DownVector * RootHeight;

	// Get data from space ahead of actor
	TraceFromActor(LowTraceHeight, VaultTraceRange, LowTraceResult);
	TraceFromActor(MidTraceHeight, VaultTraceRange, MidTraceResult);
	TraceFromActor(HighTraceHeight, VaultTraceRange, HighTraceResult);

	// DEBUG
	DebugTrace(LowTraceResult);
	DebugTrace(MidTraceResult);
	DebugTrace(HighTraceResult);

	// Check short objects
	bool bCanVault, bCanShortClimb;
	CanVaultOrShortClimb(bCanVault, bCanShortClimb);

	if (bCanVault) {
		StartVault();
	}

	return false;
}


void UVaultComponent::CanVaultOrShortClimb(bool& bCanVault, bool& bCanShortClimb) {

	bCanVault = false;
	bCanShortClimb = false;

	// Only consider short objects
	if (!LowTraceResult.bBlockingHit)
		return;

	if (MidTraceResult.bBlockingHit)
		return;

	// Check for depth of object, if short then vault, if long, then half-climb
	FVector VaultDirection = -LowTraceResult.ImpactNormal;

	FVector DepthTraceStart =
		LowTraceResult.ImpactPoint + // start here
		FVector::DownVector * LowTraceHeight +	// go to floor
		FVector::UpVector * ActorHeight +  // go to head height
		VaultDirection * DepthTraceDistance;	// go in direction of normal

	FVector DepthTraceEnd = DepthTraceStart + FVector::DownVector * DepthTraceRange;
	FHitResult DepthTraceResult;

	bool bDepthHit = GetWorld()->LineTraceSingleByChannel(
		DepthTraceResult,
		DepthTraceStart,
		DepthTraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);

	// DEBUG
	DebugTrace(DepthTraceResult);



	// Check height of object
	FVector HeightTraceStart =
		LowTraceResult.ImpactPoint + // start here
		FVector::UpVector * (MidTraceHeight - LowTraceHeight) + // go up to height of mid trace
		VaultDirection * 10;	// go in direction of normal

	FVector HeightTraceEnd = HeightTraceStart + FVector::DownVector * (MidTraceHeight - LowTraceHeight);
	FHitResult HeightTraceResult;

	bool bHeightTraceHit = GetWorld()->LineTraceSingleByChannel(
		HeightTraceResult,
		HeightTraceStart,
		HeightTraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);

	HeightTraceEnd = bHeightTraceHit ? HeightTraceResult.ImpactPoint : HeightTraceEnd;
	LastObstacleHeight = HeightTraceEnd.Z - ActorFeet.Z;



	// Account for if trace started in object
	bDepthHit = bDepthHit || DepthTraceResult.bStartPenetrating;

	bCanVault = !bDepthHit;
	bCanShortClimb = bDepthHit;

	return;
}


void UVaultComponent::StartVault() {
	if (bIsBusy)
		return;

	bIsBusy = true;
	bVaultTrigger = true;

	// Set vault animation type based on height of obstacle
	VaultType = GetVaultType(LastObstacleHeight);

	// Snap actor rotation to obstacle's
	FQuat TargetRotation = (-LowTraceResult.ImpactNormal).ToOrientationQuat();
	Owner->SetActorRotation(TargetRotation);

	// Temporarily deactivate collider
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (CharacterMovement)
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying);
}

void UVaultComponent::StopVault() {
	bVaultTrigger = false;
	bIsBusy = false;

	Collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Reset movement mode
	if (CharacterMovement) {
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking);
	}
}


// UTILITY
void UVaultComponent::TraceFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult) {
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

EVaultType UVaultComponent::GetVaultType(float ObstacleHeight) {

	if (ObstacleHeight < ShortVaultMaxHeight)
		return EVaultType::Short;
	else if (ObstacleHeight < TallVaultMaxHeight)
		return EVaultType::Tall;

	return EVaultType::Tall;
}


// DEBUG
void UVaultComponent::DebugTrace(FHitResult TraceResult, bool bPersist, float LifeTime) {

	if (!bUseDebug)
		return;

	bool bHit = TraceResult.bBlockingHit;

	FColor Color = bHit ? FColor::Red : FColor::Blue;
	FVector TraceEnd = bHit ? TraceResult.ImpactPoint : TraceResult.TraceEnd;

	DrawDebugLine(GetWorld(), TraceResult.TraceStart, TraceEnd, Color, bPersist, LifeTime);

	if (bHit)
		DrawDebugSphere(GetWorld(), TraceEnd, 10, 10, Color, bPersist, LifeTime);
}

