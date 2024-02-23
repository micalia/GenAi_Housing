// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiGameInstance.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "MainMenu.h"
#include "UMG/Public/Blueprint/UserWidget.h"
#include <GameFramework/PlayerController.h>
#include <GameFramework/PlayerState.h>
#include <UMG/Public/Blueprint/WidgetBlueprintLibrary.h>
#include "../Public/RoomSlot.h"
#include "EngineUtils.h"
#include "../Public/HttpRequestActor.h"

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
		GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Found Subsystem %s"), *Subsystem->GetSubsystemName().ToString()), true, FVector2D(1, 1));
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
		if (APlayerController* pc = GetWorld()->GetFirstPlayerController()) {
			//SetSessionName(SessionName.ToString());
			UE_LOG(LogTemp, Warning, TEXT("ClientTravel"))
			pc->ClientTravel("/Game/Levels/InGame?listen", ETravelType::TRAVEL_Absolute);

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
	FNamedOnlineSession* ExistingSession = SessionInterface->GetNamedSession(FName(SessionName));
	if (ExistingSession != nullptr) {
		SessionInterface->DestroySession(FName(SessionName));
	}
	else {
		if (SessionInterface.IsValid()) {
			FOnlineSessionSettings SessionSettings;
			SessionSettings.bIsDedicated = false;
			SessionSettings.bIsLANMatch = IOnlineSubsystem::Get()->GetSubsystemName() == "NULL" ? true : false;
			SessionSettings.bAllowInvites = true;
			SessionSettings.bAllowJoinInProgress = true;
			SessionSettings.bAllowJoinViaPresence = true;
			SessionSettings.bShouldAdvertise = true; // 현재 세션을 광고할지 (스팀의 다른 플레이어에게 세션 홍보 여부)
			SessionSettings.bUsesPresence = true;
			SessionSettings.bUseLobbiesIfAvailable = true;
			SessionSettings.NumPublicConnections = PlayerMaxCount;
			
			SessionSettings.Set(FName("RoomName"), SessionName, EOnlineDataAdvertisementType::Type::ViaOnlineServiceAndPing);
			SetSessionName(SessionName);

			//SessionName = TEXT("GameSession");
			SessionInterface->CreateSession(0, FName(*SessionName), SessionSettings);
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Create Session")), true, FVector2D(2, 2));
		}
	}
}

void UGenAiGameInstance::MyJoinSession(int32 roomNum, FString roomName)
{
	UE_LOG(LogTemp, Warning, TEXT("JoinSession RoomNum : %d / RoomName : %s"), roomNum, *roomName)
		SessionInterface->JoinSession(0, FName(*roomName), sessionSearch->SearchResults[roomNum]);
	SetSessionName(roomName);
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

void UGenAiGameInstance::DeleteSessionSlots()
{
	TArray<UUserWidget*> ActiveWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), ActiveWidgets, UUserWidget::StaticClass(), false);

	// 각 위젯을 제거합니다.
	for (UUserWidget* Widget : ActiveWidgets)
	{
		URoomSlot* slot = Cast<URoomSlot>(Widget);
		if (slot)
		{
			slot->RemoveFromParent();
		}
	}
}

void UGenAiGameInstance::SetSessionName(FString name)
{
	CurrSessionName = FName(*name);
}

void UGenAiGameInstance::SetPlayerName(FString name)
{
	PlayerName = name;
}

void UGenAiGameInstance::OnFoundExistSession(bool bWasSuccessful)
{
	if (sessionSearch == nullptr) return;
	TArray<FOnlineSessionSearchResult> FoundSessions = sessionSearch->SearchResults;

	UE_LOG(LogTemp, Warning, TEXT("Find Results: %s"), bWasSuccessful ? *FString("Success!") : *FString("Failed..."));

	if (bWasSuccessful)
	{
		AHttpRequestActor* httpActor = nullptr;
		for (TActorIterator<AHttpRequestActor> it(GetWorld()); it; ++it) {
			httpActor = *it;
		}
		if (httpActor == nullptr) return;
		
		UE_LOG(LogTemp, Warning, TEXT("Session Count: %d"), FoundSessions.Num());
		DeleteSessionSlots();

		TSet<FString>& SelectUserArrRef = httpActor->DBLoadUserRooms();
		for (int i = 0; i < FoundSessions.Num(); i++)
		{
			FString FoundRoomName;
			FoundSessions[i].Session.SessionSettings.Get(FName("RoomName"), FoundRoomName);
			FString* ExistUserRoom = SelectUserArrRef.Find(FoundRoomName);
			if (ExistUserRoom) {
				SelectUserArrRef.Remove(FoundRoomName);
				int32 maxPlayerCount = FoundSessions[i].Session.SessionSettings.NumPublicConnections;
				int32 currentPlayerCount = maxPlayerCount - FoundSessions[i].Session.NumOpenPublicConnections;

				onCreateSlot.Broadcast(FoundRoomName, currentPlayerCount, maxPlayerCount, i);
			}
		}

		for (const FString& UserRoom : SelectUserArrRef)
		{
			onCreateSlot.Broadcast(UserRoom, 0, PlayerMaxCount, -1);
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
