// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidget.h"
#include "MainMenu.generated.h"

/**
 *
 */
UCLASS()
class GENAI_HOUSING_API UMainMenu : public UMenuWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* signUpNickTxt;
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* signUpPwdTxt;
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
		class UWidgetSwitcher* WidgetSwitcher;

	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* LoginNickTxt;
	UPROPERTY(meta = (BindWidget))
		class UEditableTextBox* LoginPwdTxt;
protected:
	virtual bool Initialize();

public:
	UPROPERTY(meta = (BindWidget))
		class UButton* LoginBtn;
	UPROPERTY(meta = (BindWidget))
		class UButton* JoinActBtn;
	UPROPERTY(meta = (BindWidget))
		class UButton* MyRoomBtn;

	UFUNCTION()
		void MenuLogin();
	UFUNCTION()
		void MenuSignUp();
	UFUNCTION()
		void EnterMyRoom();

	UPROPERTY(meta = (BindWidget))
		class UScrollBox* RoomList;

	UPROPERTY()
	class UGenAiGameInstance* gi;
};
