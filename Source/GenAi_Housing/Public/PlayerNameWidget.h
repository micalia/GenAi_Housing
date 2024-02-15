// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerNameWidget.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API UPlayerNameWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta=(BindWidget), BlueprintReadWrite)
	class UTextBlock* PlayerNameTxt;
	
};
