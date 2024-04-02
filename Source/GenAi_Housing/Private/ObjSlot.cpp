// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjSlot.h"
#include "..\Public\GenAiPlayerController.h"
#include "..\Public\InGameWidget.h"
#include <Kismet\GameplayStatics.h>

FReply UObjSlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton)) {
		auto Pc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());
		if (Pc && Pc->InGameWidgetPtr) { 
			Pc->InGameWidgetPtr->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			Pc->ServerCreateFbxActor(objDataInfo.objPrompt, objDataInfo.makeTimeStamp, SetSpawnLocation(), Pc->controllerFbxImportManager, Pc, objDataInfo.objIndex);
		}
	}
	return FReply::Handled();
}

FVector UObjSlot::SetSpawnLocation()
{
	APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	if (CameraManager) {
		SpawnLocation = CameraManager->GetCameraLocation() + CameraManager->GetActorForwardVector() * 500;
		return SpawnLocation;
	}
	return FVector(0);
}
