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
#include "../Public/GenAiGameState.h"
#include "../../../Plugins/RealTimeImport/Source/RealTimeImport/Public/RealTimeImportAsyncNodes.h"
#include <Materials/MaterialInterface.h>

ACustomFBXImportManager::ACustomFBXImportManager() {
	bReplicates = true;

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> tempBaseMaterialInst(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Materials/M_BaseMaterial_Inst.M_BaseMaterial_Inst'"));
	if (tempBaseMaterialInst.Succeeded())
	{
		BaseMat = tempBaseMaterialInst.Object;
	}
}

void ACustomFBXImportManager::BeginPlay()
{
	Super::BeginPlay();

	onProgressDel.BindDynamic(this, &ACustomFBXImportManager::OnFbxStorageProgress);
	onDownCompleteDel.BindDynamic(this, &ACustomFBXImportManager::OnFbxStorageComplete);
	onTextureProgressDel.BindDynamic(this, &ACustomFBXImportManager::OnTextureStorageProgress);
	onTextureDownCompleteDel.BindDynamic(this, &ACustomFBXImportManager::OnTextureStorageComplete);
}

void ACustomFBXImportManager::ModelingDown(const FString& fileName, FTransform SpawnTransform, class ACustomFBXImportManager* fbxImporter, class AGenAiPlayerController* PlayerController, int32 InCurrImportID)
{
	auto Gs = Cast<AGenAiGameState>(GetWorld()->GetGameState());
	if (Gs) {
		Gs->ServerModelingDown(fileName, SpawnTransform, fbxImporter, PlayerController, InCurrImportID);
	}
}

void ACustomFBXImportManager::SkipDown(const FString& FbxDownPath, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImporter, int32 ImportId)
{
	if (FbxImporter) {
		FbxImporter->CustomImportFBXFile(FbxDownPath, SpawnTrans, FbxImporter, ImportId);
	}
}

void ACustomFBXImportManager::DownFbxFileCPP(FString fbxUrl, FString saveUrl, FTransform spawnTrans, int32 InRealImportID)
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
		pc->InGameWidgetPtr->WB_HousingWidget->WB_TaskItem->SetVisibility(ESlateVisibility::Hidden);
		ProgressRatio = 0;
		pc->InGameWidgetPtr->WB_HousingWidget->WB_TaskItem->SetProgress(ProgressRatio);
	}
	else {
		pc->InGameWidgetPtr->WB_HousingWidget->WB_TaskItem->SetProgress(ProgressRatio);
	}
}


void ACustomFBXImportManager::OnFbxStorageComplete(EDownloadToStorageResult Result)
{
	OnDownComplete(currSaveFbxPath, currSpawnTrans, CurrRealImportID);
}

void ACustomFBXImportManager::OnTextureStorageProgress(int64 BytesReceived, int64 ContentLength, float ProgressRatio)
{

}

void ACustomFBXImportManager::OnTextureStorageComplete(EDownloadToStorageResult Result)
{

}

