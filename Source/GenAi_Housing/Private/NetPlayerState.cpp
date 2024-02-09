// Fill out your copyright notice in the Description page of Project Settings.


#include "NetPlayerState.h"
#include "..\Public\GenAiGameInstance.h"
#include "Net/UnrealNetwork.h"


void ANetPlayerState::BeginPlay()
{
	Super::BeginPlay();

	UGenAiGameInstance* gi = GetGameInstance<UGenAiGameInstance>();

	// 로컬 플레이어가 각자의 게임 인스턴스에 저장된 세션 이름을 가져와서 서버 RPC로 이름 등록 요청을 한다.
	if (GetPlayerController() && GetPlayerController()->IsLocalPlayerController() && gi != nullptr)
	{
		FString playerName = gi->GetPlayerName();
		ServerSetMyName(playerName);
	}
}

void ANetPlayerState::ServerSetMyName_Implementation(const FString& name)
{
	// PlayerState에 구현되어 있는 privateName변수의 값을 갱신한다.
	SetPlayerName(name);

}
