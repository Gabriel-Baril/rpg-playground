// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPG_PlaygroundGameMode.h"
#include "RPG_PlaygroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARPG_PlaygroundGameMode::ARPG_PlaygroundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
