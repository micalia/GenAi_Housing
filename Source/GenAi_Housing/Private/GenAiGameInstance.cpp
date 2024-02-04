// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiGameInstance.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "MainMenu.h"
#include "UMG/Public/Blueprint/UserWidget.h"

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
		IOnlineSessionPtr SessionInterface = Subsystem->GetSessionInterface();
		if (SessionInterface.IsValid()) {
			GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("Found Session INterface!!")), true, FVector2D(1, 1));
			FOnlineSessionSettings SessionSettings;
			SessionInterface->CreateSession(0, TEXT("GenAiGame"), SessionSettings);
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

void UGenAiGameInstance::AccessWorld()
{
	UWorld* World = GetWorld();
	World->ServerTravel("/Game/Levels/InGame?listen");
}

void UGenAiGameInstance::OnCreateSessionComplete(FName SessionName, bool Success)
{

}
