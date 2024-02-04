// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MenuInterface.h"
#include "GenAiGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API UGenAiGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()
	
public:
	UGenAiGameInstance(const FObjectInitializer& ObjectInitializer);

	virtual void Init();

	UFUNCTION(BlueprintCallable)
	void LoadMenuWidget();

	void AccessWorld();

private:
	TSubclassOf<class UMainMenu> MenuClass;
	
	class UMainMenu* Menu;
	//IOnlineSessionPtr SessionInterface;

	void OnCreateSessionComplete(FName SessionName, bool Success);
};
