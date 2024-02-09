// Fill out your copyright notice in the Description page of Project Settings.


#include "NetPlayerState.h"
#include "..\Public\GenAiGameInstance.h"

void ANetPlayerState::BeginPlay()
{
	Super::BeginPlay();

	UGenAiGameInstance* gi = GetGameInstance<UGenAiGameInstance>();
	if (gi) {
		GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("PlayerState Gi Nor null")), true, FVector2D(2, 2));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Purple, FString::Printf(TEXT("PlayerState null.............")), true, FVector2D(2, 2));
	}
}