void ACustomFBXImportManager::OnDownComplete(const FString& SavedFbxPath, FTransform SpawnTrans, int32 currImportID)
{
	CustomImportFBXFile(SavedFbxPath, SpawnTrans, this, currImportID);
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

	FActorSpawnParameters SpawnConfig;
	SpawnConfig.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnConfig.TransformScaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot;
	FString InputFileName = fileName;
	FVector InputSpawnLoc = SpawnLoc;
	int32 InputObjIndex = objIndex;
	int32 InputCurrentImportID = CustomCurrentImportID;
	// ACustomFBXMeshActor의 속성값 초기화
	auto DoFunc = [InputFileName, InputSpawnLoc, InputObjIndex, InputCurrentImportID](AActor* ObjectToModify)
	{
		ACustomFBXMeshActor* FbxMeshActorModify = Cast<ACustomFBXMeshActor>(ObjectToModify);
		if (FbxMeshActorModify)
		{
			FbxMeshActorModify->FileName = InputFileName;
			FbxMeshActorModify->SpawnLoc = InputSpawnLoc;
			FbxMeshActorModify->ObjIndex = InputObjIndex;
			FbxMeshActorModify->CustomCurrentImportID = InputCurrentImportID;
		}
	};

	SpawnConfig.CustomPreSpawnInitalization = DoFunc;
	ACustomFBXMeshActor* FBXActor = GetWorld()->SpawnActor<ACustomFBXMeshActor>(CurrentActorClass, SpawnLoc, FRotator::ZeroRotator, SpawnConfig);
	customImportActorMap.Add(CustomCurrentImportID, FBXActor);
	ReplicatedActorMapWork();
	
	//Server_ModelingDown(fileName, FBXActor->GetActorTransform(), fbxImporter, PlayerController, CustomCurrentImportID);
	ModelingDown(fileName, FBXActor->GetActorTransform(), fbxImporter, PlayerController, CustomCurrentImportID);
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
		FActorSpawnParameters SpawnConfig;
		SpawnConfig.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnConfig.TransformScaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot;
		FString InputFileName = InRoomInfoArr[i].fileName;
		
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

		FVector InputSpawnLoc = SpawnLocation;
		int32 InputObjIndex = InRoomInfoArr[i].objIndex;
		int32 InputCurrentImportID = CustomCurrentImportID;
		FVector InputSpawnScale = SpawnScale;
		int32 InputRoomObjIndex = InRoomInfoArr[i].roomObjIndex;
		auto DoFunc = [InputFileName, InputSpawnLoc, InputObjIndex, InputCurrentImportID, InputSpawnScale, InputRoomObjIndex](AActor* ObjectToModify)
		{
			ACustomFBXMeshActor* FbxMeshActorModify = Cast<ACustomFBXMeshActor>(ObjectToModify);
			if (FbxMeshActorModify)
			{
				FbxMeshActorModify->FileName = InputFileName;
				FbxMeshActorModify->SpawnLoc = InputSpawnLoc;
				FbxMeshActorModify->ObjIndex = InputObjIndex;
				FbxMeshActorModify->CustomCurrentImportID = InputCurrentImportID;
				FbxMeshActorModify->SpawnScale = InputSpawnScale;
				FbxMeshActorModify->RoomObjIndex = InputRoomObjIndex;
			}
		};

		FTransform SpawnTransform = FTransform(FQuat(SpawnRotator), SpawnLocation, SpawnScale);
		SpawnConfig.CustomPreSpawnInitalization = DoFunc;
		ACustomFBXMeshActor* FBXActor = GetWorld()->SpawnActor<ACustomFBXMeshActor>(CurrentActorClass, SpawnTransform, SpawnConfig);
		customImportActorMap.Add(CustomCurrentImportID, FBXActor);
		CustomCurrentImportID++;
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
	
	GEngine->AddOnScreenDebugMessage(-1, 29990, FColor::Purple, FString::Printf(TEXT("Custom CUrrId : %d"), CustomCurrentImportID), true, FVector2D(1, 1));
	auto MyClientPc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());

	TSharedPtr<FFBXImportSettings> ImportSettings = MakeShareable(new FFBXImportSettings());
	
	ImportSettings->ImportID = InLoadQueueElementId;
	GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > CustomFBX Import() ID : %d"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), ImportSettings->ImportID), true, FVector2D(1, 1));

	FTransform importTrans = FTransform(FRotator(0), FVector(0), FVector(8));
	ImportSettings->SpawnTransform = FTransform(importTrans);
	ImportSettings->Filepath = FbxDownPath;
	ImportSettings->FBXAxis = FVector(static_cast<uint8>(CustomCurrentCoordinate), static_cast<uint8>(CustomCurrentUpVector), static_cast<uint8>(CustomCurrentFrontVector));

	ImportSettings->SpawnFBXActor = false;
	ImportSettings->MaterialImportSettings = CustomMaterialImportSettings;
	ImportSettings->bTransformVertexToAbsolute = CustomTransformVertexToAbsolute;

	FBXSceneImporter = NewObject<UCustomFBXSceneImporter>();
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
		ImportActorPtr = customImportActorMap.Find(ImportID);
		if (ImportActorPtr)
		{
			TArray<FMaterialRuntimeInfo> MaterialInfoArray;
			(*ImportActorPtr)->AddMesh(NewMeshNode, SpawnTransform, MaterialInfoArray);
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
			OnFbxImportCompleted(*ImportActor, SceneImporter);
		}
	}
}

