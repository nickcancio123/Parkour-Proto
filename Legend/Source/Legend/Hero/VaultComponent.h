// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VaultComponent.generated.h"

// Enum type used to determine which vault animation to play
UENUM()
enum EVaultType
{
	Short     UMETA(DisplayName = "Short"),
	Tall      UMETA(DisplayName = "Tall")
};


// The vault component handles character traversal of short objects.
// This means allowing the character to jump over or on top of shorter objects.
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LEGEND_API UVaultComponent : public UActorComponent
{
	GENERATED_BODY()

//==========
// VARIABLES
//==========
public:

	// General
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float ActorHeight = 150;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float RootHeight = 90;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
		bool bUseDebug = true;


	// Vaulting 
	// For when vaulting over short object. Should be above low trace height
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vaulting")
		float ShortVaultMaxHeight = 70;

	// For when vaulting over taller object. Should be above low trace height
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vaulting")
		float TallVaultMaxHeight = 105;

	// Specificies the post-vault-onto distance
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		float VaultOntoDistance = 45;


	UPROPERTY(BlueprintReadOnly, Category = "Vaulting")
		TEnumAsByte<EVaultType> VaultType;

	// Used to trigger vault animation
	UPROPERTY(BlueprintReadOnly, Category = "Vaulting")
		bool bVaultOverTrigger = false;

	UPROPERTY(BlueprintReadOnly, Category = "Vaulting")
		bool bVaultOntoTrigger = false;


#pragma region TRACES
	// The trace range for low, mid, and high forward traces
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float VaultTraceRange = 90;

	// Low Trace: searches for obstacles present ahead at waist height
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float LowTraceHeight = 40;

	// Mid Trace: searches for obstacles present ahead at face height
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float MidTraceHeight = 105;

	// Depth Trace: checks the depth of the object ahead of actor (goes downward)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float DepthTraceHeight = 150;

	// How far down the trace should go from starting point
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float DepthTraceRange = 110;

	// How far from obstacle impact point should the traced start from
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float DepthTraceDistance = 100;

#pragma endregion 


	// Is true when actor is busy vaulting over or onto
	bool bIsBusy = false;


private:
	class AHero* Hero;
	class UCapsuleComponent* Collider;
	class UCharacterMovementComponent* CharacterMovement;

	FCollisionQueryParams TraceCollisionParams;
	FVector ActorFeet;

	FHitResult LowTraceResult;
	FHitResult MidTraceResult;
	FHitResult DepthTraceResult;

	// Location to set after vaulting onto object
	FVector PostVaultTargetLocation;


//========
// METHODS
//========
protected:
	virtual void BeginPlay() override;

public:
	UVaultComponent();

	// The public interface for vaulting system. Handles vaulting over and onto small objects. 
	// Returns true if can vault, false if cannot vault
	bool QueryVaultSystem();

	// Callback used by notify to reset vault-over
	void StopVaultOver();

	void StopVaultOnto();

private:
	EVaultType GetVaultType(float ObstacleHeight);

	bool CanVaultOver();
	void StartVaultOver();

	bool CanVaultOnto();
	void StartVaultOnto(FVector VaultDirection);

	// UTILITY
	void TraceForwardFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult);
	void DebugTrace(FHitResult TraceResult, bool bPersist = false, float Lifetime = 2);

	bool DepthTrace(FVector VaultDirection);
	float GetLastObstacleHeight(FVector VaultDirection);
};
