// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Hero.generated.h"

UCLASS()
class LEGEND_API AHero : public ACharacter
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:	
	AHero();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	void OnMoveForwardInput(float Axis);
	void OnMoveRightInput(float Axis);
	void OnLookUpInput(float Axis);
	void OnLookRightInput(float Axis);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* FollowCamera;

};
