// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/FBXMeshActor.h"
#include "CustomFBXMeshActor.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API ACustomFBXMeshActor : public AFBXMeshActor
{
	GENERATED_BODY()
public:
	ACustomFBXMeshActor();
	UPROPERTY(Replicated, BlueprintReadWrite)
	FString FileName;
	UPROPERTY(Replicated, BlueprintReadWrite)
	FVector SpawnLoc;
	UPROPERTY(Replicated, BlueprintReadWrite)
		int32 ObjIndex;
	UPROPERTY(Replicated, BlueprintReadWrite)
	int32 CustomCurrentImportID;
	UPROPERTY(Replicated, BlueprintReadWrite)
	FVector ProceduralWorldScale = FVector(50);
};
