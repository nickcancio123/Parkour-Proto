// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClimbComponent.generated.h"

// Enum type used to determine which vault animation to play
UENUM()
enum EVaultType
{
	Short     UMETA(DisplayName = "Short"),
	Tall      UMETA(DisplayName = "Tall")
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LEGEND_API UClimbComponent : public UActorComponent
{
	GENERATED_BODY()

	//==========
	// VARIABLES
	//==========
public:
	// DEBUG
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Debug")
		bool bUseDebug = true;

	// GENERAL
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float ActorHeight = 150;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float RootHeight = 90;

	// Vaulting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vaulting")
		TEnumAsByte<EVaultType> VaultType;

		// For when vaulting over short object. Should be above low trace height
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vaulting")
		float ShortVaultMaxHeight;

		// For when vaulting over taller object. Should be above low trace height
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vaulting")
		float TallVaultMaxHeight;

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

	FHitResult LowTraceResult;	
	FHitResult MidTraceResult;
	FHitResult HighTraceResult;

	float LastObstacleHeight;


	//========
	// METHODS
	//========
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
	void CanVaultOrShortClimb(bool& bCanVault, bool& bCanHalfClimb);
	void StartVault();


	// UTILITY
	void TraceFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult);

	EVaultType GetVaultType(float ObstacleHeight);

	// DEBUG
	void DebugTrace(FHitResult TraceResult, bool bPersist = false, float Lifetime = 2);
};
