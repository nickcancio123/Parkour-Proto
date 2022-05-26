// Fill out your copyright notice in the Description page of Project Settings.

#include "Legend/Hero/Hero.h"
#include "Legend/Hero/VaultComponent.h"
#include "Legend/Hero/ResetVaultNotify.h"

void UResetVaultNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
	AHero* HeroChar = Cast<AHero>(MeshComp->GetOwner());

	// Protects against running in the editor
	if (!HeroChar)
		return;

	UVaultComponent* VaultComp = HeroChar->FindComponentByClass<UVaultComponent>();

	if (!VaultComp)
		return;

	VaultComp->StopVault();

	return;
}