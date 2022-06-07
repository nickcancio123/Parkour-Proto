// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClimbComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LEGEND_API UClimbComponent : public UActorComponent
{
	GENERATED_BODY()


#pragma region General
// Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General")
		bool bComponentEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float ActorHeight = 170;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float RootHeight = 90;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		bool bUseDebug = true;

private:
	class AHero* Hero;
	class UCapsuleComponent* Collider;
	class UCharacterMovementComponent* CharacterMovement;

	FCollisionQueryParams TraceCollisionParams;
	FVector ActorFeet;


// Methods
protected:
	virtual void BeginPlay() override;

public:
	UClimbComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
#pragma endregion



#pragma region Climbing
public:
//Variables:
	// The trace range for low, mid, and high forward traces
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float ClimbTraceRange = 90;

	// Wall Trace: looking for wall at just below where hands would go
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float WallTraceHeight = 140;

	// Clearance Trace: looking for wall at just above where hands would go
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float ClearanceTraceHeight = 230;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float FallingTraceHeightOffset = -25;


	// The offset from the ledge that the hero is snapped to prior to climbing
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		FVector HeroLedgeOffset = FVector(-50, 0, -70);

	// Used to trigger climb animation
	UPROPERTY(BlueprintReadOnly, Category = "Climbing")
		bool bClimbTrigger = false;

	// Is true when hero is busy climbing
	bool bIsBusy = false;

private:
	FHitResult WallTraceResult;	
	FHitResult ClearanceTraceResult;


// Methods
public:
	// The public interface for climbing system. Handles climbing into tall (above head) objects. 
	// Returns true if can climb, false if cannot climb
	bool QueryClimbSystem();
	void StopClimb();
	
private:
	bool CanClimb();
	void StartClimb();
	FVector GetLedgePosition();
#pragma endregion 



#pragma region Utility
	void TraceForwardFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult);

	void DebugTrace(FHitResult TraceResult, bool bPersist = false, float Lifetime = 2);
#pragma endregion
};
