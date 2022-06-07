// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Legend/Hero/Hero.h"
#include "Legend/Hero/Components/VaultComponent.h"

#pragma region General
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

bool UVaultComponent::QueryVaultSystem() {
	if (!bComponentEnabled)
		return false;

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
	ObstacleHeight = GetObstacleHeight();

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

float UVaultComponent::GetObstacleHeight() {

	LedgePosition = GetLedgePosition();
	return LedgePosition.Z - ActorFeet.Z;
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

	VaultOverType = GetVaultOverType();

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

EVaultOverType UVaultComponent::GetVaultOverType() {

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

	VaultOntoType = GetVaultOntoType();

	// Temporarily set movement mode to flying
	if (CharacterMovement)
		CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying);

	// Temporarily deactivate collider
	Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Snap actor rotation to obstacle's
	FQuat TargetRotation = (-LowTraceResult.ImpactNormal).ToOrientationQuat();
	Hero->SetActorRotation(TargetRotation);

	// Snap actor to correct climbing position
	if (VaultOntoType == EVaultOntoType::Onto_Tall) {
		FVector TargetPosition = GetLedgePosition() +
			Hero->GetActorForwardVector() * HeroLedgeOffset.X +
			Hero->GetActorRightVector() * HeroLedgeOffset.Y +
			Hero->GetActorUpVector() * HeroLedgeOffset.Z;
		Hero->SetActorLocation(TargetPosition, false, nullptr, ETeleportType::ResetPhysics);

		if (bUseDebug)
			DrawDebugSphere(GetWorld(), LedgePosition, 10, 10, FColor::Yellow, false, 5);

		if (bUseDebug)
			DrawDebugSphere(GetWorld(), TargetPosition, 10, 10, FColor::Magenta, false, 5);
	}
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

EVaultOntoType UVaultComponent::GetVaultOntoType() {
	if (ObstacleHeight < VAULT_ONTO_SHORT_MAX_HEIGHT) {
		return EVaultOntoType::Onto_Short;
	} else if (ObstacleHeight < VAULT_ONTO_MID_MAX_HEIGHT) {
		return EVaultOntoType::Onto_Mid;
	} else if (ObstacleHeight < VAULT_ONTO_TALL_MAX_HEIGHT) {
		return EVaultOntoType::Onto_Tall;
	}

	return EVaultOntoType::Onto_Tall;
}

FVector UVaultComponent::GetLedgePosition() {

	// Check height of object
	FVector TraceDirection = (MidTraceResult.TraceEnd - LowTraceResult.ImpactPoint).GetSafeNormal();
	TraceDirection = FVector(TraceDirection.X, TraceDirection.Y, 0);

	FVector HeightTraceStart = LowTraceResult.ImpactPoint + TraceDirection * 20;
	HeightTraceStart = FVector(HeightTraceStart.X, HeightTraceStart.Y, MidTraceResult.TraceEnd.Z);

	FVector HeightTraceEnd =
		HeightTraceStart + FVector::DownVector * (MaxVaultHeight - MinVaultHeight);
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

	return FVector(LowTraceResult.ImpactPoint.X, LowTraceResult.ImpactPoint.Y, HeightTraceEnd.Z);
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


