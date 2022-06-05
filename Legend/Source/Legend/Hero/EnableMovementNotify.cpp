// Fill out your copyright notice in the Description page of Project Settings.

#include "Legend/Hero/Hero.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Legend/Hero/EnableMovementNotify.h"

void UEnableMovementNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
	AHero* Hero = Cast<AHero>(MeshComp->GetOwner());

	// Protects against running in the editor
	if (!Hero)
		return;

	UCharacterMovementComponent* MovementComp = Hero->GetCharacterMovement();

	if (!MovementComp)
		return;

	if (bEnableMovement)
		MovementComp->SetMovementMode(EMovementMode::MOVE_Walking);
	else
		MovementComp->DisableMovement();

	return;
}