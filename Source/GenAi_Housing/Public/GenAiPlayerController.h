// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenAiPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API AGenAiPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AGenAiPlayerController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	TSubclassOf<class UInGameWidget> InGameWidgetFactory;

	UPROPERTY(BlueprintReadWrite)
	class UInGameWidget* InGameWidgetPtr;

	UFUNCTION(BlueprintCallable)
	FString UrlEncode(const FString originFileName);

	UPROPERTY(BlueprintReadWrite, Replicated)
	class ACustomFBXImportManager* controllerFbxImportManager;

	virtual void OnPossess(APawn* InPawn) override;

	UFUNCTION(Server, Reliable)
	void SpawnFbxImporter();

	bool bSpawnFbxImporter = false;

	UFUNCTION(BlueprintImplementableEvent)
	void HousingSystem();
	void HousingSystemCPP();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_InsertObjDataToDB(const FString& SessionName);
	UFUNCTION(Server, Reliable)
	void ServerUpdateAndInsertToDB(const FString& SessionName);

	class AHttpRequestActor* HttpRequestActor;

	TQueue<class ACustomFBXMeshActor*> LoadFbxActorQueue;

	UFUNCTION(BlueprintCallable)
	void ChkFbxActorQueue();

	void LoadFbxFilesToFbxActor();
	bool chk;
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void LocalModelingDown(const FString& FileName, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImportManager, class AGenAiPlayerController* PlayerController, int32 CurrentImportID);
	void ModelingDown(const FString& FileName, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImportManager, class AGenAiPlayerController* PlayerController, int32 CurrImportID);	
	void FileDown(const FString& FileName, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImporter, class AGenAiPlayerController* PlayerController, int32 ImportId);

	void FileExistCheck(const FString& FileName, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImportManager, class AGenAiPlayerController* PlayerController, int32 ImportId);

	TArray<int32> DeleteObjArr;
	UFUNCTION(BlueprintCallable)
	void DeleteRoomObjInfoToDB();

	UFUNCTION(Server, Reliable)
	void ServerCreateFbxActor(const FString& ObjPrompt, const FString& MakeTimeStamp, FVector SpawnLoc, class ACustomFBXImportManager* FbxImporter, class AGenAiPlayerController* PlayerController, int32 ObjIndex);

	UFUNCTION(Server, Reliable)
	void ServerHousingPossess(APawn* InPlayer, FVector CameraPos);

	UPROPERTY()
	class ATP_ThirdPersonCharacter* CachePrevCharacter;

	UFUNCTION(Server, Reliable)
	void ServerSetActorTransform(class ACustomFBXMeshActor* FbxMeshActor, FTransform Transform);
	UFUNCTION(Server, Reliable)
	void ServerDestroyActor(class ACustomFBXMeshActor* FbxMeshActor);
};
