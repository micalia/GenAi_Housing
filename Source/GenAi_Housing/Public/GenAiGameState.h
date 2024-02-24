// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GenAiGameState.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API AGenAiGameState : public AGameState
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite)
	class AHttpRequestActor* HttpRequestActor;

	UFUNCTION(Server, Reliable, BlueprintCallable)
	void ServerInsertChk(const FString& SessionName);

	UFUNCTION(BlueprintCallable)
	class UInGameWidget* GetInGameWidget();
};
