// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerNameWidget.h"
#include "..\Public\NameWidgetInterface.h"
#include "..\TP_ThirdPerson\TP_ThirdPersonCharacter.h"
#include "..\Public\GenAiGameInstance.h"
#include <UMG\Public\Components\TextBlock.h>

void UPlayerNameWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ATP_ThirdPersonCharacter* player = Cast<ATP_ThirdPersonCharacter>(OwningActor)) {
		player->SetUpLocal(this);
	}
}

void UPlayerNameWidget::UpdateName()
{
	if (ATP_ThirdPersonCharacter* player = Cast<ATP_ThirdPersonCharacter>(OwningActor)) {
		PlayerNameTxt->SetText(FText::FromString(player->CustomPlayerName));
	}
}
