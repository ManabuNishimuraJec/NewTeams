// Copyright Epic Games, Inc. All Rights Reserved.

#include "newGameGameMode.h"
#include "newGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AnewGameGameMode::AnewGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
