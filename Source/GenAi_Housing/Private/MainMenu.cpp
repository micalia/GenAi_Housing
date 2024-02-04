// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "UMG/Public/Components/Button.h"

bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(LoginBtn != nullptr)) return false;
	LoginBtn->OnClicked.AddDynamic(this, &UMainMenu::MenuLogin);
	
	return true;
}


void UMainMenu::MenuLogin()
{
	if (MenuInterface != nullptr) {
		MenuInterface->AccessWorld();
	}
}
