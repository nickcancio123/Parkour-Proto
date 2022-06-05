// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LEGEND_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

// Variables
public:
	UPROPERTY(BlueprintReadOnly, Category = "Combat")
		bool bWeaponEquipped = false;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Locomotion")
		float WalkSpeed = 150;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Locomotion")
		float SprintSpeed = 450;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
		UAnimMontage* EquipMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
		UAnimMontage* UnequipMontage;

private:
	class AHero* Hero;
	class UCharacterMovementComponent* MovementComp;


// Methods
protected:
	virtual void BeginPlay() override;

public:	
	UCombatComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Hero interface for attacking. Returns true if attacked, false if did not attack
	bool TryAttack();

	void ToggleEquipped();

	void EquipWeapon();
	void UnequipWeapon();

	// Called by notifies
	void EquipWeaponCallback(class USkeletalMeshComponent* Mesh);
	void UnequipWeaponCallback(class USkeletalMeshComponent* Mesh);
};
