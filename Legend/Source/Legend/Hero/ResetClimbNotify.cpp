// Fill out your copyright notice in the Description page of Project Settings.

#include "Legend/Hero/Hero.h"
#include "Legend/Hero/ClimbComponent.h"
#include "Legend/Hero/ResetClimbNotify.h"


void UResetClimbNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
	AHero* Hero = Cast<AHero>(MeshComp->GetOwner());

	// Protects against running in the editor
	if (!Hero)
		return;

	UClimbComponent* ClimbComp = Hero->FindComponentByClass<UClimbComponent>();

	if (!ClimbComp)
		return;
	
	ClimbComp->StopClimb();

	return;
}

