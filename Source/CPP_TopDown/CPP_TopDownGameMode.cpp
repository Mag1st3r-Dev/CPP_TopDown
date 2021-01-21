// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_TopDownGameMode.h"
#include "CPP_TopDownPlayerController.h"
#include "CPP_TopDownCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_TopDownGameMode::ACPP_TopDownGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACPP_TopDownPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}