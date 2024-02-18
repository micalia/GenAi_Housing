// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NameWidgetInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNameWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GENAI_HOUSING_API INameWidgetInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetUpCharacterNameWidget(class UPlayerNameWidget* InNameWIdget, class AActor* InPlayer) = 0;
};
