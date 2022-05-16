// Fill out your copyright notice in the Description page of Project Settings.

#include "Legend/Hero/Hero.h"
#include "Legend/Hero/ResetJumpTriggerNotify.h"

void UResetJumpTriggerNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {

	AHero* HeroChar = Cast<AHero>(MeshComp->GetOwner());
	HeroChar->ResetJumpTrigger();
	UE_LOG(LogTemp, Warning, TEXT("Notify called"));

	return;
}
