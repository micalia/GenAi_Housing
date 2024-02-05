// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpRequestActor.h"
#include "..\..\..\Plugins\MySqlConnect\Source\MySqlConnect\Public\MySQLDatabase.h"
#include "..\Public\MainMenu.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/EditableTextBox.h"
#include "Components/WidgetSwitcher.h"

// Sets default values
AHttpRequestActor::AHttpRequestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

