// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiGameState.h"
#include "EngineUtils.h"
#include "..\Public\HttpRequestActor.h"
#include "..\Public\HousingGameMode.h"
#include "..\Public\CustomFBXMeshActor.h"
#include <UMG\Public\Blueprint\WidgetBlueprintLibrary.h>
#include "..\Public\InGameWidget.h"

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

void AGenAiGameState::ServerInsertChk_Implementation(const FString& SessionName)
{
	if (HttpRequestActor == nullptr) return;
	AHousingGameMode* Gm = Cast<AHousingGameMode>(GetWorld()->GetAuthGameMode());
	if (Gm) {
		TArray<ACustomFBXMeshActor*> RoomActorArr;
		for (TActorIterator<ACustomFBXMeshActor> it(GetWorld()); it; ++it) {
			ACustomFBXMeshActor* fbxActor = *it;

			/*FRoomInfo roomInfo;
			roomInfo.nickName = SessionName;
			roomInfo.objIndex = fbxActor->ObjIndex;
			roomInfo.position = fbxActor->GetActorLocation().ToString();
			roomInfo.rotation = fbxActor->GetActorRotation().ToString();
			roomInfo.scale = fbxActor->GetActorScale3D().ToString();
			roomInfo.roomObjIndex = fbxActor->RoomObjIndex;*/
			RoomActorArr.Add(fbxActor);
		}
		HttpRequestActor->UpdateObjDataToDB(RoomActorArr);

		TSet<FRoomInfo>& RoomObjIndexArr = Gm->GetRoomObjIndexArr();
		TArray<ACustomFBXMeshActor*> AddFbxInfoActorArr;
		for (const auto RoomActor : RoomActorArr)
		{
			if (RoomActor->RoomObjIndex == 0) {
				AddFbxInfoActorArr.Add(RoomActor);
			}
		}
		/*for (FRoomInfo& RoomObjIndex : RoomObjIndexArr)
		{
			for (int32 i = 0; i < RoomInfoArr.Num(); i++)
			{
				if (RoomInfoArr[i].roomObjIndex == RoomObjIndex.roomObjIndex) {
					EqualElementArr.Add(RoomInfoArr[i]);
				}
			}
		}*/

		if (!AddFbxInfoActorArr.IsEmpty()) {
			HttpRequestActor->InsertObjDataToDB(AddFbxInfoActorArr, RoomObjIndexArr);
		}

	}
}
