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

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_InsertObjDataToDB(const FString& userName);

	void LoadFbxFilesToFbxActor();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void LocalModelingDown(const FString& FileName, FTransform SpawnTrans, class ACustomFBXImportManager* FbxImportManager, class AGenAiPlayerController* PlayerController);
};
