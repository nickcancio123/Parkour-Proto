// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VaultComponent.generated.h"

// Enum type used to determine which vault-over animation to play
UENUM()
enum EVaultOverType
{
	Over_Short     UMETA(DisplayName = "Short"),
	Over_Tall      UMETA(DisplayName = "Tall")
};

// Enum type used to determine which vault-onto animation to play
UENUM()
enum EVaultOntoType
{
	Onto_Short     UMETA(DisplayName = "Short"),
	Onto_Mid     UMETA(DisplayName = "Mid"),
	Onto_Tall      UMETA(DisplayName = "Tall")
};


// The vault component handles character traversal of short objects.
// This means allowing the character to jump over or on top of shorter objects.
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LEGEND_API UVaultComponent : public UActorComponent
{
	GENERATED_BODY()


#pragma region General

// Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float ActorHeight = 150;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float RootHeight = 90;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General")
		bool bUseDebug = true;
	
#pragma region TRACES
	// The trace range for low and mid forward traces
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float VaultTraceRange = 90;

	// Low Trace: searches for obstacles present ahead at waist height
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float MinVaultHeight = 40;

	// Mid Trace: searches for obstacles present ahead at face height
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces")
		float MaxVaultHeight = 105;

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

	float LastObstacleHeight;


// Methods
protected:
	virtual void BeginPlay() override;

public:
	UVaultComponent();

	// The public interface for vaulting system. Handles vaulting over and onto small objects. 
	// Returns true if can vault, false if cannot vault
	bool QueryVaultSystem();

private:
	bool DepthTrace(FVector VaultDirection);
	float GetLastObstacleHeight(FVector VaultDirection);

#pragma endregion



#pragma region Vault Over

// Variables
public:
	// For when vaulting over short object. Should be above low trace height
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vault Over")
		float VAULT_OVER_SHORT_MAX_HEIGHT = 70;

	// For when vaulting over taller object. Should be above low trace height
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vault Over")
		float VAULT_OVER_TALL_MAX_HEIGHT = 105;

	UPROPERTY(BlueprintReadOnly, Category = "Vault Over")
		TEnumAsByte<EVaultOverType> VaultOverType;

	// Used to trigger vault animation
	UPROPERTY(BlueprintReadOnly, Category = "Vault Over")
		bool bVaultOverTrigger = false;


// Methods
public:
	void StopVaultOver();

private:
	bool CanVaultOver();
	void StartVaultOver();
	EVaultOverType GetVaultOverType(float ObstacleHeight);

#pragma endregion



#pragma region Vault Onto

// Variables
public:
	// The thresholds for various vault-onto heights, which dictate animations
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vault Onto")
		float VAULT_ONTO_SHORT_MAX_HEIGHT = 55;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vault Onto")
		float VAULT_ONTO_MID_MAX_HEIGHT = 80;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vault Onto")
		float VAULT_ONTO_TALL_MAX_HEIGHT = 105;


	UPROPERTY(BlueprintReadOnly, Category = "Vault Onto")
		TEnumAsByte<EVaultOntoType> VaultOntoType;

	UPROPERTY(BlueprintReadOnly, Category = "Vault Onto")
		bool bVaultOntoTrigger = false;


// Methods
public:
	void StopVaultOnto();

private:
	bool CanVaultOnto();
	void StartVaultOnto();
	EVaultOntoType GetVaultOntoType(float ObstacleHeight);

#pragma endregion



#pragma region Utility
	void TraceForwardFromActor(float TraceHeight, float TraceRange, FHitResult& TraceResult);
	void DebugTrace(FHitResult TraceResult, bool bPersist = false, float Lifetime = 2);
#pragma endregion

};
