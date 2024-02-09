// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenAiPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API AGenAiPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AGenAiPlayerController();

	virtual void BeginPlay() override;

	TSubclassOf<class UInGameWidget> InGameWidgetFactory;

	UPROPERTY()
	class UInGameWidget* InGameWidgetPtr;
};
