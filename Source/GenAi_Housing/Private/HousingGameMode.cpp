// Fill out your copyright notice in the Description page of Project Settings.


#include "HousingGameMode.h"
#include "EngineUtils.h"
#include "..\Public\HttpRequestActor.h"
#include "..\Public\CustomFBXImportManager.h"
#include "..\Public\GenAiPlayerController.h"

void AHousingGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	if (NumberOfPlayers == 0) {
		ACustomFBXImportManager* FbxImporter = nullptr;
		for (TActorIterator<ACustomFBXImportManager> it(GetWorld()); it; ++it) {
			FbxImporter = *it;
		}
		AHttpRequestActor* HttpActor = nullptr;
		for (TActorIterator<AHttpRequestActor> it(GetWorld()); it; ++it) {
			HttpActor = *it;
		}
		if (FbxImporter && HttpActor) {
			TArray<FRoomInfo>& RoomObjArr = HttpActor->GetRoomObjDataFromDB();
			auto Pc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());
			if (Pc) {
				if (HasAuthority()) {
					FbxImporter->ServerCreateFBXActor_Implementation(RoomObjArr, FbxImporter, Pc);
				}
				else {
					FbxImporter->ServerCreateFBXActor(RoomObjArr, FbxImporter, Pc);
				}
			}
			/*for (const FRoomInfo& RoomObjInfo : RoomObjArr)
			{
				CurrRoomObjArr.Add(RoomObjInfo);
			}*/
		}
	}
	++NumberOfPlayers;
}

void AHousingGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	--NumberOfPlayers;
	GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
		FString::Printf(TEXT("%s > %s > NuberOfPlayers: %d"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
			*FString(__FUNCTION__), NumberOfPlayers), true, FVector2D(1, 1));
}

//TSet<FRoomInfo>& AHousingGameMode::GetRoomObjIndexArr()
//{
//	return CurrRoomObjArr;
//}
