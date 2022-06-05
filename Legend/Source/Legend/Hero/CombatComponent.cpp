// Fill out your copyright notice in the Description page of Project Settings.

#include "Legend/Hero/Hero.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Legend/Hero/CombatComponent.h"

UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	Hero = Cast<AHero>(GetOwner());
	MovementComp = Hero->FindComponentByClass<UCharacterMovementComponent>();
}


void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UCombatComponent::TryAttack() {

	UE_LOG(LogTemp, Warning, TEXT("Try attack"));

	if (!bWeaponEquipped) {
		EquipWeapon();
		return false;
	}

	return false;
}

void UCombatComponent::ToggleEquipped() {
	if (bWeaponEquipped)
		UnequipWeapon();
	else
		EquipWeapon();
}

void UCombatComponent::EquipWeapon() {
	UE_LOG(LogTemp, Warning, TEXT("Equipped"));

	bWeaponEquipped = true;
	Hero->UpdateMaxWalkSpeed();

	MovementComp->bOrientRotationToMovement = false;
	Hero->bUseControllerRotationYaw = true;
}

void UCombatComponent::UnequipWeapon() {
	UE_LOG(LogTemp, Warning, TEXT("Unequipped"));

	bWeaponEquipped = false;
	Hero->UpdateMaxWalkSpeed();

	MovementComp->bOrientRotationToMovement = true;
	Hero->bUseControllerRotationYaw = false;
}
