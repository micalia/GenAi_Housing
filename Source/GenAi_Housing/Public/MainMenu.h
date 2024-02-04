// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidget.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API UMainMenu : public UMenuWidget
{
	GENERATED_BODY()


protected:
	virtual bool Initialize();

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* LoginBtn;

	UFUNCTION()
	void MenuLogin();
};
