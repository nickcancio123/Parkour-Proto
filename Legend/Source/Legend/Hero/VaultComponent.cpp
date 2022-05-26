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

	Hero = Cast<AHero>(GetOwner());
	if (!Hero) {
		UE_LOG(LogTemp, Error, TEXT("No hero ref"));
		return;
	}

	TraceCollisionParams.AddIgnoredActor(Hero);
	Collider = Hero->FindComponentByClass<UCapsuleComponent>();
	CharacterMovement = Hero->FindComponentByClass<UCharacterMovementComponent>();
}


#pragma region Query Vault
bool UVaultComponent::QueryVaultSystem() {

	ActorFeet = Hero->GetActorLocation() + FVector::DownVector * RootHeight;

	// Get data from space ahead of actor
	TraceFromActor(LowTraceHeight, VaultTraceRange, LowTraceResult);
	TraceFromActor(MidTraceHeight, VaultTraceRange, MidTraceResult);

	// Only consider short objects
	if (!LowTraceResult.bBlockingHit || MidTraceResult.bBlockingHit)
		return false;

	FVector VaultDirection = -LowTraceResult.ImpactNormal;

	// Get information about depth of object ahead
	FHitResult DepthTraceResult;
	bool bDepthHit = DepthTrace(DepthTraceResult, VaultDirection);
	LastObstacleHeight = GetLastObstacleHeight(VaultDirection);

	// DEBUG
	DebugTrace(LowTraceResult);
	DebugTrace(MidTraceResult);
	DebugTrace(DepthTraceResult);

	if (CanVaultOver(DepthTraceResult))
		StartVaultOver();

	return false;
}

bool UVaultComponent::DepthTrace(FHitResult& DepthTraceResult, FVector VaultDirection) {
	// Check for depth of object, if short then vault, if long, then half-climb

	FVector DepthTraceStart =
		LowTraceResult.ImpactPoint + // start here
		FVector::DownVector * LowTraceHeight +	// go to floor
		FVector::UpVector * ActorHeight +  // go to head height
		VaultDirection * DepthTraceDistance;	// go in direction of normal

	FVector DepthTraceEnd = DepthTraceStart + FVector::DownVector * DepthTraceRange;

	return GetWorld()->LineTraceSingleByChannel(
		DepthTraceResult,
		DepthTraceStart,
		DepthTraceEnd,
		ECollisionChannel::ECC_WorldStatic,
		TraceCollisionParams
	);
}

float UVaultComponent::GetLastObstacleHeight(FVector VaultDirection) {

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
	
	DebugTrace(HeightTraceResult);

	return HeightTraceEnd.Z - ActorFeet.Z;
}

EVaultType UVaultComponent::GetVaultType(float ObstacleHeight) {

	if (ObstacleHeight < ShortVaultMaxHeight)
		return EVaultType::Short;
	else if (ObstacleHeight < TallVaultMaxHeight)
		return EVaultType::Tall;

	return EVaultType::Tall;
}
#pragma endregion


#pragma region Vault Over
bool UVaultComponent::CanVaultOver(FHitResult DepthTraceResult) {
	bool bDepthHit = DepthTraceResult.bBlockingHit || DepthTraceResult.bStartPenetrating;
	return !bDepthHit;
}

void UVaultComponent::StartVaultOver() {
	if (bIsBusy)
		return;

	bIsBusy = true;
	bVaultTrigger = true;

	// Set vault animation type based on height of obstacle
	VaultType = GetVaultType(LastObstacleHeight);

	// Snap actor rotation to obstacle's
	FQuat TargetRotation = (-LowTraceResult.ImpactNormal).ToOrientationQuat();
	Hero->SetActorRotation(TargetRotation);

	// Temporarily deactivate collider
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (CharacterMovement)
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying);
}

void UVaultComponent::StopVaultOver() {
	bVaultTrigger = false;
	bIsBusy = false;

	Collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Reset movement mode
	if (CharacterMovement) {
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking);
	}
}
#pragma endregion


#pragma region Vault Onto

#pragma endregion


#pragma region Utility
void UVaultComponent::TraceFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult) {
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
#pragma endregion


