// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HousingWidget.generated.h"

/**
 *
 */
UCLASS()
class GENAI_HOUSING_API UHousingWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget))
		class UButton* ModelingChkBtn;
	UPROPERTY(meta = (BindWidget))
		class UButton* ModelingGenerateBtn;
	UPROPERTY(meta = (BindWidget))
		class UButton* AiGenerateBtn;
	UPROPERTY(meta = (BindWidget))
		class UWidgetSwitcher* HousingWidgetSwitcher;
};
