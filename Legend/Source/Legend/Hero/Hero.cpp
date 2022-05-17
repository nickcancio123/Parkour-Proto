// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Legend/Hero/HeroAnimInstance.h"
#include "Legend/Hero/Hero.h"
#include "Hero.h"

AHero::AHero()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("Camera Boom");
	CameraBoom->SetupAttachment(RootComponent);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("Follow Camera");
	FollowCamera->SetupAttachment(CameraBoom);

	MovementComp = GetCharacterMovement();
}

void AHero::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	bIsMoveInput = bIsMoveForwardInput || bIsMoveRightInput;
}

void AHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Basic locomotion input
	PlayerInputComponent->BindAxis("MoveForward", this, &AHero::OnMoveForwardInput);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHero::OnMoveRightInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AHero::OnLookUpInput);
	PlayerInputComponent->BindAxis("LookRight", this, &AHero::OnLookRightInput);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AHero::OnSprintInput);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AHero::OnStopSprintInput);

	// Jump input
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AHero::OnJumpInput);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AHero::OnJumpStopInput);

}


#pragma region Basic Locomotion
void AHero::OnMoveForwardInput(float Axis) {
	bIsMoveForwardInput = Axis != 0;

	if (Axis == 0)
		return;

	// Get controller forward axis
	FRotator ControllerYaw = FRotator(0, GetControlRotation().Yaw, 0);
	FVector ControllerForward = FRotationMatrix(ControllerYaw).GetUnitAxis(EAxis::X);

	AddMovementInput(ControllerForward, Axis);
}

void AHero::OnMoveRightInput(float Axis) {
	bIsMoveRightInput = Axis != 0;

	if (Axis == 0)
		return;

	// Get controller right axis
	FRotator ControllerYaw = FRotator(0, GetControlRotation().Yaw, 0);
	FVector ControllerRight = FRotationMatrix(ControllerYaw).GetUnitAxis(EAxis::Y);

	AddMovementInput(ControllerRight, Axis);
}

void AHero::OnLookUpInput(float Axis) {
	if (Axis == 0)
		return;

	AddControllerPitchInput(Axis);
}

void AHero::OnLookRightInput(float Axis) {
	if (Axis == 0)
		return;

	AddControllerYawInput(Axis);
}

void AHero::OnSprintInput() {
	if (bIsSprinting)
		return;

	bIsSprinting = true;
	MovementComp->MaxWalkSpeed = SprintSpeed;
}

void AHero::OnStopSprintInput() {
	if (!bIsSprinting)
		return;

	bIsSprinting = false;
	MovementComp->MaxWalkSpeed = RunSpeed;
}

#pragma endregion


void AHero::OnJumpInput() {
	if (bJumpTrigger)
		return;

	// Jump not allowed while in the air
	if (MovementComp->IsFalling())
		return;

	bJumpTrigger = true;
	Jump();
}

void AHero::OnJumpStopInput() {
	if (!bJumpTrigger)
		return;

	ResetJumpTrigger();
}

void AHero::ResetJumpTrigger() {
	bJumpTrigger = false;
}
