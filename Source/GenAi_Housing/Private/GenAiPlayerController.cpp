// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiPlayerController.h"
#include "..\Public\InGameWidget.h"
#include "..\Public\GenAiGameInstance.h"
#include "Components/TextBlock.h"

AGenAiPlayerController::AGenAiPlayerController()
{
	ConstructorHelpers::FClassFinder<UInGameWidget> InGameWBClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Widget/InGame/WB_InGameWidget.WB_InGameWidget_C'"));
	if (InGameWBClass.Succeeded()) {
		InGameWidgetFactory = InGameWBClass.Class;
	}
}

void AGenAiPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (InGameWidgetFactory) {
		InGameWidgetPtr = CreateWidget<UInGameWidget>(GetWorld(), InGameWidgetFactory);
		InGameWidgetPtr->AddToViewport(); 
		UGenAiGameInstance* gi = GetGameInstance<UGenAiGameInstance>();
		InGameWidgetPtr->RoomOwnerTxt->SetText(FText::FromString(gi->GetSessionName() + " Room"));

	}
}
