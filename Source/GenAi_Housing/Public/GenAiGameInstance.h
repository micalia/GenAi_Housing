// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MenuInterface.h"
#include <../Plugins/Online/OnlineSubsystem/Source/Public/Interfaces/OnlineSessionInterface.h>
#include "GenAiGameInstance.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSearchSessionDele, FString, roomName, int32, currentPlayers, int32, maxPlayers, int32, sessionIdx);

UCLASS()
class GENAI_HOUSING_API UGenAiGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()
	
public:
	UGenAiGameInstance(const FObjectInitializer& ObjectInitializer);

	virtual void Init();

	UFUNCTION(BlueprintCallable)
	void LoadMenuWidget();

	void AccessWorld(FString SessionName);

	IOnlineSessionPtr SessionInterface;

	UPROPERTY(EditAnywhere)
	int32 PlayerMaxCount = 5;

	UPROPERTY(EditAnywhere, BlueprintAssignable, Category = "MySettings")
	FSearchSessionDele onCreateSlot;
	
	void FindSession();
	void CreateSession(FString SessionName);

	void MyJoinSession(int32 roomNum, FString roomName);
	void OnJoinedSession(FName sessionName, EOnJoinSessionCompleteResult::Type result);
private:
	TSubclassOf<class UMainMenu> MenuClass;
	
	class UMainMenu* Menu;

	void OnCreateSessionComplete(FName SessionName, bool Success);
	void OnDestorySessionComplete(FName SessionName, bool Success);

	TSharedPtr<FOnlineSessionSearch> sessionSearch;
	void OnFoundExistSession(bool bWasSuccessful);
};
