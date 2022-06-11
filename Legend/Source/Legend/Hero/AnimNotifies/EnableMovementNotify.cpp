// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Legend/Hero/AnimNotifies/EnableMovementNotify.h"

void UEnableMovementNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
	ACharacter* Character = Cast<ACharacter>(MeshComp->GetOwner());

	// Protects against running in the editor
	if (!Character)
		return;

	UCharacterMovementComponent* MovementComp = Character->GetCharacterMovement();

	if (!MovementComp)
		return;

	if (bEnableMovement)
		MovementComp->SetMovementMode(EMovementMode::MOVE_Walking);
	else
		MovementComp->DisableMovement();

	return;
}