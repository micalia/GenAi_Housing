// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomFBXMeshActor.h"
#include <Net/UnrealNetwork.h>

void ACustomFBXMeshActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACustomFBXMeshActor, FileName);
	DOREPLIFETIME(ACustomFBXMeshActor, SpawnLoc);
}