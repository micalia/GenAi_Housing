// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiGameInstance.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "MainMenu.h"
#include "UMG/Public/Blueprint/UserWidget.h"
#include <GameFramework/PlayerController.h>
#include <GameFramework/PlayerState.h>


UGenAiGameInstance::UGenAiGameInstance(const FObjectInitializer& ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UMainMenu> MenuBPClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Widget/Menu/WB_Intro.WB_Intro_C'"));
	if (!ensure(MenuBPClass.Class != nullptr)) return;

	MenuClass = MenuBPClass.Class;
}

void UGenAiGameInstance::Init()
{
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem != nullptr) {
		GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Found Subsystem %s"), * Subsystem->GetSubsystemName().ToString()), true, FVector2D(1, 1));
		SessionInterface = Subsystem->GetSessionInterface();
		if (SessionInterface.IsValid()) {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Found Session INterface!!")), true, FVector2D(1, 1));
			
			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &UGenAiGameInstance::OnCreateSessionComplete);
			SessionInterface->OnFindSessionsCompleteDelegates.AddUObject(this, &UGenAiGameInstance::OnFoundExistSession);
			SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(this, &UGenAiGameInstance::OnDestorySessionComplete);
			SessionInterface->OnJoinSessionCompleteDelegates.AddUObject(this, &UGenAiGameInstance::OnJoinedSession);
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Not Found Subsystem")), true, FVector2D(1, 1));
	}
}

void UGenAiGameInstance::LoadMenuWidget()
{
	if (!ensure(MenuClass != nullptr)) return;

	Menu = CreateWidget<UMainMenu>(this, MenuClass);
	if (!ensure(Menu != nullptr)) return;
	Menu->AddToViewport();
	Menu->SetMenuInterface(this);
}

void UGenAiGameInstance::AccessWorld(FString SessionName)
{
	if (SessionInterface.IsValid()) {
		FNamedOnlineSession* ExistingSession = SessionInterface->GetNamedSession(FName(SessionName));
		UE_LOG(LogTemp, Warning, TEXT("UGenAiGameInstance::AccessWorld()"))
		if (ExistingSession != nullptr) {
			SessionInterface->DestroySession(FName(SessionName));
		}
		else {
			CreateSession(SessionName);
		}
	}

}

void UGenAiGameInstance::OnCreateSessionComplete(FName SessionName, bool Success)
{
	if (!Success) {
		GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Could not create Session")), true, FVector2D(2, 2));
		return;
	}
	
	UE_LOG(LogTemp, Warning, TEXT("OnCreateSessionComplete"))
	FNamedOnlineSession* ExistingSession = SessionInterface->GetNamedSession(FName(SessionName));
	if (ExistingSession != nullptr) {
		//if (!ExistingSession->SessionName.ToString().IsEmpty()) { // 세션의 주인과 본인의 아이디를 비교
			APlayerController* pc = GetWorld()->GetFirstPlayerController();
			APlayerState* ps = pc->PlayerState;
			FString PlayerName = ps->GetPlayerName();
			//if(!PlayerName.Equals(SessionName.ToString()))	return; // 내가 생성한게 아니면 리턴
			UE_LOG(LogTemp, Warning, TEXT("ClientTravel"))
			pc->ClientTravel("/Game/Levels/InGame?listen", ETravelType::TRAVEL_Absolute);
		//}
		//else {
		//	SessionInterface->DestroySession(FName(SessionName));
		//}
	}

}

void UGenAiGameInstance::OnDestorySessionComplete(FName SessionName, bool Success)
{
	if (Success) {
		CreateSession(SessionName.ToString());
	}
}

void UGenAiGameInstance::CreateSession(FString SessionName)
{
	if (SessionInterface.IsValid()) {
		FOnlineSessionSettings SessionSettings;
		SessionSettings.bIsDedicated = false;
		SessionSettings.bAllowInvites = true;
		SessionSettings.bAllowJoinInProgress = true;
		SessionSettings.bAllowJoinViaPresence = true;
		SessionSettings.bIsLANMatch = IOnlineSubsystem::Get()->GetSubsystemName() == "NULL" ? true : false;
		SessionSettings.bShouldAdvertise = true;
		SessionSettings.bUseLobbiesIfAvailable = true;
		SessionSettings.NumPublicConnections = PlayerMaxCount;

		SessionSettings.Set(FName("RoomName"), SessionName, EOnlineDataAdvertisementType::Type::ViaOnlineServiceAndPing);

		SessionInterface->CreateSession(0, FName(*SessionName), SessionSettings);
		GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Create Session")), true, FVector2D(2, 2));
	}
}

