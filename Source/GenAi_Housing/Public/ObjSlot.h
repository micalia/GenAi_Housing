// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjSlot.generated.h"

USTRUCT(BlueprintType)
struct FObjDataInfo
{
	GENERATED_USTRUCT_BODY()
public:
	FObjDataInfo() : objIndex(-1), objName(""), objPrompt(""), makeTimeStamp(""), maker("") {};
	FObjDataInfo(int32 _objIndex, FString& _objName, FString& _objPrompt, FString& _makeTimeStamp, FString& _maker) : 
		objIndex(_objIndex), objName(_objName), objPrompt(_objPrompt), makeTimeStamp(_makeTimeStamp), maker(_maker){};
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 objIndex = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString objName = "";
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString objPrompt = "";
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString makeTimeStamp = "";
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString maker = "";
};

UCLASS()
class GENAI_HOUSING_API UObjSlot : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FObjDataInfo objDataInfo;
	UPROPERTY(meta = (BindWidget))
	class UImage* SlotImage;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* objNameTxt;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* makerNameTxt;
};
