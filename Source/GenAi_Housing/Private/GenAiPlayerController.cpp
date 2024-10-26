// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "..\Public\InGameWidget.h"
#include "..\Public\GenAiGameInstance.h"
#include "Components/TextBlock.h"
#include <GenericPlatform\GenericPlatformHttp.h>
#include "..\Public\CustomFBXImportManager.h"
#include <Kismet\KismetMathLibrary.h>
#include "EngineUtils.h"
#include "../Public/GenAiGameState.h"
#include "../Public/HttpRequestActor.h"
#include "../Public/CustomFBXMeshActor.h"
#include <Kismet/GameplayStatics.h>
#include <../Plugins/Runtime/ProceduralMeshComponent/Source/ProceduralMeshComponent/Public/ProceduralMeshComponent.h>
#include <Kismet/KismetStringLibrary.h>
#include "../Public/HousingWidget.h"
#include "../Public/TaskItem.h"
#include "../TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include <UMG/Public/Components/WidgetComponent.h>
#include "../Public/PlayerNameWidget.h"
#include "../Public/HousingPawn.h"
#include "../Public/HousingGameMode.h"

AGenAiPlayerController::AGenAiPlayerController()
{
	ConstructorHelpers::FClassFinder<UInGameWidget> InGameWBClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Widget/InGame/WB_InGameWidget.WB_InGameWidget_C'"));
	if (ensure(InGameWBClass.Class != nullptr)) {
		InGameWidgetFactory = InGameWBClass.Class;
	}
}

void AGenAiPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (InGameWidgetFactory != nullptr && IsLocalPlayerController()) {
		InGameWidgetPtr = CreateWidget<UInGameWidget>(GetWorld(), InGameWidgetFactory);
		InGameWidgetPtr->AddToViewport(); 
		UGenAiGameInstance* gi = GetGameInstance<UGenAiGameInstance>();
		InGameWidgetPtr->RoomOwnerTxt->SetText(FText::FromString(gi->GetSessionName() + " Room"));
	}

	if (IsLocalController()) {
		FTimerHandle ChangeHandler;
		GetWorldTimerManager().SetTimer(ChangeHandler, this, &AGenAiPlayerController::LoadFbxFilesToFbxActor, 0.5f, false);
	}

	for (TActorIterator<AHttpRequestActor> it(GetWorld()); it; ++it) {
		HttpRequestActor = *it;
	}
}

void CheckUObjectIsValid(const UObject* InObject, const FString& InTag) {
	if (InObject->IsValidLowLevel()) {
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > [%s] Is Valid UE Object"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *InTag), true, FVector2D(1, 1));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > [%s] Not Valid UE Object"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *InTag), true, FVector2D(1, 1));
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > One More Check Actors"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));
		
	}
}

void CheckUObjectIsNull(const UObject* InObject, const FString& InTag) {
	if (nullptr == InObject) {
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > NullPTR UE Object"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > Not Null ptr UE Object"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));

	}
}

void AGenAiPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AGenAiPlayerController::UrlEncode(const FString originFileName)
{
	FString EncodedFilePath = FGenericPlatformHttp::UrlEncode(originFileName);
	return EncodedFilePath;
}

void AGenAiPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (controllerFbxImportManager == nullptr) {
		if (HasAuthority()) {
			SpawnFbxImporter_Implementation();
		}
	}
}

void AGenAiPlayerController::HousingSystemCPP()
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	auto MyPlayer = Cast<ATP_ThirdPersonCharacter>(PlayerPawn);
	if (MyPlayer) {
		GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
	}
	else {
		auto Gi = Cast<UGenAiGameInstance>(GetGameInstance());
		if (Gi) {
			auto Gs = GetWorld()->GetGameState<AGenAiGameState>();
			if (Gs) {
				Gs->HttpRequestActor->DeleteRoomObjInfo(DeleteObjArr);
				if (HasAuthority()) {
					ServerUpdateAndInsertToDB_Implementation(Gi->GetSessionName());
				}
				else {
					ServerUpdateAndInsertToDB(Gi->GetSessionName());
				}
			}
		}
		GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(false);
	}
	FVector CameraPos = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetCameraLocation();
	ServerHousingPossess(PlayerPawn, CameraPos);
}

