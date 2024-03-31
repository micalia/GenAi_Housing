// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/FBXImportManager.h"
#include "BaseFilesDownloader.h"
#include "FileToStorageDownloader.h"
#include "HttpRequestActor.h"
#include "CustomFBXImportManager.generated.h"

USTRUCT()
struct FCustomReplicatedImportActorMap_Int_Actor {
	GENERATED_BODY()

	UPROPERTY()
	int32 Key;

	UPROPERTY()
	class ACustomFBXMeshActor* Value;

};

UCLASS()
class GENAI_HOUSING_API ACustomFBXImportManager : public AFBXImportManager
{
	GENERATED_BODY()
public:
	ACustomFBXImportManager();

	virtual void BeginPlay() override;

public: 
	UPROPERTY()
	class UCustomFBXSceneImporter* FBXSceneImporter = nullptr;

	ACustomFBXMeshActor** ImportActorPtr = nullptr;
	
	//Download
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void Server_ModelingDown(const FString& fileName, FTransform SpawnTransform, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController, int32 InCurrImportID);
	void ModelingDown(const FString& fileName, FTransform SpawnTransform, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController, int32 InCurrImportID);
	
	void SkipDown(const FString& FbxDownPath, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImporter, int32 ImportId);

	UFUNCTION(BlueprintCallable)
	void DownFbxFileCPP(FString fbxUrl, FString saveUrl, FTransform spawnTrans, int32 InCurrImportID);
	UFUNCTION(BlueprintCallable)
	void DownTextureFileCPP(FString textureUrl, FString saveUrl);

	FOnDownloadProgress onProgressDel;
	FOnFileToStorageDownloadComplete onDownCompleteDel;
	FOnDownloadProgress onTextureProgressDel;
	FOnFileToStorageDownloadComplete onTextureDownCompleteDel;

	UFUNCTION()
	void OnFbxStorageProgress(int64 BytesReceived, int64 ContentLength, float ProgressRatio);

	UFUNCTION()
	void OnFbxStorageComplete(EDownloadToStorageResult Result);
	FString currSaveFbxPath;
	FTransform currSpawnTrans;
	int32 CurrRealImportID;

	UFUNCTION()
	void OnTextureStorageProgress(int64 BytesReceived, int64 ContentLength, float ProgressRatio);

	UFUNCTION()
	void OnTextureStorageComplete(EDownloadToStorageResult Result);

	UFUNCTION(BlueprintImplementableEvent)
	void onDownComplete(const FString& downFbxName, FTransform spawnTrans, int32 currImportID);
	void OnDownComplete(const FString& SavedFbxPath, FTransform SpawnTrans, int32 currImportID);

	UFUNCTION(BlueprintCallable)
	void CreateFBXActorInServer(FString fileName, FVector SpawnLoc, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController, int32 objIndex);
	UFUNCTION(Server, Reliable)	// 방에 첫번째 사람이 입장했을때 실행되는 함수
	void ServerCreateFBXActor(const TArray<FRoomInfo>& InRoomInfoArr, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController);

	UPROPERTY(BlueprintReadOnly, Category = "Import")
	TMap<int32, class ACustomFBXMeshActor*> customImportActorMap;

	UPROPERTY(BlueprintReadWrite, Replicated)
	int32 CustomCurrentImportID;

	void ReplicatedActorMapWork();

	UFUNCTION() void OnRep_ImportActorMap();
	UPROPERTY(ReplicatedUsing = OnRep_ImportActorMap)
	TArray<FCustomReplicatedImportActorMap_Int_Actor> customImportActorArray;

public:
	FVector CustomCurrentScale = FVector(1);
	UPROPERTY(EditAnywhere, Category = "SpawnAxis")
	EFBXCoordinate CustomCurrentCoordinate = EFBXCoordinate::LeftHanded;
	UPROPERTY(EditAnywhere, Category = "SpawnAxis")
	EFBXAxis CustomCurrentUpVector = EFBXAxis::Front;
	UPROPERTY(EditAnywhere, Category = "SpawnAxis")
	EFBXAxis CustomCurrentFrontVector = EFBXAxis::Up;

	UFUNCTION(BlueprintCallable)
	void CustomImportFBXFile(const FString& FbxDownPath, FTransform SpawnTrans, class ACustomFBXImportManager* fbxImportManager, int32 InLoadQueueElementId);
	
	TSharedPtr<FAsyncTask<class FCustomImportFBXTask>> customImportFBXTask;
	void CustomResetTask();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Import")
	class UMaterialImportSettings* CustomMaterialImportSettings;
	
	UPROPERTY(EditAnywhere)
	bool CustomTransformVertexToAbsolute;
	UFUNCTION()
	void CustomHandleMeshNodeCreated(int32 ImportID, UMeshNode_Geometry* NewMeshNode, const FTransform& SpawnTransform);

	UFUNCTION(BlueprintCallable)
	void CustomHandleImportCompleted(UCustomFBXSceneImporter* SceneImporter);

	UFUNCTION(BlueprintImplementableEvent)
	void CustomOnImportCompleted(class ACustomFBXMeshActor* MeshActor, UCustomFBXSceneImporter* SceneImporter);
	void OnFbxImportCompleted(class ACustomFBXMeshActor* MeshActor, UCustomFBXSceneImporter* SceneImporter);

	UFUNCTION()
	void OnLoadImageCompleted(UTexture2D* texture, const FString fileName, const int32 errorCode, const FString errorMessage, const FString eventID);
	UFUNCTION()
	void OnLoadImageFail(UTexture2D* texture, const FString fileName, const int32 errorCode, const FString errorMessage, const FString eventID);

	UPROPERTY()
	class UProceduralMeshComponent* PMC;
	//UPROPERTY()
	//class URealTimeImportAsyncNodeLoadImageFile* LoadImageASyncNode;

	UPROPERTY(BlueprintReadWrite, Replicated)
	class ACustomFBXMeshActor* SpawnMeshActor;

	UFUNCTION(Server, Reliable)
	void Server_IncreaseCustomCurrentImportID();
	UPROPERTY()
	class UMaterialInterface* BaseMat;

	//FTimerHandle LoadObjDelay;
	/*

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ResetSelectionActor();

	UFUNCTION(BlueprintCallable)
	UProceduralMeshComponent* RecalculateNormal(class UProceduralMeshComponent* mesh);
*/
	UFUNCTION(BlueprintCallable)
	FString BytesToString(const TArray<uint8>& InBytes);
	UFUNCTION(BlueprintCallable)
	TArray<uint8> FStringToByteArray(const FString& String);
};
