// Fill out your copyright notice in the Description page of Project Settings.


#include "NetPlayerState.h"
#include "..\Public\GenAiGameInstance.h"
#include "Net/UnrealNetwork.h"


void ANetPlayerState::BeginPlay()
{
	Super::BeginPlay();

	UGenAiGameInstance* gi = GetGameInstance<UGenAiGameInstance>();

	// ���� �÷��̾ ������ ���� �ν��Ͻ��� ����� ���� �̸��� �����ͼ� ���� RPC�� �̸� ��� ��û�� �Ѵ�.
	if (GetPlayerController() && GetPlayerController()->IsLocalPlayerController() && gi != nullptr)
	{
		FString playerName = gi->GetPlayerName();
		ServerSetMyName(playerName);
	}
}

void ANetPlayerState::ServerSetMyName_Implementation(const FString& name)
{
	// PlayerState�� �����Ǿ� �ִ� privateName������ ���� �����Ѵ�.
	SetPlayerName(name);

}
