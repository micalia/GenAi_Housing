// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameWidget.h"
#include <UMG\Public\Components\Button.h>
#include "..\Public\GenAiPlayerController.h"
#include "..\TP_ThirdPerson\TP_ThirdPersonCharacter.h"
#include <Kismet\GameplayStatics.h>
#include <UMG\Public\Components\TextBlock.h>

bool UInGameWidget::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;
	
	HousingBtn->OnClicked.AddDynamic(this, &UInGameWidget::OnClickHousingSystem);
	
	return true;
}

void UInGameWidget::OnClickHousingSystem()
{
	if (auto pc = GetWorld()->GetFirstPlayerController<AGenAiPlayerController>()) {
		auto HousingPlayer = Cast<ATP_ThirdPersonCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
		if (HousingPlayer) { 
			HousingModeTxt->SetText(FText::FromString(TEXT("HousingMode OFF")));
		}
		else {
			HousingModeTxt->SetText(FText::FromString(TEXT("HousingMode ON")));
		}
		pc->HousingSystem();
	}
}
