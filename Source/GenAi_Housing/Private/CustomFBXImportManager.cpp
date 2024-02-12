// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomFBXImportManager.h"
#include "CustomFBXMeshActor.h"
#include "TaskItem.h"
#include "GenAiPlayerController.h"
#include "CustomFBXSceneImporter.h"
#include "InGameWidget.h"
#include "HousingWidget.h"
#include "AsyncTasks/CustomFBXAsyncTasks.h"
#include "Net/UnrealNetwork.h"

ACustomFBXImportManager::ACustomFBXImportManager() {
	bReplicates = true;
}

void ACustomFBXImportManager::BeginPlay()
{
	Super::BeginPlay();

	onProgressDel.BindDynamic(this, &ACustomFBXImportManager::OnFbxStorageProgress);
	onDownCompleteDel.BindDynamic(this, &ACustomFBXImportManager::OnFbxStorageComplete);
	onTextureProgressDel.BindDynamic(this, &ACustomFBXImportManager::OnTextureStorageProgress);
	onTextureDownCompleteDel.BindDynamic(this, &ACustomFBXImportManager::OnTextureStorageComplete);

}

void ACustomFBXImportManager::DownFbxFileCPP(FString fbxUrl, FString saveUrl, FString fbxFileName, FVector spawnLoc)
{
	FString contentType = "application/octet-stream";
	UFileToStorageDownloader::DownloadFileToStorage(fbxUrl, saveUrl, 400.0f, contentType, false, onProgressDel, onDownCompleteDel);
	currFbxFileName = fbxFileName;
	currSpawnLoc = spawnLoc;
}

void ACustomFBXImportManager::DownTextureFileCPP(FString textureUrl, FString saveUrl)
{
	FString contentType = "image/png";
	UFileToStorageDownloader::DownloadFileToStorage(textureUrl, saveUrl, 400.0f, contentType, true, onTextureProgressDel, onTextureDownCompleteDel);
}

void ACustomFBXImportManager::OnFbxStorageProgress(int64 BytesReceived, int64 ContentLength, float ProgressRatio)
{
	AGenAiPlayerController* pc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());
	if (ProgressRatio >= 1) { 
		pc->InGameWidgetPtr->WB_HousingWidget->WB_TaskItem->SetProgress(ProgressRatio);
		pc->InGameWidgetPtr->WB_HousingWidget->WB_TaskItem->SetVisibility(ESlateVisibility::Hidden);
	}
	else {
		pc->InGameWidgetPtr->WB_HousingWidget->WB_TaskItem->SetProgress(ProgressRatio);
	}
}

void ACustomFBXImportManager::OnFbxStorageComplete(EDownloadToStorageResult Result)
{
	onDownComplete(currFbxFileName, currSpawnLoc);
}

void ACustomFBXImportManager::OnTextureStorageProgress(int64 BytesReceived, int64 ContentLength, float ProgressRatio)
{

}

void ACustomFBXImportManager::OnTextureStorageComplete(EDownloadToStorageResult Result)
{

}

void ACustomFBXImportManager::CreateFBXActorInServer(FString fileName, FVector SpawnLoc, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController)
{
	UClass* CurrentActorClass;
	if (IsValid(FBXActorClass))
	{
		CurrentActorClass = FBXActorClass;
	}
	else {
		CurrentActorClass = ACustomFBXMeshActor::StaticClass();
	}

	FActorSpawnParameters spawnConfig;
	spawnConfig.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	spawnConfig.TransformScaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot;
	FString inputFileName = fileName;
	FVector inputSpawnLoc = SpawnLoc;
	auto doFunc = [inputFileName, inputSpawnLoc](AActor* ObjectToModify)
	{
		ACustomFBXMeshActor* fbxMeshActorModify = Cast<ACustomFBXMeshActor>(ObjectToModify);
		if (fbxMeshActorModify)
		{
			fbxMeshActorModify->FileName = inputFileName;
			fbxMeshActorModify->SpawnLoc = inputSpawnLoc;
		}
	};

	spawnConfig.CustomPreSpawnInitalization = doFunc;
	ACustomFBXMeshActor* FBXActor = GetWorld()->SpawnActor<ACustomFBXMeshActor>(CurrentActorClass, SpawnLoc, FRotator::ZeroRotator, spawnConfig);
	customImportActorMap.Add(CustomCurrentImportID, FBXActor);
	ReplicatedActorMapWork();
	CustomOnFBXActorCreated(FBXActor); 

	Server_ModelingDown(fileName, SpawnLoc, fbxImporter, PlayerController);
}

