// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "DynamicGameSubSystem.generated.h"

/**
 * 
 */
UCLASS()
class DYNAMICGAMEMANAGER_API UDynamicGameSubSystem : public UEngineSubsystem
{
	GENERATED_BODY()

public:
	bool DownloadGame();
	
	bool LoadGame(const FString& GamePath);
	
};
