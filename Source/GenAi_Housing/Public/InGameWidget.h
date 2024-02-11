// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InGameWidget.generated.h"

/**
 *
 */
UCLASS()
class GENAI_HOUSING_API UInGameWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
		class UButton* HousingBtn;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RoomOwnerTxt;
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
		class UHousingWidget* WB_HousingWidget;
};
