// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiGameState.h"
#include "EngineUtils.h"
#include "..\Public\HttpRequestActor.h"
#include "..\Public\HousingGameMode.h"
#include "..\Public\CustomFBXMeshActor.h"

void AGenAiGameState::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<AHttpRequestActor> it(GetWorld()); it; ++it) {
		HttpRequestActor = *it;
	}

}

void AGenAiGameState::ServerInsertChk_Implementation(const FString& SessionName)
{
	if (HttpRequestActor == nullptr) return;
	AHousingGameMode* Gm = Cast<AHousingGameMode>(GetWorld()->GetAuthGameMode());
	if (Gm) {
		TSet<FRoomInfo>& RoomObjIndexArr = Gm->GetRoomObjIndexArr();

		TSet<FRoomInfo> RoomInfoArr;
		for (TActorIterator<ACustomFBXMeshActor> it(GetWorld()); it; ++it) {
			ACustomFBXMeshActor* fbxActor = *it;

			FRoomInfo roomInfo;
			roomInfo.nickName = SessionName;
			roomInfo.objIndex = fbxActor->ObjIndex;
			roomInfo.position = fbxActor->GetActorLocation().ToString();
			roomInfo.rotation = fbxActor->GetActorRotation().ToString();
			roomInfo.scale = fbxActor->GetActorScale3D().ToString();
			roomInfo.roomObjIndex = fbxActor->RoomObjIndex;
			RoomInfoArr.Add(roomInfo);
		}

		for (FRoomInfo& RoomObjIndex : RoomObjIndexArr)
		{
			if (RoomInfoArr.Find(RoomObjIndex)) {
				RoomInfoArr.Remove(RoomObjIndex);
			}
		}

		HttpRequestActor->InsertObjDataToDB(RoomInfoArr);

	}
}
