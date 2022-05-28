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

	if (bIsBusy)
		return false;

	ActorFeet = Hero->GetActorLocation() + FVector::DownVector * RootHeight;

	// Get data from space ahead of actor
	TraceForwardFromActor(MinVaultHeight, VaultTraceRange, LowTraceResult);
	TraceForwardFromActor(MaxVaultHeight, VaultTraceRange, MidTraceResult);

	// Only consider short objects
	if (!LowTraceResult.bBlockingHit || MidTraceResult.bBlockingHit)
		return false;

	FVector VaultDirection = -LowTraceResult.ImpactNormal;

	// Get information about depth of object ahead
	bool bDepthHit = DepthTrace(VaultDirection);
	LastObstacleHeight = GetLastObstacleHeight(VaultDirection);

	// DEBUG
	DebugTrace(LowTraceResult);
	DebugTrace(MidTraceResult);
	DebugTrace(DepthTraceResult);

	bool bCanVaultOver = CanVaultOver();
	bool bCanVaultOnto = CanVaultOnto();

	if (bCanVaultOver)
		StartVaultOver();
	else if (bCanVaultOnto)
		StartVaultOnto();

	return bCanVaultOver || bCanVaultOnto;
}

bool UVaultComponent::DepthTrace(FVector VaultDirection) {
	// Check for depth of object, if short then vault, if long, then half-climb

	FVector DepthTraceStart =
		LowTraceResult.ImpactPoint + // start here
		FVector::DownVector * MinVaultHeight +	// go to floor
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
		FVector::UpVector * (MaxVaultHeight - MinVaultHeight) + // go up to height of mid trace
		VaultDirection * 10;	// go in direction of normal

	FVector HeightTraceEnd = HeightTraceStart + FVector::DownVector * (MaxVaultHeight - MinVaultHeight);
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

#pragma endregion


#pragma region Vault Over
bool UVaultComponent::CanVaultOver() {
	bool bDepthHit = DepthTraceResult.bBlockingHit || DepthTraceResult.bStartPenetrating;
	return !bDepthHit;
}

void UVaultComponent::StartVaultOver() {

	bIsBusy = true;
	bVaultOverTrigger = true;

	VaultOverType = GetVaultOverType(LastObstacleHeight);

	// Snap actor rotation to obstacle's
	FQuat TargetRotation = (-LowTraceResult.ImpactNormal).ToOrientationQuat();
	Hero->SetActorRotation(TargetRotation);

	// Temporarily deactivate collider
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (CharacterMovement)
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying);
}

void UVaultComponent::StopVaultOver() {
	bVaultOverTrigger = false;
	bIsBusy = false;

	Collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Reset movement mode
	if (CharacterMovement) {
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking);
	}
}

EVaultOverType UVaultComponent::GetVaultOverType(float ObstacleHeight) {

	if (ObstacleHeight < VAULT_OVER_SHORT_MAX_HEIGHT) {
		return EVaultOverType::Over_Short;
	}
	else if (ObstacleHeight < VAULT_OVER_TALL_MAX_HEIGHT) {
		return EVaultOverType::Over_Tall;
	}

	return EVaultOverType::Over_Tall;
}
#pragma endregion


#pragma region Vault Onto
bool UVaultComponent::CanVaultOnto() {
	bool bDepthHit = DepthTraceResult.bBlockingHit && !DepthTraceResult.bStartPenetrating;
	return bDepthHit;
}

void UVaultComponent::StartVaultOnto() {

	bIsBusy = true;
	bVaultOntoTrigger = true;

	VaultOntoType = GetVaultOntoType(LastObstacleHeight);

	// Snap actor rotation to obstacle's
	FQuat TargetRotation = (-LowTraceResult.ImpactNormal).ToOrientationQuat();
	Hero->SetActorRotation(TargetRotation);

	// Temporarily deactivate collider
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// DEBUG
	if (bUseDebug)
		DrawDebugSphere(GetWorld(), PostVaultTargetLocation, 10, 10, FColor::Cyan, true, 2);

	if (CharacterMovement)
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying);
}

void UVaultComponent::StopVaultOnto() {
	bVaultOntoTrigger = false;
	bIsBusy = false;

	Collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// Reset movement mode
	if (CharacterMovement) {
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking);
	}
}

EVaultOntoType UVaultComponent::GetVaultOntoType(float ObstacleHeight) {
	if (ObstacleHeight < VAULT_ONTO_SHORT_MAX_HEIGHT) {
		return EVaultOntoType::Onto_Short;
	} else if (ObstacleHeight < VAULT_ONTO_MID_MAX_HEIGHT) {
		return EVaultOntoType::Onto_Mid;
	} else if (ObstacleHeight < VAULT_ONTO_TALL_MAX_HEIGHT) {
		return EVaultOntoType::Onto_Tall;
	}

	return EVaultOntoType::Onto_Tall;
}
#pragma endregion


#pragma region Utility
void UVaultComponent::TraceForwardFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult) {
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


