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
		bool bEquipped = false;

// Methods
protected:
	virtual void BeginPlay() override;

public:	
	UCombatComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
