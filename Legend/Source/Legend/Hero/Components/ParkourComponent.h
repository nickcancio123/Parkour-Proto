// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ParkourComponent.generated.h"


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
		float MinObstacleHeightToParkour = 40;

	// Used for the obstacle trace high
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle Traces")
		float MaxObstacleHeightToParkour = 230;

	//===Height Trace===
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Height Trace")
		float HeightTraceDepth = 15;

	//===Depth Trace===
	// Used for depth trace: if obstacle depth is greater than -> climb, less than -> vault
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Depth Trace")
		float MaxObstacleDepthToVault = 60;
#pragma endregion

private:
	class AActor* Actor;
	class UCapsuleComponent* Collider;
	class UCharacterMovementComponent* CharacterMovement;

	FCollisionQueryParams TraceCollisionParams;
	FVector ActorFeet;

	FHitResult LowObstacleTraceResult;
	FHitResult MidObstacleTraceResult;
	FHitResult HighObstacleTraceResult;
	FHitResult HeightTraceResult;
	FHitResult DepthTraceResult;

	// Height at which height trace starts
	float HeightTraceStartHeight;

	// Discerned height of obstacle hit by traces
	float ObstacleHeight;


// Methods
protected:
	virtual void BeginPlay() override;

public:
	UParkourComponent();

	// Public interfaces that congregates vaulting and climbing. Returns true if successfully parkoured
	// False if not. bIsAuto specifies if function is being called on user input or every tick
	bool TryParkour(bool bIsAutoCall);

private:
	void RunObstacleTraces();

	// Height determines which animations to play
	void RunHeightTrace();

	// Depth determines whether vault or climb
	void RunDepthTrace();

#pragma endregion



#pragma region Climbing
// Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		bool bCanAutoClimb = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Climbing")
		float MaxObstacleHeightToAutoClimb = 80;

// Methods
private:
	// Does obstacle fit climb parameters
	bool CanClimb();
	
	// Do climb settings permit circumstances
	bool ShouldClimb(bool bCanClimb, bool bIsAutoCall);
#pragma endregion



#pragma region Vaulting
// Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		bool bCanAutoVault = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vaulting")
		float MaxObstacleHeightToAutoVault = 80;

// Methods
private:
	// Does obstacle fit vault parameters
	bool CanVault();

	// Do vault settings permit circumstances
	bool ShouldVault(bool bCanVault, bool bIsAutoCall);

#pragma endregion


#pragma region Utility	
	// Traces along the actor forward vector from actor at specified height
	void TraceForwardFromActor(FHitResult& TraceResult, float TraceHeight, float TraceRange);

	// Traces downward, in front of the actor, at specified start height and depth
	void TraceDownAheadOfActor(FHitResult& TraceResult, float TraceHeight, float TraceDepth, float TraceRange);

	void DebugTrace(FHitResult TraceResult, bool bPersist = false, float Lifetime = 2);
#pragma endregion 
};
