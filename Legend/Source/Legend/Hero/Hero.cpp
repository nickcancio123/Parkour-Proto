// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Legend/Hero/Hero.h"

AHero::AHero()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("Camera Boom");
	CameraBoom->SetupAttachment(RootComponent);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("Follow Camera");
	FollowCamera->SetupAttachment(CameraBoom);
}

void AHero::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AHero::OnMoveForwardInput);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHero::OnMoveRightInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AHero::OnLookUpInput);
	PlayerInputComponent->BindAxis("LookRight", this, &AHero::OnLookRightInput);
}


#pragma region Basic Locomotion
void AHero::OnMoveForwardInput(float Axis) {
	// Get controller forward axis
	FRotator ControllerYaw = FRotator(0, GetControlRotation().Yaw, 0);
	FVector ControllerForward = FRotationMatrix(ControllerYaw).GetUnitAxis(EAxis::X);

	AddMovementInput(ControllerForward, Axis);
}

void AHero::OnMoveRightInput(float Axis) {
	// Get controller right axis
	FRotator ControllerYaw = FRotator(0, GetControlRotation().Yaw, 0);
	FVector ControllerRight = FRotationMatrix(ControllerYaw).GetUnitAxis(EAxis::Y);

	AddMovementInput(ControllerRight, Axis);
}

void AHero::OnLookUpInput(float Axis) {
	AddControllerPitchInput(Axis);
}

void AHero::OnLookRightInput(float Axis) {
	AddControllerYawInput(Axis);
}

#pragma endregion

