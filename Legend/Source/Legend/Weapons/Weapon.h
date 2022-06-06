// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class LEGEND_API AWeapon : public AActor
{
	GENERATED_BODY()

// Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
		class UStaticMeshComponent* Mesh;

// Methods
protected:
	virtual void BeginPlay() override;

public:
	AWeapon();

	virtual void Tick(float DeltaTime) override;

};
