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
#include "../Public/HttpRequestActor.h"

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

void ACustomFBXImportManager::DownFbxFileCPP(FString fbxUrl, FString saveUrl, FString fbxFileName, FTransform spawnTrans, int32 InRealImportID)
{
	FString contentType = "application/octet-stream";
	UFileToStorageDownloader::DownloadFileToStorage(fbxUrl, saveUrl, 400.0f, contentType, false, onProgressDel, onDownCompleteDel);
	currSaveFbxPath = saveUrl;
	currSpawnTrans = spawnTrans;
	CurrRealImportID = InRealImportID;
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
	onDownComplete(currSaveFbxPath, currSpawnTrans, CurrRealImportID);
}

void ACustomFBXImportManager::OnTextureStorageProgress(int64 BytesReceived, int64 ContentLength, float ProgressRatio)
{

}

void ACustomFBXImportManager::OnTextureStorageComplete(EDownloadToStorageResult Result)
{

}

void ACustomFBXImportManager::CreateFBXActorInServer(FString fileName, FVector SpawnLoc, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController, int32 objIndex)
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
	int32 inputObjIndex = objIndex;
	int32 inputCurrentImportID = CustomCurrentImportID;
	auto doFunc = [inputFileName, inputSpawnLoc, inputObjIndex, inputCurrentImportID](AActor* ObjectToModify)
	{
		ACustomFBXMeshActor* fbxMeshActorModify = Cast<ACustomFBXMeshActor>(ObjectToModify);
		if (fbxMeshActorModify)
		{
			fbxMeshActorModify->FileName = inputFileName;
			fbxMeshActorModify->SpawnLoc = inputSpawnLoc;
			fbxMeshActorModify->ObjIndex = inputObjIndex;
			fbxMeshActorModify->CustomCurrentImportID = inputCurrentImportID;
		}
	};

	spawnConfig.CustomPreSpawnInitalization = doFunc;
	ACustomFBXMeshActor* FBXActor = GetWorld()->SpawnActor<ACustomFBXMeshActor>(CurrentActorClass, SpawnLoc, FRotator::ZeroRotator, spawnConfig);
	customImportActorMap.Add(CustomCurrentImportID, FBXActor);
	ReplicatedActorMapWork();
	
	Server_ModelingDown(fileName, FBXActor->GetActorTransform(), fbxImporter, PlayerController, CustomCurrentImportID);
}