void AGenAiPlayerController::ChkFbxActorQueue()
{
	if (!LoadFbxActorQueue.IsEmpty()) {
		ACustomFBXMeshActor* HeadElement = nullptr;
		LoadFbxActorQueue.Peek(HeadElement);
		ModelingDown(HeadElement->FileName, HeadElement->GetActorTransform(), controllerFbxImportManager, this, HeadElement->CustomCurrentImportID);
	}
	else {
		TArray<AActor*> fbxActorArr;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACustomFBXMeshActor::StaticClass(), fbxActorArr);
		for (int i = 0; i < fbxActorArr.Num(); i++)
		{
			auto FbxActor = Cast<ACustomFBXMeshActor>(fbxActorArr[i]);
			auto mesh = fbxActorArr[i]->GetComponentByClass<UProceduralMeshComponent>();
			if  (mesh == nullptr) {
				//DrawDebugSphere(GetWorld(), fbxActorArr[i]->GetActorLocation(), 20.0f, 32, FColor::Red, false, 999.0f);
				LoadFbxActorQueue.Enqueue(FbxActor);
				ChkFbxActorQueue();
			}
		}
	}
}

void AGenAiPlayerController::LoadFbxFilesToFbxActor()
{
	AGenAiGameState* gs = GetWorld()->GetGameState<AGenAiGameState>();
	if (gs) {
		if (controllerFbxImportManager) {
			TArray<AActor*> fbxActorArr;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACustomFBXMeshActor::StaticClass(), fbxActorArr);
			if (fbxActorArr.Num() > 0) {
				for (int i = 0; i < fbxActorArr.Num(); i++)
				{
					ACustomFBXMeshActor* fbxActor = Cast<ACustomFBXMeshActor>(fbxActorArr[i]);
					LoadFbxActorQueue.Enqueue(fbxActor);
				}
				ChkFbxActorQueue();
			}
		}
	}
}

void AGenAiPlayerController::ModelingDown(const FString& FileName, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImportManager, class AGenAiPlayerController* PlayerController, int32 CurrImportID)
{
	FString EncodeFileName = UKismetStringLibrary::Replace(FileName, TEXT("'"), UrlEncode(TEXT("'")));
	FileExistCheck(EncodeFileName, SpawnTrans, FbxImportManager, PlayerController, CurrImportID);
}

void AGenAiPlayerController::FileDown(const FString& FileName, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImporter, class AGenAiPlayerController* PlayerController, int32 ImportId)
{
	FString EncodeFileName = UrlEncode(FileName);
	auto Gs = Cast<AGenAiGameState>(GetWorld()->GetGameState());
	if (Gs && FbxImporter) {
		FString FbxDownURL = Gs->HttpRequestActor->AI_FBX_FULL_PATH + EncodeFileName + TEXT("_mesh.fbx");
		FString FbxSavePath = FPaths::ProjectSavedDir() + TEXT("Download/") + EncodeFileName + TEXT("_mesh.fbx");
		FbxImporter->DownFbxFileCPP(FbxDownURL, FbxSavePath, SpawnTrans, ImportId);

		FString TextureDownURL = Gs->HttpRequestActor->AI_TEXTURE_FULL_PATH + EncodeFileName + TEXT("_mesh_albedo.png");
		FString TextureSavePath = FPaths::ProjectSavedDir() + TEXT("Download/") + EncodeFileName + TEXT("_mesh_albedo.png");
		FbxImporter->DownTextureFileCPP(TextureDownURL, TextureSavePath);
	}
}