void ACustomFBXImportManager::ReplicatedActorMapWork()
{
	if (HasAuthority()) {
		customImportActorArray.Reset();
		const TArray<TPair<int32, ACustomFBXMeshActor*>>& PairArray = customImportActorMap.Array();
		for (const TPair<int32, ACustomFBXMeshActor*>& Pair : PairArray)
		{
			FCustomReplicatedImportActorMap_Int_Actor RepEntry;
			RepEntry.Key = Pair.Key;
			RepEntry.Value = Pair.Value;
			customImportActorArray.Add(MoveTemp(RepEntry));
		}
	}
}

void ACustomFBXImportManager::OnRep_ImportActorMap()
{
	customImportActorMap.Reset();
	for (const FCustomReplicatedImportActorMap_Int_Actor& ReplicatedMapEntry : customImportActorArray)
	{
		customImportActorMap.Emplace(ReplicatedMapEntry.Key, ReplicatedMapEntry.Value);
	}
}

void ACustomFBXImportManager::CustomImportFBXFile(const FString& FbxDownPath, FVector SpawnLoc, class ACustomFBXImportManager* fbxImportManager)
{
	ACustomFBXImportManager* customImporter = Cast<ACustomFBXImportManager>(fbxImportManager);

	TSharedPtr<FFBXImportSettings> ImportSettings = MakeShareable(new FFBXImportSettings());
	ImportSettings->ImportID = CustomCurrentImportID;
	ImportSettings->SpawnTransform = FTransform(FRotator(), SpawnLoc, CustomCurrentScale);
	ImportSettings->Filepath = FbxDownPath;
	ImportSettings->FBXAxis = FVector(static_cast<uint8>(CustomCurrentCoordinate), static_cast<uint8>(CustomCurrentUpVector), static_cast<uint8>(CustomCurrentFrontVector));

	ImportSettings->SpawnFBXActor = false;
	ImportSettings->MaterialImportSettings = CustomMaterialImportSettings;
	ImportSettings->bTransformVertexToAbsolute = CustomTransformVertexToAbsolute;

	UCustomFBXSceneImporter* FBXSceneImporter = NewObject<UCustomFBXSceneImporter>();
	FBXSceneImporter->CustomSetImportSettings(ImportSettings);

	FBXSceneImporter->CustomOnMeshNodeCreated.AddDynamic(fbxImportManager, &ACustomFBXImportManager::CustomHandleMeshNodeCreated);

	CustomResetTask();

	////FBX
	customImportFBXTask = MakeShareable(new FAsyncTask<FCustomImportFBXTask>(fbxImportManager, FBXSceneImporter));
	customImportFBXTask->StartBackgroundTask();

	FBXSceneImporters.Add(FBXSceneImporter);
}

void ACustomFBXImportManager::CustomResetTask()
{
	if (customImportFBXTask.IsValid())
	{
		customImportFBXTask->TryAbandonTask();
		customImportFBXTask->Cancel();
		customImportFBXTask->EnsureCompletion();
		customImportFBXTask.Reset();
	}
}

void ACustomFBXImportManager::CustomHandleMeshNodeCreated(int32 ImportID, UMeshNode_Geometry* NewMeshNode, const FTransform& SpawnTransform)
{
	// Check if the mesh node is not null
	if (NewMeshNode != nullptr)
	{
		if (ACustomFBXMeshActor** ImportActor = customImportActorMap.Find(ImportID))
		{
			TArray<FMaterialRuntimeInfo> MaterialInfoArray;
			(*ImportActor)->AddMesh(NewMeshNode, SpawnTransform, MaterialInfoArray);
		}
	}
}

void ACustomFBXImportManager::CustomHandleImportCompleted(UCustomFBXSceneImporter* SceneImporter)
{
	// Check if the SceneImporter is valid and the FBXActor is valid (if it needs to be)
	if (SceneImporter && SceneImporter->IsValidLowLevel())
	{
		FBXSceneImporters.Remove(SceneImporter);

		// Get the root nodes from the importer
		TArray<UMeshNode*> RootNodes = SceneImporter->GetRootNodes();
		TSharedPtr<FFBXImportSettings> ImportSettings = SceneImporter->GetImportSettings();

		ACustomFBXMeshActor** ImportActor = customImportActorMap.Find(ImportSettings->ImportID);

		if (ImportActor)
		{
			(*ImportActor)->FinishImport(RootNodes);
			(*ImportActor)->MeshPath = ImportSettings->Filepath;
			CustomOnImportCompleted(*ImportActor);
		}
	}
}

void ACustomFBXImportManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACustomFBXImportManager, customImportActorArray);
	DOREPLIFETIME(ACustomFBXImportManager, CustomCurrentImportID);
}
