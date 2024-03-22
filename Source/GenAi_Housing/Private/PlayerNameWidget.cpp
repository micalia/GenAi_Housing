// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerNameWidget.h"
#include "..\Public\NameWidgetInterface.h"
#include "..\TP_ThirdPerson\TP_ThirdPersonCharacter.h"
#include "..\Public\GenAiGameInstance.h"
#include <UMG\Public\Components\TextBlock.h>

void UPlayerNameWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	//INameWidgetInterface* NameWidget = Cast<INameWidgetInterface>(OwningActor);
	//if (NameWidget) {
	//		auto gi = Cast<UGenAiGameInstance>(GetWorld()->GetGameInstance());
	//		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("UPlayerNameWidget::NativeConstruct")), true, FVector2D(1, 1));
	//		UE_LOG(LogTemp, Warning, TEXT("UPlayerNameWidget::NativeConstruct"))
	//		//NameWidget->SetUpCharacterNameWidget(this, OwningActor);

	//}

	if (ATP_ThirdPersonCharacter* player = Cast<ATP_ThirdPersonCharacter>(OwningActor)) {
		player->SetUpLocal(this);
	}

	//if (auto player = Cast<ATP_ThirdPersonCharacter>(OwningActor)) {
	//	auto gi = Cast<UGenAiGameInstance>(GetWorld()->GetGameInstance());
	//	if (gi) {
	//		FString giName = gi->GetGiPlayerName();
	//		GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > giName: %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *giName), true, FVector2D(1, 1));
	//		/*if (player->HasAuthority()) {
	//			player->Server_SetPlayerNameVal_Implementation(this, gi->GetGiPlayerName());
	//		}
	//		else {
	//			player->Server_SetPlayerNameVal(this, gi->GetGiPlayerName());
	//		}*/
	//	}
	//}
}

void UPlayerNameWidget::UpdateName()
{
	if (ATP_ThirdPersonCharacter* player = Cast<ATP_ThirdPersonCharacter>(OwningActor)) {
		//GEngine->AddOnScreenDebugMessage(-1, 9999, FColor::Purple, FString::Printf(TEXT("%s > %s > UpdateName"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__)), true, FVector2D(1, 1));
		PlayerNameTxt->SetText(FText::FromString(player->CustomPlayerName));
	}
}
