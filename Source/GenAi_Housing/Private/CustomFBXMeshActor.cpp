// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomFBXMeshActor.h"
#include <Net/UnrealNetwork.h>

ACustomFBXMeshActor::ACustomFBXMeshActor()
{
	bReplicates = true;
}

void ACustomFBXMeshActor::BeginPlay()
{
	Super::BeginPlay();

}

void ACustomFBXMeshActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACustomFBXMeshActor, FileName);
	DOREPLIFETIME(ACustomFBXMeshActor, SpawnLoc);
	DOREPLIFETIME(ACustomFBXMeshActor, ObjIndex);
	DOREPLIFETIME(ACustomFBXMeshActor, CustomCurrentImportID);
	DOREPLIFETIME(ACustomFBXMeshActor, ProceduralWorldScale);
	DOREPLIFETIME(ACustomFBXMeshActor, SpawnScale);
	DOREPLIFETIME(ACustomFBXMeshActor, RoomObjIndex);
}
