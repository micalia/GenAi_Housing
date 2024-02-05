// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "UMG/Public/Components/Button.h"
#include "EngineUtils.h"
#include "../Public/HttpRequestActor.h"

bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(LoginBtn != nullptr)) return false;
	LoginBtn->OnClicked.AddDynamic(this, &UMainMenu::MenuLogin);
	JoinActBtn->OnClicked.AddDynamic(this, &UMainMenu::MenuSignUp);
	
	return true;
}


void UMainMenu::MenuLogin()
{
	if (MenuInterface != nullptr) {
		MenuInterface->AccessWorld();
	}
}

void UMainMenu::MenuSignUp()
{
	for (TActorIterator<AHttpRequestActor> it(GetWorld()); it; ++it) {
		AHttpRequestActor* httpActor = *it;
		httpActor->SignUp();
	}
}
