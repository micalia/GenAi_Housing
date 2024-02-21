// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomSlot.h"
#include "..\Public\GenAiGameInstance.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void URoomSlot::NativeConstruct()
{
	Super::NativeConstruct();
	
	EnterRoomBtn->OnClicked.AddDynamic(this, &URoomSlot::EnterRoom);
}

void URoomSlot::EnterRoom()
{
	GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("EnterRoom!")), true, FVector2D(2, 2));
	UGenAiGameInstance* Gi = Cast<UGenAiGameInstance>(GetGameInstance());
	if (Gi) {
		if (roomIndex == -1) {
			Gi->CreateSession(OwnerUserName);
		}
		else {
			Gi->MyJoinSession(roomIndex, OwnerUserName);
		}
	}
}

void URoomSlot::SetSessionInfo(const FString roomName, const int32 currPlayer, const int32 maxPlayer, const int32 idx)
{
	roomIndex = idx;
	RoomNameTxt->SetText(FText::FromString(roomName +
		" Room / Exist Session / (" +
		FString::FromInt(currPlayer) +
		"/" + FString::FromInt(maxPlayer) + ")"));
	OwnerUserName = roomName;
}