void UGenAiGameInstance::MyJoinSession(int32 roomNum, FString roomName)
{
	UE_LOG(LogTemp, Warning, TEXT("JoinSession RoomNum : %d / RoomName : %s"), roomNum, *roomName)
	SessionInterface->JoinSession(0, FName(*roomName), sessionSearch->SearchResults[roomNum]);
}

void UGenAiGameInstance::OnJoinedSession(FName sessionName, EOnJoinSessionCompleteResult::Type result)
{
	UE_LOG(LogTemp, Warning, TEXT("Joined Session: %s"), *sessionName.ToString());

	switch (result)
	{
	case EOnJoinSessionCompleteResult::Success:
	{
		UE_LOG(LogTemp, Warning, TEXT("Join Success!"));

		APlayerController* pc = GetWorld()->GetFirstPlayerController();
		FString url;
		SessionInterface->GetResolvedConnectString(sessionName, url, NAME_GamePort);
		UE_LOG(LogTemp, Warning, TEXT("url: %s"), *url);

		pc->ClientTravel(url, ETravelType::TRAVEL_Absolute);

		break;
	}
	case EOnJoinSessionCompleteResult::SessionIsFull:
		UE_LOG(LogTemp, Warning, TEXT("Session is full..."));
		break;
	case EOnJoinSessionCompleteResult::SessionDoesNotExist:
		UE_LOG(LogTemp, Warning, TEXT("Session Does Not Exist..."));
		break;
	case EOnJoinSessionCompleteResult::CouldNotRetrieveAddress:
		UE_LOG(LogTemp, Warning, TEXT("Could Not Retrieve Address..."));
		break;
	case EOnJoinSessionCompleteResult::AlreadyInSession:
		UE_LOG(LogTemp, Warning, TEXT("You are already in this session..."));
		break;
	case EOnJoinSessionCompleteResult::UnknownError:
		UE_LOG(LogTemp, Warning, TEXT("Unknown Error occurred!"));
		break;
	default:
		break;
	}
}

void UGenAiGameInstance::OnFoundExistSession(bool bWasSuccessful)
{
	if (sessionSearch == nullptr) return;
	TArray<FOnlineSessionSearchResult> results = sessionSearch->SearchResults;

	UE_LOG(LogTemp, Warning, TEXT("Find Results: %s"), bWasSuccessful ? *FString("Success!") : *FString("Failed..."));

	if (bWasSuccessful)
	{
		UE_LOG(LogTemp, Warning, TEXT("Session Count: %d"), results.Num());

		for (int32 i = 0; i < results.Num(); i++)
		{
			FString foundRoomName;
			results[i].Session.SessionSettings.Get(FName("RoomName"), foundRoomName);

			int32 maxPlayerCount = results[i].Session.SessionSettings.NumPublicConnections;
			int32 currentPlayerCount = maxPlayerCount - results[i].Session.NumOpenPublicConnections;

			onCreateSlot.Broadcast(foundRoomName, currentPlayerCount, maxPlayerCount, i);
			// 로그로 확인하기
			UE_LOG(LogTemp, Warning, TEXT("Room Name: %s\nPlayer Count: (%d/%d)\n"), *foundRoomName, currentPlayerCount, maxPlayerCount);

		}

	}
}

void UGenAiGameInstance::FindSession()
{
	// 세션 검색 조건을 설정하기
	sessionSearch = MakeShareable(new FOnlineSessionSearch());
	sessionSearch->bIsLanQuery = true;
	sessionSearch->MaxSearchResults = 10;
	sessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Type::Equals);

	// 서버에 세션 검색을 요청하기
	SessionInterface->FindSessions(0, sessionSearch.ToSharedRef());
}
