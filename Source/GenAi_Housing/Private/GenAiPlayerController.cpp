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

AGenAiPlayerController::AGenAiPlayerController()
{
	static ConstructorHelpers::FClassFinder<UInGameWidget> InGameWBClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Widget/InGame/WB_InGameWidget.WB_InGameWidget_C'"));
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
		FString LogMsg = TEXT("Load FBX!!");
		FTimerHandle ChangeHandler;
		GetWorldTimerManager().SetTimer(ChangeHandler, this, &AGenAiPlayerController::LoadFbxFilesToFbxActor, 0.5f, false);
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

void AGenAiPlayerController::ChkFbxActorQueue()
{
	if (!LoadFbxActorQueue.IsEmpty()) {
		ACustomFBXMeshActor* HeadElement = nullptr;
		LoadFbxActorQueue.Peek(HeadElement);
		/*CheckUObjectIsNull(HeadElement, TEXT("LoadFbxActorQueue"));
		CheckUObjectIsValid(HeadElement, TEXT("LoadFbxActorQueue"));*/
		FTransform debug = HeadElement->GetActorTransform();
		LocalModelingDown(HeadElement->FileName, HeadElement->GetActorTransform(), controllerFbxImportManager, this, HeadElement->CustomCurrentImportID);
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > Dequeue Import FbxActor"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));
		GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
			FString::Printf(TEXT("%s > %s > Deque Trans: %d"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
				*FString(__FUNCTION__), HeadElement->CustomCurrentImportID), true, FVector2D(1, 1));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > Not exisit data in ActorQueue"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));
		TArray<AActor*> fbxActorArr;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACustomFBXMeshActor::StaticClass(), fbxActorArr);
		for (int i = 0; i < fbxActorArr.Num(); i++)
		{
			auto FbxActor = Cast<ACustomFBXMeshActor>(fbxActorArr[i]);
			auto mesh = fbxActorArr[i]->GetComponentByClass<UProceduralMeshComponent>();
			if  (mesh == nullptr) {
				DrawDebugSphere(GetWorld(), fbxActorArr[i]->GetActorLocation(), 20.0f, 32, FColor::Red, false, 999.0f);
				LoadFbxActorQueue.Enqueue(FbxActor);
				ChkFbxActorQueue();
			}
		}
	}

}

void AGenAiPlayerController::LoadFbxFilesToFbxActor()
{
	AGenAiGameState* gs = GetWorld()->GetGameState<AGenAiGameState>();
	if (ensure(gs)) {
		if (ensure(controllerFbxImportManager)) {
			TArray<AActor*> fbxActorArr;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACustomFBXMeshActor::StaticClass(), fbxActorArr);
			if (fbxActorArr.Num() > 0) {
				for (int i = 0; i < fbxActorArr.Num(); i++)
				{
					ACustomFBXMeshActor* fbxActor = Cast<ACustomFBXMeshActor>(fbxActorArr[i]);
					LoadFbxActorQueue.Enqueue(fbxActor);
					GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("Load FBX Transform: %s"), *fbxActor->GetActorTransform().ToString()), true, FVector2D(1, 1));
					
				}

				ChkFbxActorQueue();
			}
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("iMPORTER is null")), true, FVector2D(1, 1));
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Purple, FString::Printf(TEXT("gs is null")), true, FVector2D(1, 1));
	}
		
}

void AGenAiPlayerController::TestQueue()
{
	/*ACustomFBXMeshActor* HeadElement = nullptr;
	if (!LoadFbxActorQueue.IsEmpty()) {
		LoadFbxActorQueue.Dequeue(HeadElement);
		CheckUObjectIsNull(HeadElement, TEXT("LoadFbxActorQueue"));
		CheckUObjectIsValid(HeadElement, TEXT("LoadFbxActorQueue"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, 
			FString::Printf(TEXT("%s > %s > LoadFbxActorQueue Empty!"), 
				*FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
				*FString(__FUNCTION__)), true, FVector2D(1, 1));
	}*/
	
	//GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple,
	//	FString::Printf(TEXT("%s > %s > --------------------------------------"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));
	/*if (chk) {
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > chk false"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));
		chk = false;
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > chk true"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));
		chk = true;
	}*/
}

void AGenAiPlayerController::DeleteRoomObjInfoToDB()
{
	auto Gs = GetWorld()->GetGameState<AGenAiGameState>();
	if (Gs) {
		Gs->HttpRequestActor->DeleteRoomObjInfo(DeleteObjArr);
	}
}

void AGenAiPlayerController::Server_InsertObjDataToDB_Implementation(const FString& SessionName)
{
	auto Gs = GetWorld()->GetGameState<AGenAiGameState>();
	if (Gs) {
		Gs->ServerInsertChk(SessionName);
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