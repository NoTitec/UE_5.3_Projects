// Copyright Epic Games, Inc. All Rights Reserved.

#include "PMX_Test_ProjectGameMode.h"
#include "PMX_Test_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APMX_Test_ProjectGameMode::APMX_Test_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