void ACustomFBXImportManager::OnFbxImportCompleted(class ACustomFBXMeshActor* MeshActor, UCustomFBXSceneImporter* SceneImporter)
{
	/*FTimerHandle DelayHandle;
	GetWorld()->GetTimerManager().SetTimer(DelayHandle, FTimerDelegate::CreateLambda([&, MeshActor, SceneImporter]() {*/
	SpawnMeshActor = MeshActor;
	PMC = MeshActor->FindComponentByClass<UProceduralMeshComponent>();
	if (PMC == nullptr) return;
	if (PMC && IsValid(PMC)) {
		UMaterialInstanceDynamic* MI = PMC->CreateDynamicMaterialInstance(0, BaseMat, FName(TEXT("None")));
		if (MI) {
			// 새로 스폰한 액터를 선택하려면 SelectActor를 두번 호출해야 함
			SelectActor(SpawnMeshActor, PMC);
			SelectActor(SpawnMeshActor, PMC);
			auto Pc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());
			if (Pc) {
				FString EncodeFileName = Pc->UrlEncode(SpawnMeshActor->FileName);
				FString SavedTexturePath = TEXT("Saved/Download/") + EncodeFileName + TEXT("_mesh_albedo.png");
				auto LoadImageASyncNode = URealTimeImportAsyncNodeLoadImageFile::LoadImageFileAsyncNode(ERTIDirectoryType::E_gd, SavedTexturePath, TextureCompressionSettings::TC_Default, false, true, false);
				LoadImageASyncNode->Activate();
				if (LoadImageASyncNode) {
					LoadImageASyncNode->OnSuccess.AddDynamic(this, &ACustomFBXImportManager::OnLoadImageCompleted);
					LoadImageASyncNode->OnFail.AddDynamic(this, &ACustomFBXImportManager::OnLoadImageFail);
				}
			}
		}
	}
		/*else {
			CustomHandleImportCompleted(SceneImporter);
		}
	}), 0.1f, false);*/
}

void ACustomFBXImportManager::OnLoadImageCompleted(UTexture2D* texture, const FString fileName, const int32 errorCode, const FString errorMessage, const FString eventID)
{
	SpawnMeshActor->UpdateTextureParameter(0, TEXT("DiffuseTexture"), texture, PMC);
	auto Pc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Pc && Pc->IsLocalController()) {
		Pc->ChkFbxActorQueue();
	}
}

void ACustomFBXImportManager::OnLoadImageFail(UTexture2D* texture, const FString fileName, const int32 errorCode, const FString errorMessage, const FString eventID)
{
	GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
		FString::Printf(TEXT("%s > %s > Load IMage Fail!!"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
			*FString(__FUNCTION__)), true, FVector2D(1, 1));
}

FString ACustomFBXImportManager::BytesToString(const TArray<uint8>& InBytes)
{
	FString Result = FString::FromHexBlob(InBytes.GetData(), InBytes.Num());
	return Result;
}

TArray<uint8> ACustomFBXImportManager::FStringToByteArray(const FString& String)
{
	FTCHARToUTF8 Convert(*String); 

	const uint8* UTF8Data = (uint8*)Convert.Get(); 

	TArray<uint8> ByteArray(UTF8Data, Convert.Length());

	return ByteArray;
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
	DOREPLIFETIME(ACustomFBXImportManager, SpawnMeshActor);
}
