// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "HttpRequestActor.h"
#include "HousingGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API AHousingGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	void PostLogin(APlayerController* NewPlayer) override;

	void Logout(AController* Exiting) override;

	uint32 NumberOfPlayers = 0;

};
