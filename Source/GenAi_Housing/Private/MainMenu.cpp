// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "UMG/Public/Components/Button.h"
#include "EngineUtils.h"
#include "../Public/HttpRequestActor.h"
#include "../Public/GenAiGameInstance.h"
#include <GameFramework/PlayerState.h>

bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(LoginBtn != nullptr)) return false;
	LoginBtn->OnClicked.AddDynamic(this, &UMainMenu::MenuLogin);
	JoinActBtn->OnClicked.AddDynamic(this, &UMainMenu::MenuSignUp);
	MyRoomBtn->OnClicked.AddDynamic(this, &UMainMenu::EnterMyRoom);

	gi = Cast<UGenAiGameInstance>(GetGameInstance());

	return true;
}


void UMainMenu::MenuLogin()
{
	for (TActorIterator<AHttpRequestActor> it(GetWorld()); it; ++it) {
		AHttpRequestActor* httpActor = *it;
		httpActor->Login();
	}
}

/* 인게임 레벨로 이동
if (MenuInterface != nullptr) {
	MenuInterface->AccessWorld();
}*/
void UMainMenu::MenuSignUp()
{
	for (TActorIterator<AHttpRequestActor> it(GetWorld()); it; ++it) {
		AHttpRequestActor* httpActor = *it;
		httpActor->SignUp();
	}
}

void UMainMenu::EnterMyRoom()
{
	UE_LOG(LogTemp, Warning, TEXT("EnterMyRoom"))
		APlayerController* pc = GetWorld()->GetFirstPlayerController();
	APlayerState* ps = pc->PlayerState;
	FString PlayerName = ps->GetPlayerName();
	gi->CreateSession(PlayerName);
}
