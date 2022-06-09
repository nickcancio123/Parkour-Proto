// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/Character.h"
#include "Legend/Hero/Components/ParkourComponent.h"
#include "Legend/Hero/AnimNotifies/ResetParkourNotify.h"

void UResetParkourNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
	ACharacter* Character = Cast<ACharacter>(MeshComp->GetOwner());

	// Protects against running in the editor
	if (!Character)
		return;

	UParkourComponent* ParkourComp = Character->FindComponentByClass<UParkourComponent>();
	if (!ParkourComp)
		return;

	ParkourComp->StopParkourCallback();

	return;
}

