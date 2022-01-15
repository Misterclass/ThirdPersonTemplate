// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonTemplateGameMode.h"
#include "ThirdPersonTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonTemplateGameMode::AThirdPersonTemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
