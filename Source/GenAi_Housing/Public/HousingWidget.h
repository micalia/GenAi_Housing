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
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
		class UWidgetSwitcher* HousingWidgetSwitcher;
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
		class UEditableTextBox* prompt_txt;
	
	virtual bool Initialize();

	UFUNCTION()
	void ChangeSearchModelPanel();
	UFUNCTION()
	void ChangeGenerateModelPanel();
	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* AiModelSearchPanel;
	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* ObjGeneratePanel;
};
