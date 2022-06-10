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

UENUM()
enum EParkourMoveType
{
	Climb     UMETA(DisplayName = "Climb"),
	Vault      UMETA(DisplayName = "Vault")
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces|Obstacle")
		float ObstacleTraceRange = 80;

	// Used for the obstacle trace low
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces|Obstacle")
		float MinObstacleTraceHeight = 40;

	// Used for the obstacle trace high
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces|Obstacle")
		float MaxObstacleTraceHeight = 230;

	//===Height Trace===
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces|Height")
		float HeightTraceDepth = 15;

	//===Depth Trace===
	// Used for depth trace: if obstacle depth is greater than -> climb, less than -> vault
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Traces|Depth")
		float MaxObstacleDepthToVault = 70;
#pragma endregion

private:
	class ACharacter* Character;
	class UCapsuleComponent* Collider;
	class UCharacterMovementComponent* CharacterMovement;
	FCollisionQueryParams TraceCollisionParams;
	FVector ActorFeet;

	FHitResult LowObstacleTraceResult;
	FHitResult MidObstacleTraceResult;
	FHitResult HighObstacleTraceResult;
	FHitResult ClearanceTraceResult;

	bool bLowObstacleHit;
	bool bMidObstacleHit;
	bool bHighObstacleHit;

	FHitResult HeightTraceResult;
	FHitResult DepthTraceResult;

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
	// Returns true if obstacle ahead and clearance above, false if not
	bool ValidObstacleAhead();

	// Obstacle height determines which animations to play
	void GetObstacleHeight();

	// Depth determines whether vault or climb
	void GetObstacleDepth();

	// Starts parkour sequence
	void StartParkour(EParkourMoveType MoveType);
#pragma endregion



#pragma region Climbing
// Variables
public:
	#pragma region Auto Climbing
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing|Auto Climbing")
		bool bCanAutoClimb = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing|Auto Climbing")
		bool bAutoClimbWhileFalling = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing|Auto Climbing")
		float MinAutoClimbHeight = 41;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing|Auto Climbing")
		float MaxAutoClimbHeight = 105;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing|Auto Climbing")
		float MinAutoClimbHeightFalling = 90;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing|Auto Climbing")
		float MaxAutoClimbHeightFalling = 230;
#pragma endregion

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float MinClimbHeight = 41;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float MaxClimbHeight = 230;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		TArray<FParkourVariant> ClimbVariants;

// Methods
private:
	bool CanClimb(bool bIsAutoCall);
	bool CanAutoClimb();
#pragma endregion



#pragma region Vaulting
// Variables
public:
	#pragma region Auto Vaulting
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting|Auto Vaulting")
		bool bCanAutoVault = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting|Auto Vaulting")
		bool bAutoVaultWhileFalling = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting|Auto Vaulting")
		float MinAutoVaultHeight = 41;					   
														   
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting|Auto Vaulting")
		float MaxAutoVaultHeight = 65;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting|Auto Vaulting")
		float MinAutoVaultHeightFalling = 999;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting|Auto Vaulting")
		float MaxAutoVaultHeightFalling = 999;
#pragma endregion

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		float MinVaultHeight = 41;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		float MaxVaultHeight = 170;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		TArray<FParkourVariant> VaultVariants;

// Methods
private:
	bool CanVault(bool bIsAutoCall);
	bool CanAutoVault();
#pragma endregion



#pragma region Utility	
	// Traces along the actor forward vector from actor at specified height
	void TraceForwardFromActor(FHitResult& TraceResult, float TraceHeight, float TraceLength);

	// Returns (one of) the trace result that hit obstacle
	FHitResult GetObstacleTraceResult();

	// Gets parkour variant based on obstacle height
	FParkourVariant GetParkourVariant(const TArray<FParkourVariant>* ParkourVariants);

	FVector GetLedgePosition();
	
	void DebugTrace(FHitResult TraceResult, bool bPersist = false, float Lifetime = 2);
#pragma endregion 
};
