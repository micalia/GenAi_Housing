// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "HousingWidget.h"
#include <UMG/Public/Components/CanvasPanel.h>

bool UHousingWidget::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	ModelingChkBtn->OnClicked.AddDynamic(this, &UHousingWidget::ChangeSearchModelPanel);
	ModelingGenerateBtn->OnClicked.AddDynamic(this, &UHousingWidget::ChangeGenerateModelPanel);

	return true;
}

void UHousingWidget::ChangeSearchModelPanel()
{
	HousingWidgetSwitcher->SetActiveWidgetIndex(0);
}

void UHousingWidget::ChangeGenerateModelPanel()
{
	HousingWidgetSwitcher->SetActiveWidgetIndex(1);
}

