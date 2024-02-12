// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameWidget.h"
#include <UMG\Public\Components\Button.h>
#include "..\Public\GenAiPlayerController.h"

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
		pc->HousingSystem();
	}
}
