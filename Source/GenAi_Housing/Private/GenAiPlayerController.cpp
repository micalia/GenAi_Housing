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


AGenAiPlayerController::AGenAiPlayerController()
{
	ConstructorHelpers::FClassFinder<UInGameWidget> InGameWBClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Widget/InGame/WB_InGameWidget.WB_InGameWidget_C'"));
	if (InGameWBClass.Succeeded()) {
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
		FString LogMsg = TEXT("Load FBX!!");
		LoadFbxFilesToFbxActor();
		if (HasAuthority()) {
			UE_LOG(LogTemp, Warning, TEXT("%s > Ser > %s > %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *LogMsg)
				GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple, FString::Printf(TEXT("%s > Ser > %s > %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *LogMsg), true, FVector2D(1, 1));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("%s > Cli > %s > %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *LogMsg)
				GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple, FString::Printf(TEXT("%s > Cli > %s > %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *LogMsg), true, FVector2D(1, 1));
		}
	}
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

void AGenAiPlayerController::LoadFbxFilesToFbxActor()
{
	AGenAiGameState* gs = GetWorld()->GetGameState<AGenAiGameState>();
	UE_LOG(LogTemp, Warning, TEXT("gsgsgs"))
	if (ensure(gs)) {
		UE_LOG(LogTemp, Warning, TEXT("gsgsgs11111"))
		if (ensure(controllerFbxImportManager)) {
			UE_LOG(LogTemp, Warning, TEXT("gsgsgs22222"))
			TArray<AActor*> fbxActorArr;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACustomFBXMeshActor::StaticClass(), fbxActorArr);
			if (fbxActorArr.Num() > 0) {
				auto fbxActor = Cast<ACustomFBXMeshActor>(fbxActorArr[0]);
				GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("Load FBX Transform: %s"), *fbxActor->GetActorTransform().ToString()), true, FVector2D(1, 1));
					//LocalModelingDown(fbxActor->FileName, fbxActor->GetActor);
			}
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("iMPORTER is null")), true, FVector2D(1, 1));
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("gs is null")), true, FVector2D(1, 1));
	}
		
		//&& controllerFbxImportManager != nullptr)) {
		//controllerFbxImportManager->
		//gs->HttpRequestActor->GetFileNamesByIds(fbxActorArr);
	
}

void AGenAiPlayerController::Server_InsertObjDataToDB_Implementation(const FString& userName)
{
	auto httpRequestActor = GetWorld()->GetGameState<AGenAiGameState>()->HttpRequestActor;
	if (httpRequestActor == nullptr) return;
	
	TArray<FRoomInfo> roomInfoArr;
	for (TActorIterator<ACustomFBXMeshActor> it(GetWorld()); it; ++it) {
		ACustomFBXMeshActor* fbxActor = *it;

		FRoomInfo roomInfo;
		roomInfo.nickName = userName;
		roomInfo.objIndex = fbxActor->ObjIndex;
		roomInfo.position = fbxActor->GetActorLocation().ToString();
		roomInfo.rotation = fbxActor->GetActorRotation().ToString();
		roomInfo.scale = fbxActor->GetActorScale3D().ToString();
		roomInfoArr.Add(roomInfo);
	}
	
	httpRequestActor->InsertObjDataToDB(roomInfoArr);
}

void AGenAiPlayerController::SpawnFbxImporter_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("1111"))
	if (bSpawnFbxImporter == false) {
		FString ImporterBlueprintReference = TEXT("/Script/Engine.Blueprint'/Game/Blueprints/BP_CustomFbxImporter.BP_CustomFbxImporter_C'");
		UClass* loadedObject = StaticLoadClass(UObject::StaticClass(), nullptr, *ImporterBlueprintReference);
		controllerFbxImportManager = GetWorld()->SpawnActor<ACustomFBXImportManager>(loadedObject,
			FVector(UKismetMathLibrary::RandomFloatInRange(2200, 3260), 2410, 200),
			FRotator(0)
			);
		UE_LOG(LogTemp, Warning, TEXT("22222"))
		if (controllerFbxImportManager) {
			UE_LOG(LogTemp, Warning, TEXT("33333"))
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