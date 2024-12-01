// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiGameState.h"
#include "EngineUtils.h"
#include "..\Public\HttpRequestActor.h"
#include "..\Public\HousingGameMode.h"
#include "..\Public\CustomFBXMeshActor.h"
#include <UMG\Public\Blueprint\WidgetBlueprintLibrary.h>
#include "..\Public\InGameWidget.h"
#include "..\Public\GenAiPlayerController.h"
#include "Net/UnrealNetwork.h"

AGenAiGameState::AGenAiGameState()
{
	bReplicates = true;
}

void AGenAiGameState::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<AHttpRequestActor> it(GetWorld()); it; ++it) {
		HttpRequestActor = *it;
	}

}

class UInGameWidget* AGenAiGameState::GetInGameWidget()
{
	TArray<UUserWidget*> ActiveWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), ActiveWidgets, UUserWidget::StaticClass(), false);

	for (UUserWidget* Widget : ActiveWidgets)
	{
		UInGameWidget* InGameWidgetPtr = Cast<UInGameWidget>(Widget);
		if (IsValid(InGameWidgetPtr) && Widget->IsInViewport())
		{
			return InGameWidgetPtr;
		}
	}
	return nullptr;
}

void AGenAiGameState::MulticastSetActorTransform_Implementation(class ACustomFBXMeshActor* FbxMeshActor, FTransform Transform)
{
	if (FbxMeshActor) {
		FbxMeshActor->SetActorTransform(Transform);
	}
}

void AGenAiGameState::MulticastModelingDown_Implementation(const FString& FileName, FTransform SpawnTransform, class ACustomFBXImportManager* FbxImporter, class AGenAiPlayerController* PlayerController, int32 InCurrId)
{
	auto Pc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Pc) {
		Pc->ModelingDown(FileName, SpawnTransform, FbxImporter, PlayerController, InCurrId);
	}
}

void AGenAiGameState::ServerModelingDown_Implementation(const FString& FileName, FTransform SpawnTransform, class ACustomFBXImportManager* FbxImporter, class AGenAiPlayerController* PlayerController, int32 InCurrId)
{
	MulticastModelingDown(FileName, SpawnTransform, FbxImporter, PlayerController, InCurrId);
}

void AGenAiGameState::ServerUpdateAndInsertToDB_Implementation(const FString& SessionName)
{
	if (HttpRequestActor == nullptr) return;
	AHousingGameMode* Gm = Cast<AHousingGameMode>(GetWorld()->GetAuthGameMode());
	if (Gm) {
		TArray<ACustomFBXMeshActor*> RoomActorArr;
		for (TActorIterator<ACustomFBXMeshActor> it(GetWorld()); it; ++it) {
			ACustomFBXMeshActor* fbxActor = *it;
			RoomActorArr.Add(fbxActor);
		}
		HttpRequestActor->UpdateObjDataToDB(RoomActorArr);

		TArray<ACustomFBXMeshActor*> AddFbxInfoActorArr;
		for (const auto RoomActor : RoomActorArr)
		{
			if (RoomActor->RoomObjIndex == 0) {
				AddFbxInfoActorArr.Add(RoomActor);
			}
		}

		if (!AddFbxInfoActorArr.IsEmpty()) {
			HttpRequestActor->InsertObjDataToDB(AddFbxInfoActorArr);
		}
	}
}
