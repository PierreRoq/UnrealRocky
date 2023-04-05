// Fill out your copyright notice in the Description page of Project Settings.

#include "RockyAttributeSet.h"
//#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"

URockyAttributeSet::URockyAttributeSet()
{
}

void URockyAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(URockyAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URockyAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URockyAttributeSet, AttackPower, COND_None, REPNOTIFY_Always);
}

void URockyAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URockyAttributeSet, Health, OldHealth);
}

void URockyAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URockyAttributeSet, Stamina, OldStamina);
}

void URockyAttributeSet::OnRep_AttackPower(const FGameplayAttributeData& OldAttackPower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URockyAttributeSet, AttackPower, OldAttackPower);
}