// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ParkourComponent.generated.h"

USTRUCT(BlueprintType) 
struct FParkourVariant
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ObstacleHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bUseLedgeOffset = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector LedgeOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimMontage* Montage;
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LEGEND_API UParkourComponent : public UActorComponent
{
	GENERATED_BODY()


#pragma region General
// Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float ActorHeight = 170;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
		float RootHeight = 90;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General")
		bool bUseDebug = true;

	bool bIsBusy = false;

#pragma region Traces
	//===OBSTACLE TRACES===
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle Traces")
		float ObstacleTraceRange = 90;

	// Used for the obstacle trace low
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle Traces")
		float MinObstacleTraceHeight = 40;

	// Used for the obstacle trace high
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle Traces")
		float MaxObstacleTraceHeight = 230;

	//===Height Trace===
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Height Trace")
		float HeightTraceDepth = 15;

	//===Depth Trace===
	// Used for depth trace: if obstacle depth is greater than -> climb, less than -> vault
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Depth Trace")
		float MaxObstacleDepthToVault = 50;
#pragma endregion

private:
	class ACharacter* Character;
	class UCapsuleComponent* Collider;
	class UCharacterMovementComponent* CharacterMovement;

	FCollisionQueryParams TraceCollisionParams;
	FVector ActorFeet;

	FHitResult LowObstacleTraceResult;
	bool bLowObstacleHit;

	FHitResult MidObstacleTraceResult;
	bool bMidObstacleHit;

	FHitResult HighObstacleTraceResult;
	bool bHighObstacleHit;

	FHitResult ClearanceTraceResult;
	FHitResult HeightTraceResult;
	FHitResult DepthTraceResult;

	// Discerned height of obstacle hit by traces
	float ObstacleHeight;

	bool bWasUsingControllerYaw;


// Methods
protected:
	virtual void BeginPlay() override;

public:
	UParkourComponent();

	// Public interfaces that congregates vaulting and climbing. Returns true if successfully parkoured
	// False if not. bIsAuto specifies if function is being called on user input or every tick
	bool TryParkour(bool bIsAutoCall);

	// For anim notifies to use 
	void StopParkourCallback();

private:
	void RunObstacleTraces();

	// Obstacle height determines which animations to play
	void GetObstacleHeight();

	// Depth determines whether vault or climb
	void GetObstacleDepth();

	void RunClearanceTrace();

	// Snaps character to obstacle and prepares movement component
	void StartParkour(bool bClimbing);

	FVector GetLedgePosition();

	FParkourVariant GetParkourVariant(const TArray<FParkourVariant>* ParkourVariants);
#pragma endregion



#pragma region Climbing
// Variables
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float MinClimbHeight = 100;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float MaxClimbHeight = 230;

#pragma region Auto Climbing
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		bool bCanAutoClimb = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		bool bAutoClimbWhileFalling = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float MinAutoClimbHeight = 80;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float MaxAutoClimbHeight = 230;
#pragma endregion

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		TArray<FParkourVariant> ClimbVariants;

// Methods
private:
	// Does obstacle fit climb parameters
	bool CanClimb();
	
	// Do climb settings permit circumstances
	bool ShouldClimb(bool bCanClimb, bool bIsAutoCall);

	void StartClimb();
#pragma endregion



#pragma region Vaulting
// Variables
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		float MinVaultHeight = 50;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		float MaxVaultHeight = 160;
	
#pragma region Auto Vault
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		bool bCanAutoVault = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		bool bAutoVaultWhileFalling = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		float MinAutoVaultHeight = 80;					   
														   
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		float MaxAutoVaultHeight = 230;
#pragma endregion

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		TArray<FParkourVariant> VaultVariants;

// Methods
private:
	// Does obstacle fit vault parameters
	bool CanVault();

	// Do vault settings permit circumstances
	bool ShouldVault(bool bCanVault, bool bIsAutoCall);

	void StartVault();
#pragma endregion



#pragma region Utility	
	// Traces along the actor forward vector from actor at specified height
	void TraceForwardFromActor(FHitResult& TraceResult, float TraceHeight, float TraceRange);

	void DebugTrace(FHitResult TraceResult, bool bPersist = false, float Lifetime = 2);

	// Returns (one of) the trace result that hit obstacle
	FHitResult GetObstacleTraceResult();
#pragma endregion 
};
