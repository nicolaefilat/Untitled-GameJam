// Copyright Epic Games, Inc. All Rights Reserved.

#include "GamejamProjectGameMode.h"
#include "GamejamProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGamejamProjectGameMode::AGamejamProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
