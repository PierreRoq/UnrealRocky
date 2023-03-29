// Copyright Epic Games, Inc. All Rights Reserved.

#include "u2023rockyGameMode.h"
#include "u2023rockyCharacter.h"
#include "UObject/ConstructorHelpers.h"

Au2023rockyGameMode::Au2023rockyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
