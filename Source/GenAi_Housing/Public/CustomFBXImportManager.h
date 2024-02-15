// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/FBXImportManager.h"
#include "BaseFilesDownloader.h"
#include "FileToStorageDownloader.h"
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

public: //Download
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void Server_ModelingDown(const FString& fileName, FTransform SpawnTransform, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController);

	UFUNCTION(BlueprintCallable)
	void DownFbxFileCPP(FString fbxUrl, FString saveUrl, FString fbxFileName, FTransform spawnTrans);
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

	UFUNCTION()
	void OnTextureStorageProgress(int64 BytesReceived, int64 ContentLength, float ProgressRatio);

	UFUNCTION()
	void OnTextureStorageComplete(EDownloadToStorageResult Result);

	UFUNCTION(BlueprintImplementableEvent)
	void onDownComplete(const FString& downFbxName, FTransform spawnTrans);

	UFUNCTION(BlueprintCallable)
	void CreateFBXActorInServer(FString fileName, FVector SpawnLoc, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController, int32 objIndex);

	UPROPERTY(BlueprintReadOnly, Category = "Import")
	TMap<int32, class ACustomFBXMeshActor*> customImportActorMap;

	UPROPERTY(BlueprintReadWrite, Replicated)
	int32 CustomCurrentImportID;

	void ReplicatedActorMapWork();

	UFUNCTION() void OnRep_ImportActorMap();
	UPROPERTY(ReplicatedUsing = OnRep_ImportActorMap)
	TArray<FCustomReplicatedImportActorMap_Int_Actor> customImportActorArray;

	UFUNCTION(BlueprintImplementableEvent)
	void CustomOnFBXActorCreated(class ACustomFBXMeshActor* meshActor);
public:
	FVector CustomCurrentScale = FVector(1);
	UPROPERTY(EditAnywhere, Category = "SpawnAxis")
	EFBXCoordinate CustomCurrentCoordinate = EFBXCoordinate::RightHanded;
	UPROPERTY(EditAnywhere, Category = "SpawnAxis")
	EFBXAxis CustomCurrentUpVector = EFBXAxis::Front;
	UPROPERTY(EditAnywhere, Category = "SpawnAxis")
	EFBXAxis CustomCurrentFrontVector = EFBXAxis::Front;

	UFUNCTION(BlueprintCallable)
	void CustomImportFBXFile(const FString& FbxDownPath, FVector SpawnLoc, class ACustomFBXImportManager* fbxImportManager);
	
	TSharedPtr<FAsyncTask<class FCustomImportFBXTask>> customImportFBXTask;
	void CustomResetTask();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Import")
	class UMaterialImportSettings* CustomMaterialImportSettings;
	
	bool CustomTransformVertexToAbsolute;
	UFUNCTION()
	void CustomHandleMeshNodeCreated(int32 ImportID, UMeshNode_Geometry* NewMeshNode, const FTransform& SpawnTransform);

	UFUNCTION()
	void CustomHandleImportCompleted(UCustomFBXSceneImporter* SceneImporter);

	UFUNCTION(BlueprintImplementableEvent)
	void CustomOnImportCompleted(class ACustomFBXMeshActor* MeshActor);
	/*

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ResetSelectionActor();

	UFUNCTION(BlueprintCallable)
	UProceduralMeshComponent* RecalculateNormal(class UProceduralMeshComponent* mesh);
*/
};
