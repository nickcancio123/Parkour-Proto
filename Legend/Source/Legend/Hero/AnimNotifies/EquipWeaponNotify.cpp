// Fill out your copyright notice in the Description page of Project Settings.

#include "Legend/Hero/Hero.h"
#include "Legend/Hero/Components/CombatComponent.h"
#include "Legend/Hero/AnimNotifies/EquipWeaponNotify.h"

void UEquipWeaponNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
	AHero* Hero = Cast<AHero>(MeshComp->GetOwner());

	// Protects against running in the editor
	if (!Hero)
		return;

	UCombatComponent* CombatComp = Hero->FindComponentByClass<UCombatComponent>();

	if (!CombatComp)
		return;

	if (bEquipWeapon)
		CombatComp->EquipWeaponCallback(MeshComp);
	else
		CombatComp->UnequipWeaponCallback(MeshComp);

	return;
}