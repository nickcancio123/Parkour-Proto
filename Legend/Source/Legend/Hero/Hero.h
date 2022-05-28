// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Hero.generated.h"

UCLASS()
class LEGEND_API AHero : public ACharacter
{
	GENERATED_BODY()

////////////
// VARIABLES
////////////
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Climbing")
		class UClimbComponent* ClimbComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Vaulting")
		class UVaultComponent* VaultComp;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Locomotion")
		float RunSpeed = 450;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Locomotion")
		float SprintSpeed = 650;


	UPROPERTY(BlueprintReadOnly, Category = "Locomotion")
		bool bIsSprinting;

	UPROPERTY(BlueprintReadOnly, Category = "Locomotion")
		bool bIsMoveInput;

	UPROPERTY(BlueprintReadOnly, Category = "Locomotion")
		bool bJumpTrigger = false;

	// Every frame, stores forward and backward move input
	FVector MoveInput;


private:
	class UCharacterMovementComponent* MovementComp;

	bool bIsMoveForwardInput;
	bool bIsMoveRightInput;


//////////
// METHODS
//////////
protected:
	virtual void BeginPlay() override;

public:	
	AHero();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// Basic Locomotion Input
	void OnMoveForwardInput(float Axis);
	void OnMoveRightInput(float Axis);
	void OnLookUpInput(float Axis);
	void OnLookRightInput(float Axis);

	void OnSprintInput();
	void OnStopSprintInput();

	// Jump Input
	void OnJumpInput();
	void OnJumpStopInput();

	void SetupCamera();

public:
	void ResetJumpTrigger();

	FVector GetMoveInput();
};
