// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TaskItem.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API UTaskItem : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
	class UProgressBar* DownGageBar;
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
	class UTextBlock* DownPercentTxt;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetProgress(float alpha);
};
