// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonExplorerUE5GameMode.h"
#include "DungeonExplorerUE5Character.h"
#include "UObject/ConstructorHelpers.h"

ADungeonExplorerUE5GameMode::ADungeonExplorerUE5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
