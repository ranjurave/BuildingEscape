// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CPPYouTubeTut01GameMode.h"
#include "CPPYouTubeTut01Character.h"
#include "UObject/ConstructorHelpers.h"

ACPPYouTubeTut01GameMode::ACPPYouTubeTut01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
