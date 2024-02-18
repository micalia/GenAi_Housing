// Fill out your copyright notice in the Description page of Project Settings.


#include "GenAiGameState.h"
#include "EngineUtils.h"
#include "..\Public\HttpRequestActor.h"
#include "..\TP_ThirdPerson\TP_ThirdPersonCharacter.h"

void AGenAiGameState::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<AHttpRequestActor> it(GetWorld()); it; ++it) {
		HttpRequestActor = *it;
	}

}
