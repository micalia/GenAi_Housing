// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpRequestActor.h"
#include "..\..\..\Plugins\MySqlConnect\Source\MySqlConnect\Public\MySQLDatabase.h"
#include "..\Public\MainMenu.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/EditableTextBox.h"
#include "Components/WidgetSwitcher.h"
#include "..\Public\RoomSlot.h"
#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "..\Public\GenAiGameInstance.h"
#include <OnlineSessionSettings.h>

// Sets default values
AHttpRequestActor::AHttpRequestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FClassFinder<URoomSlot> RoomSlotBPClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Widget/Menu/WB_RoomSlot.WB_RoomSlot_C'"));
	if (RoomSlotBPClass.Succeeded()) {
		RoomSlotFactory = RoomSlotBPClass.Class;
	}
}

// Called when the game starts or when spawned
void AHttpRequestActor::BeginPlay()
{
	Super::BeginPlay();
	
	MySqlDB = NewObject<UMySQLDatabase>();
	
	Conn = MySqlDB->MySQLInitConnection(
		DB_IP,
		DB_USER,
		DB_PWD,
		DB_NAME,
		ConnectionTimeout, 
		ReadTimeout, 
		WriteTimeout);

	gi = Cast<UGenAiGameInstance>(GetGameInstance());
	gi->onCreateSlot.AddDynamic(this, &AHttpRequestActor::OnSlotCreated);
}

// Called every frame
void AHttpRequestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHttpRequestActor::SignUp()
{
	UMainMenu* MainMenuPtr = GetMainMenuWidget();
	if (MainMenuPtr) {
		FString SelectQuery = L"SELECT nickName FROM userInfo WHERE nickName= '" +
							MainMenuPtr->signUpNickTxt->GetText().ToString() + "'";
		FMySQLConnectoreQueryResult SelectResult = MySqlDB->MySQLConnectorGetData(SelectQuery, Conn);
		if (SelectResult.ResultRows.Num() > 0) {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("already exist user name")), true, FVector2D(2, 2));
			return;
		}

		FString InsertQuery = L"INSERT INTO userInfo VALUES('" +
							MainMenuPtr->signUpNickTxt->GetText().ToString() + 
							"', '" + 
							MainMenuPtr->signUpPwdTxt->GetText().ToString() + "')";
		if (MySqlDB->MySQLConnectorExecuteQuery(InsertQuery, Conn)) {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Join Success!!")), true, FVector2D(2, 2));
			MainMenuPtr->WidgetSwitcher->SetActiveWidgetIndex(0);
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Join Fail.........")), true, FVector2D(2, 2));
		}
	}
}

void AHttpRequestActor::Login()
{
	UMainMenu* MainMenuPtr = GetMainMenuWidget();
	if (MainMenuPtr) {
		FString inputName = MainMenuPtr->LoginNickTxt->GetText().ToString();
		FString inputPwd = MainMenuPtr->LoginPwdTxt->GetText().ToString();
		FString SelectQuery = L"SELECT nickName FROM userInfo WHERE nickName= '" +
			inputName + "' and " +
			"pwd='" + inputPwd + "'";
		FMySQLConnectoreQueryResult SelectResult = MySqlDB->MySQLConnectorGetData(SelectQuery, Conn);
		if (SelectResult.ResultRows.Num() == 0) {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Not Found User")), true, FVector2D(2, 2));
			return;
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Login Complete")), true, FVector2D(2, 2));
		}
		APlayerController* pc = GetWorld()->GetFirstPlayerController();
		APlayerState* ps = pc->PlayerState;
		ps->SetPlayerName(inputName);
		//DBLoadUserRooms();
		gi->FindSession(); 
		MainMenuPtr->WidgetSwitcher->SetActiveWidgetIndex(2);
	}
}


void AHttpRequestActor::OnSlotCreated(FString roomName, int32 currentPlayers, int32 maxPlayers, int32 sessionIdx)
{
	UMainMenu* MainMenuPtr = GetMainMenuWidget();
	if (MainMenuPtr != nullptr && RoomSlotFactory != nullptr)
	{
		if (URoomSlot* RoomSlot = CreateWidget<URoomSlot>(GetWorld(), RoomSlotFactory))
		{
			RoomSlot->SetSessionInfo(roomName, currentPlayers, maxPlayers, sessionIdx);
			MainMenuPtr->RoomList->AddChild(RoomSlot);
		}
	}
}

void AHttpRequestActor::DBLoadUserRooms()
{
	UMainMenu* MainMenuPtr = GetMainMenuWidget();
	if (MainMenuPtr) {
		FString SelectQuery = L"SELECT nickName FROM userInfo";
		FMySQLConnectoreQueryResult SelectResult = MySqlDB->MySQLConnectorGetData(SelectQuery, Conn);
		
		for (int i = 0; i < SelectResult.ResultRows.Num(); i++)
		{
			if (URoomSlot* RoomSlot = CreateWidget<URoomSlot>(GetWorld(), RoomSlotFactory)) {
				FString UserName = SelectResult.ResultRows[i].Fields[0].Value;

				FNamedOnlineSession* ExistingSession = gi->SessionInterface->GetNamedSession(FName(UserName));
				if (ExistingSession != nullptr) {
					int32 currentPlayerCount = gi->PlayerMaxCount - ExistingSession->NumOpenPublicConnections;
					RoomSlot->RoomNameTxt->SetText(FText::FromString(UserName + " Room / Exist Session / (" + FString::FromInt(gi->PlayerMaxCount) + "/" + FString::FromInt(currentPlayerCount) + ")"));
				}
				else {
					RoomSlot->RoomNameTxt->SetText(FText::FromString(UserName + " Room / Not Found Session"));
				}
				RoomSlot->OwnerUserName = UserName;
				MainMenuPtr->RoomList->AddChild(RoomSlot); 
			}
		}

	}
}

UMainMenu* AHttpRequestActor::GetMainMenuWidget()
{
	TArray<UUserWidget*> ActiveWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), ActiveWidgets, UUserWidget::StaticClass(), false);

	for (UUserWidget* Widget : ActiveWidgets)
	{
		UMainMenu* MainMenuPtr = Cast<UMainMenu>(Widget);
		if (IsValid(MainMenuPtr) && Widget->IsInViewport())
		{
			return MainMenuPtr;
		}
	}
	return nullptr;
}

