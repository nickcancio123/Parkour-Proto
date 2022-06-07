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

#pragma region Traces
	//===OBSTACLE TRACES===
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle Traces")
		float ObstacleTraceRange = 90;

	// Used for the obstacle trace low
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle Traces")
		float MinObstacleHeightToParkour = 40;

	// Used to detect objects at around head height
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle Traces")
		float ObstacleTraceHeightHigh = 220;

	// Used for the clearance trace
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Obstacle Traces")
		float MaxObstacleHeightToParkour = 230;

	//===Height Trace===
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Height Trace")
		float HeightTraceDepth = 15;

	// Used for height trace when obstacle is hit by low obstacle trace
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Height Trace")
		float LowHeightTraceHeight = 180;

	//===Depth Trace===
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Depth Trace")
		float DepthTraceDepth = 15;
#pragma endregion

private:
	class AActor* Actor;
	class UCapsuleComponent* Collider;
	class UCharacterMovementComponent* CharacterMovement;

	FCollisionQueryParams TraceCollisionParams;
	FVector ActorFeet;

	FHitResult LowObstacleTraceResult;
	FHitResult HighObstacleTraceResult;
	FHitResult ClearanceTraceResult;
	FHitResult HeightTraceResult;
	FHitResult DepthTraceResult;

	float ObstacleHeight;


// Methods
protected:
	virtual void BeginPlay() override;

public:
	UParkourComponent();

	// Public interfaces that congregates vaulting and climbing. Returns true if successfully parkoured
	// False if not. bIsAuto specifies if function is being called on user input or every tick
	bool TryParkour(bool bIsAuto);

	void RunObstacleTraces();

#pragma endregion



#pragma region Climbing
// Variables

// Methods
#pragma endregion



#pragma region Vaulting
// Variables

// Methods
#pragma endregion


#pragma region Utility	
	void TraceForwardFromActor(FHitResult& TraceResult, float TraceHeight, float TraceRange);
	void DebugTrace(FHitResult TraceResult, bool bPersist = false, float Lifetime = 2);
#pragma endregion 
		
};
