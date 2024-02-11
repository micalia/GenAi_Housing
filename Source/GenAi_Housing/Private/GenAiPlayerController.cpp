// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "..\Public\InGameWidget.h"
#include "..\Public\GenAiGameInstance.h"
#include "Components/TextBlock.h"
#include <GenericPlatform\GenericPlatformHttp.h>
#include "..\Public\CustomFBXImportManager.h"
#include <Kismet\KismetMathLibrary.h>

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

void AGenAiPlayerController::SpawnFbxImporter_Implementation()
{
	if (bSpawnFbxImporter == false) {
		FString ImporterBlueprintReference = TEXT("/Script/Engine.Blueprint'/Game/Blueprints/BP_CustomFbxImporter.BP_CustomFbxImporter_C'");
		UClass* loadedObject = StaticLoadClass(UObject::StaticClass(), nullptr, *ImporterBlueprintReference);
		controllerFbxImportManager = GetWorld()->SpawnActor<ACustomFBXImportManager>(loadedObject,
			FVector(UKismetMathLibrary::RandomFloatInRange(2200, 3260), 2410, 200),
			FRotator(0)
			);
		if (controllerFbxImportManager) {
			bSpawnFbxImporter = true;
			controllerFbxImportManager->SetOwner(this);
		}
	}
	else {
		bSpawnFbxImporter = true;
	}
}

void AGenAiPlayerController::GetLifetimeReplicatedProps(TArray < class FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AGenAiPlayerController, controllerFbxImportManager);
}