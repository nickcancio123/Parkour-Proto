// Fill out your copyright notice in the Description page of Project Settings.

#include "Legend/Hero/Hero.h"
#include "Legend/Hero/AnimNotifies/ResetJumpTriggerNotify.h"

void UResetJumpTriggerNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
	AHero* HeroChar = Cast<AHero>(MeshComp->GetOwner());

	// Protects against running in the editor
	if (!HeroChar) 
		return;

	HeroChar->ResetJumpTrigger();
	return;
}
