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
	UPROPERTY(Replicated, BlueprintReadWrite)
	FString FileName;
	UPROPERTY(Replicated, BlueprintReadWrite)
	FVector SpawnLoc;
};
