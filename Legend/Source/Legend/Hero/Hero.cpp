// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Legend/Hero/Hero.h"
#include "Legend/Hero/ClimbComponent.h"
#include "Legend/Hero/VaultComponent.h"
#include "Legend/Hero/CombatComponent.h"
#include "DrawDebugHelpers.h"
#include "Hero.h"


#pragma region General
AHero::AHero()
{
	PrimaryActorTick.bCanEverTick = true;

	SetupCamera();

	MovementComp = GetCharacterMovement();
	MovementComp->bOrientRotationToMovement = true;

	ClimbComp = CreateDefaultSubobject<UClimbComponent>("Climb Component");
	this->AddOwnedComponent(ClimbComp);

	VaultComp = CreateDefaultSubobject<UVaultComponent>("Vault Component");
	this->AddOwnedComponent(VaultComp);

	CombatComp = CreateDefaultSubobject<UCombatComponent>("Combat Component");
	this->AddOwnedComponent(CombatComp);
}

void AHero::BeginPlay()
{
	Super::BeginPlay();
	
	ClimbComp = FindComponentByClass<UClimbComponent>();	
	VaultComp = FindComponentByClass<UVaultComponent>();	
	CombatComp = FindComponentByClass<UCombatComponent>();	
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

	// Combat
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AHero::OnAttackInput);
	PlayerInputComponent->BindAction("ToggleEquipped", IE_Pressed, this, &AHero::OnToggleEquippedInput);
	
}

#pragma endregion



#pragma region Camera
void AHero::SetupCamera() {
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("Camera Boom");
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->bInheritPitch = true;
	CameraBoom->bInheritYaw = true;
	CameraBoom->bInheritRoll = false;

	FVector FollowOffset = FVector(0, 0, 60);
	CameraBoom->SetRelativeLocation(FollowOffset);
	CameraBoom->TargetArmLength = 400;

	CameraBoom->bEnableCameraLag = true;
	CameraBoom->bEnableCameraRotationLag = true;
	CameraBoom->CameraLagSpeed = 25;
	CameraBoom->CameraRotationLagSpeed = 30;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("Follow Camera");
	FollowCamera->SetupAttachment(CameraBoom);
}
#pragma endregion



#pragma region Locomotion
void AHero::OnMoveForwardInput(float Axis) {
	bIsMoveForwardInput = Axis != 0;
	MoveInput.X = Axis;

	if (Axis == 0)
		return;

	// Get controller forward axis
	FRotator ControllerYaw = FRotator(0, GetControlRotation().Yaw, 0);
	FVector ControllerForward = FRotationMatrix(ControllerYaw).GetUnitAxis(EAxis::X);

	AddMovementInput(ControllerForward, Axis);
}

void AHero::OnMoveRightInput(float Axis) {
	bIsMoveRightInput = Axis != 0;
	MoveInput.Y = Axis;

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



#pragma region Jumping
void AHero::OnJumpInput() {
	// Jump not allowed while in the air
	if (MovementComp->IsFalling())
		return;

	bool bCanClimb = ClimbComp->QueryClimbSystem();
	if (bCanClimb)
		return;
	
	bool bCanVault = VaultComp->QueryVaultSystem();
	if (bCanVault)
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
#pragma endregion


#pragma region Combat
void AHero::OnAttackInput() {
	bool bAttacked = CombatComp->TryAttack();
}

void AHero::OnToggleEquippedInput() {
	CombatComp->ToggleEquipped();
}
#pragma endregion

FVector AHero::GetMoveInput() {
	return MoveInput;
}
