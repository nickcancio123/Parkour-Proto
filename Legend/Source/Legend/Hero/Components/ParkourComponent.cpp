// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Legend/Hero/Components/ParkourComponent.h"

#pragma region General
UParkourComponent::UParkourComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UParkourComponent::BeginPlay()
{
	Super::BeginPlay();

	Actor = GetOwner();
	if (!Actor) {
		UE_LOG(LogTemp, Error, TEXT("No owner ref"));
		return;
	}

	TraceCollisionParams.AddIgnoredActor(Actor);
	Collider = Actor->FindComponentByClass<UCapsuleComponent>();
	CharacterMovement = Actor->FindComponentByClass<UCharacterMovementComponent>();
}

bool UParkourComponent::TryParkour(bool bIsAuto) {

	RunObstacleTraces();

	return false;
}

void UParkourComponent::RunObstacleTraces() {
	TraceForwardFromActor(LowObstacleTraceResult, MinObstacleHeightToParkour, ObstacleTraceRange);
	TraceForwardFromActor(HighObstacleTraceResult, MinObstacleHeightToParkour, ObstacleTraceRange);
	TraceForwardFromActor(ClearanceTraceResult, MaxObstacleHeightToParkour, ObstacleTraceRange);
}
#pragma endregion


#pragma region Climbing


#pragma endregion



#pragma region Vaulting


#pragma endregion



#pragma region Utility
void UParkourComponent::TraceForwardFromActor(FHitResult& TraceResult, float TraceHeight, float TraceRange) {
	FVector TraceStart = ActorFeet + FVector::UpVector * TraceHeight;
	FVector TraceEnd = TraceStart + Actor->GetActorForwardVector() * TraceRange;

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

	FColor Color = bHit ? FColor::Red : FColor::Blue;
	FVector TraceEnd = bHit ? TraceResult.ImpactPoint : TraceResult.TraceEnd;

	DrawDebugLine(GetWorld(), TraceResult.TraceStart, TraceEnd, Color, bPersist, LifeTime);

	if (bHit)
		DrawDebugSphere(GetWorld(), TraceEnd, 10, 10, Color, bPersist, LifeTime);
}
#pragma endregion
