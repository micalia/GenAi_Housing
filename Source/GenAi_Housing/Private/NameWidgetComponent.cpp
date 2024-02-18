// Fill out your copyright notice in the Description page of Project Settings.


#include "NameWidgetComponent.h"
#include "..\Public\PlayerNameWidget.h"

void UNameWidgetComponent::InitWidget()
{
	Super::InitWidget();

	UPlayerNameWidget* NameWidget = Cast<UPlayerNameWidget>(GetWidget());
	if (NameWidget) {

		FString LogMsg = TEXT("InitWidget");
		if (GetOwner()->HasAuthority()) {
			UE_LOG(LogTemp, Warning, TEXT("%s > Ser > %s > %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *LogMsg)
				GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple, FString::Printf(TEXT("%s > Ser > %s > %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *LogMsg), true, FVector2D(1, 1));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("%s > Cli > %s > %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *LogMsg)
				GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple, FString::Printf(TEXT("%s > Cli > %s > %s"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")), *FString(__FUNCTION__), *LogMsg), true, FVector2D(1, 1));
		}
		NameWidget->SetOwningActor(GetOwner());
	}
}