void ACustomFBXImportManager::ServerCreateFBXActor_Implementation(const TArray<FRoomInfo>& InRoomInfoArr, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController)
{
	UClass* CurrentActorClass;
	if (IsValid(FBXActorClass))
	{
		CurrentActorClass = FBXActorClass;
	}
	else {
		CurrentActorClass = ACustomFBXMeshActor::StaticClass();
	}

	for (int32 i = 0; i < InRoomInfoArr.Num();i++)
	{
		FActorSpawnParameters spawnConfig;
		spawnConfig.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		spawnConfig.TransformScaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot;
		FString inputFileName = InRoomInfoArr[i].fileName;
		
#pragma region SpawnTransform
		FVector SpawnLocation;
		TArray<FString> SplitPos;
		int32 Count = InRoomInfoArr[i].position.ParseIntoArray(SplitPos, TEXT(" "), true);
		for (int32 p = 0; p < Count; p++)
		{
			if (p == 0) {
				SpawnLocation.X = FCString::Atod(*SplitPos[p].Replace(L"X=", L""));
			}
			else if (p == 1) {
				SpawnLocation.Y = FCString::Atod(*SplitPos[p].Replace(L"Y=", L""));
			}
			else if (p == 2) {
				SpawnLocation.Z = FCString::Atod(*SplitPos[p].Replace(L"Z=", L""));
			}
		}

		FRotator SpawnRotator;
		TArray<FString> SplitRot;
		int32 RotCount = InRoomInfoArr[i].rotation.ParseIntoArray(SplitRot, TEXT(" "), true);
		for (int32 r = 0; r < RotCount; r++)
		{
			if (r == 0) {
				SpawnRotator.Pitch = FCString::Atod(*SplitRot[r].Replace(L"P=", L""));
			}
			else if (r == 1) {
				SpawnRotator.Yaw = FCString::Atod(*SplitRot[r].Replace(L"Y=", L""));
			}
			else if (r == 2) {
				SpawnRotator.Roll = FCString::Atod(*SplitRot[r].Replace(L"R=", L""));
			}
		}

		FVector SpawnScale;
		TArray<FString> SplitScale;
		int32 ScaleCount = InRoomInfoArr[i].scale.ParseIntoArray(SplitScale, TEXT(" "), true);
		for (int32 s = 0; s < ScaleCount; s++)
		{
			if (s == 0) {
				SpawnScale.X = FCString::Atod(*SplitScale[s].Replace(L"X=", L""));
			}
			else if (s == 1) {
				SpawnScale.Y = FCString::Atod(*SplitScale[s].Replace(L"Y=", L""));
			}
			else if (s == 2) {
				SpawnScale.Z = FCString::Atod(*SplitScale[s].Replace(L"Z=", L""));
			}
		}
#pragma endregion

		FVector inputSpawnLoc = SpawnLocation;
		int32 inputObjIndex = InRoomInfoArr[i].objIndex;
		int32 inputCurrentImportID = CustomCurrentImportID;
		FVector inputSpawnScale = SpawnScale;
		auto doFunc = [inputFileName, inputSpawnLoc, inputObjIndex, inputCurrentImportID, inputSpawnScale](AActor* ObjectToModify)
		{
			ACustomFBXMeshActor* fbxMeshActorModify = Cast<ACustomFBXMeshActor>(ObjectToModify);
			if (fbxMeshActorModify)
			{
				fbxMeshActorModify->FileName = inputFileName;
				fbxMeshActorModify->SpawnLoc = inputSpawnLoc;
				fbxMeshActorModify->ObjIndex = inputObjIndex;
				fbxMeshActorModify->CustomCurrentImportID = inputCurrentImportID;
				fbxMeshActorModify->SpawnScale = inputSpawnScale;
			}
		};

		FTransform SpawnTransform = FTransform(FQuat(SpawnRotator), SpawnLocation, SpawnScale);
		GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
			FString::Printf(TEXT("%s > %s > spawnscale: %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
				*FString(__FUNCTION__), *SpawnScale.ToString()), true, FVector2D(1, 1));
		spawnConfig.CustomPreSpawnInitalization = doFunc;
		ACustomFBXMeshActor* FBXActor = GetWorld()->SpawnActor<ACustomFBXMeshActor>(CurrentActorClass, SpawnTransform, spawnConfig);
		customImportActorMap.Add(CustomCurrentImportID, FBXActor);
		ReplicatedActorMapWork();
	}
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

void ACustomFBXImportManager::CustomImportFBXFile(const FString& FbxDownPath, FTransform SpawnTrans, class ACustomFBXImportManager* fbxImportManager, int32 InLoadQueueElementId)
{
	ACustomFBXImportManager* customImporter = Cast<ACustomFBXImportManager>(fbxImportManager);
	UE_LOG(LogTemp, Warning, TEXT("fbxdownPath: %s / SpawnTrans: %s"), *FbxDownPath, *SpawnTrans.ToString())
		if(fbxImportManager){
			UE_LOG(LogTemp, Warning, TEXT("fbx importer exist"))
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("fbx importer null"))

		}
	GEngine->AddOnScreenDebugMessage(-1, 29990, FColor::Purple, FString::Printf(TEXT("Custom CUrrId : %d"), CustomCurrentImportID), true, FVector2D(1, 1));
	auto MyClientPc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());

	TSharedPtr<FFBXImportSettings> ImportSettings = MakeShareable(new FFBXImportSettings());
	//if (MyClientPc && MyClientPc->LoadFbxActorQueue.IsEmpty() || ) {
	if (HasAuthority()) {
		ImportSettings->ImportID = CustomCurrentImportID;
	}
	else {
		ImportSettings->ImportID = InLoadQueueElementId;
	}
	GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > CustomFBX Import() ID : %d"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), ImportSettings->ImportID), true, FVector2D(1, 1));
	//ImportSettings->SpawnTransform = FTransform(FRotator(), SpawnTrans, CustomCurrentScale);

	FTransform importTrans = FTransform(FRotator(0), FVector(0), FVector(8));
	ImportSettings->SpawnTransform = FTransform(importTrans);
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

	// 기존 서버에 존재하던 모델링을 임포트 하는 것인지, 새로운 FbxActor를 생성하는 로직인지 체크
	// 만약 Queue에 데이터가 존재한다면 CurrentImportID를 증가시키지 않음
	if (MyClientPc && MyClientPc->LoadFbxActorQueue.IsEmpty()) {
		auto ServerPc = Cast<AGenAiPlayerController>(GetOwner());
		if (ServerPc && ServerPc->HasAuthority()) {
			GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > Server_IncreaseCustomCurrentImportID_Implementation"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));
			Server_IncreaseCustomCurrentImportID_Implementation();
		}
	}
	else {
		MyClientPc->LoadFbxActorQueue.Pop();
	}

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
			CustomOnImportCompleted(*ImportActor, SceneImporter);
		}
	}
}

void ACustomFBXImportManager::Server_IncreaseCustomCurrentImportID_Implementation()
{
	CustomCurrentImportID++;
}

void ACustomFBXImportManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACustomFBXImportManager, customImportActorArray);
	DOREPLIFETIME(ACustomFBXImportManager, CustomCurrentImportID);
}
