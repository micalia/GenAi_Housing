// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RoomSlot.generated.h"

/**
 *
 */
UCLASS()
class GENAI_HOUSING_API URoomSlot : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RoomNameTxt;
	UPROPERTY(meta = (BindWidget))
		class UButton* EnterRoomBtn;

	UPROPERTY(VisibleAnywhere)
	int32 roomIndex = 0;

	FString OwnerUserName;

	UFUNCTION()
	void EnterRoom();

	void SetSessionInfo(const FString roomName, const int32 currPlayer, const int32 maxPlayer, const int32 idx);
};
