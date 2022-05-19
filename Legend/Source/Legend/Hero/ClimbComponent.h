// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClimbComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LEGEND_API UClimbComponent : public UActorComponent
{
	GENERATED_BODY()

	////////////
	// VARIABLES
	////////////
public:
	// GENERAL
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float ActorHeight = 150;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float RootHeight = 90;

#pragma region TRACES

	// The trace range for low, mid, and high forward traces
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float ClimbTraceRange;

	// Low Trace: searches for obstacles present ahead at waist height
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float LowTraceHeight;

	// Mid Trace: searches for obstacles present ahead at face height
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float MidTraceHeight;

	// High Trace: searches for obstacles present ahead at above face height
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float HighTraceHeight;

	// Depth Trace: checks the depth of the object ahead of actor (goes downward)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float DepthTraceHeight;

		// How far down the trace should go from starting point
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float DepthTraceRange;
		
		// How far from obstacle impact point should the traced start from
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float DepthTraceDistance;

#pragma endregion 

	// Used to trigger vault animation
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Climbing")
		bool bVaultTrigger = false;

	// Is true when actor is busy vaulting or climbing
	bool bIsBusy = false;

private:
	AActor* Owner;
	class UCapsuleComponent* Collider;
	class UCharacterMovementComponent* CharacterMovement;

	FCollisionQueryParams TraceCollisionParams;
	FVector ActorFeet;

	// Traces
	FHitResult LowTraceResult;	
	FHitResult MidTraceResult;
	FHitResult HighTraceResult;

	//////////
	// METHODS
	//////////
protected:
	virtual void BeginPlay() override;

public:	
	UClimbComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// The public interface to climb. Returns true if can climb, false if cannot. 
	// Climb refers to vaulting and climbing
	bool TryToClimb();

	// Callback used by notify to reset after vault
	void StopVault();


private:
	void CheckForShortObstacles(bool& bCanVault, bool& bCanHalfClimb);
	void StartVault();


	// UTILITY
	void TraceFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult);

	// DEBUG
	void DebugTrace(FHitResult TraceResult, bool bPersist = false, float Lifetime = 2);
};
