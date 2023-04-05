// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "u2023rocky.h"
#include "RockyGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class U2023ROCKY_API URockyGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	URockyGameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	ERockyAbilityInputID AbilityInputID = ERockyAbilityInputID::None;
};