void AGenAiPlayerController::FileExistCheck(const FString& FileName, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImportManager, class AGenAiPlayerController* PlayerController, int32 ImportId)
{
	FString SaveDir = FPaths::ProjectSavedDir();
	FString SavedFbxPath = SaveDir + TEXT("Download/") + FileName + TEXT("_mesh.fbx");
	bool bFileExists = FPaths::FileExists(SavedFbxPath);
	if (bFileExists) {
		if (FbxImportManager) {
			FbxImportManager->SkipDown(SavedFbxPath, SpawnTrans, FbxImportManager, ImportId);
		}
	}
	else {
		FileDown(FileName, SpawnTrans, FbxImportManager, PlayerController, ImportId);
		if (InGameWidgetPtr) { 
			InGameWidgetPtr->WB_HousingWidget->WB_TaskItem->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void AGenAiPlayerController::DeleteRoomObjInfoToDB()
{
	auto Gs = GetWorld()->GetGameState<AGenAiGameState>();
	if (Gs) {
		Gs->HttpRequestActor->DeleteRoomObjInfo(DeleteObjArr);
	}
}

void AGenAiPlayerController::ServerDestroyActor_Implementation(class ACustomFBXMeshActor* FbxMeshActor)
{
	FbxMeshActor->Destroy();
}

void AGenAiPlayerController::ServerSetActorTransform_Implementation(class ACustomFBXMeshActor* FbxMeshActor, FTransform Transform)
{
	auto Gs = Cast<AGenAiGameState>(GetWorld()->GetGameState());
	if (Gs) {
		Gs->MulticastSetActorTransform(FbxMeshActor, Transform);
	}
}

void AGenAiPlayerController::ServerHousingPossess_Implementation(APawn* InPlayer, FVector CameraPos)
{
	auto HousingPlayer = Cast<ATP_ThirdPersonCharacter>(InPlayer);
	if (HousingPlayer) {
		CachePrevCharacter = HousingPlayer;
		auto PlayerNameWidget = Cast<UPlayerNameWidget>(CachePrevCharacter->GetComponentByClass<UWidgetComponent>()->GetWidget());
		if (PlayerNameWidget) {
			if (HousingPlayer->MyHousingPawn) {
				HousingPlayer->MyHousingPawn->CurrUserName = PlayerNameWidget->PlayerNameTxt->GetText().ToString();
				HousingPlayer->MyHousingPawn->SetActorLocation(CameraPos);
				Possess(HousingPlayer->MyHousingPawn);
			}
		}
	}
	else {
		auto HousingPawn = Cast<AHousingPawn>(InPlayer);
		if (HousingPawn) {
			HousingPawn->ServerDeselectAll(false);
			if (HousingPawn->MyHousingPlayer) {
				Possess(HousingPawn->MyHousingPlayer);
			}
		}
	}
}

void AGenAiPlayerController::ServerCreateFbxActor_Implementation(const FString& ObjPrompt, const FString& MakeTimeStamp, FVector SpawnLoc, class ACustomFBXImportManager* FbxImporter, class AGenAiPlayerController* PlayerController, int32 ObjIndex)
{
	FString FileName = MakeTimeStamp + "_" + ObjPrompt;
	if (FbxImporter) {
		FbxImporter->CreateFBXActorInServer(FileName, SpawnLoc, FbxImporter, PlayerController, ObjIndex);
	}
}

void AGenAiPlayerController::Server_InsertObjDataToDB_Implementation(const FString& SessionName)
{
	auto Gs = GetWorld()->GetGameState<AGenAiGameState>();
	if (Gs) {
		Gs->ServerUpdateAndInsertToDB(SessionName);
	}
}

void AGenAiPlayerController::SpawnFbxImporter_Implementation()
{
	if (bSpawnFbxImporter == false) {
		FString ImporterBlueprintReference = TEXT("/Script/Engine.Blueprint'/Game/Blueprints/BP_CustomFbxImporter.BP_CustomFbxImporter_C'");
		UClass* loadedObject = StaticLoadClass(UObject::StaticClass(), nullptr, *ImporterBlueprintReference);

		for (TActorIterator<ACustomFBXImportManager> it(GetWorld()); it; ++it) {
			controllerFbxImportManager = *it;
		}

		if (controllerFbxImportManager) {
			bSpawnFbxImporter = true;
			controllerFbxImportManager->SetOwner(this);
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("4444"))
		bSpawnFbxImporter = true;
	}
}

void AGenAiPlayerController::GetLifetimeReplicatedProps(TArray < class FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AGenAiPlayerController, controllerFbxImportManager);
}

void AGenAiPlayerController::ServerUpdateAndInsertToDB_Implementation(const FString& SessionName)
{
	if (HttpRequestActor == nullptr) return;
	
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