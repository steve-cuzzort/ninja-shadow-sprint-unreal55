// Copyright Epic Games, Inc. All Rights Reserved.

#include "NinjaShadowSprint55GameMode.h"
#include "NinjaShadowSprint55PlayerController.h"
#include "NinjaShadowSprint55Character.h"
#include "UObject/ConstructorHelpers.h"

ANinjaShadowSprint55GameMode::ANinjaShadowSprint55GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ANinjaShadowSprint55PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}