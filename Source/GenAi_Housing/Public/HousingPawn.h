// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TransformerPawn.h"
#include "HousingPawn.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API AHousingPawn : public ATransformerPawn
{
	GENERATED_BODY()
public:
	AHousingPawn();

	UPROPERTY(BlueprintReadWrite, Replicated)
	FString CurrUserName = TEXT("");
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	float TraceDistance = 5000000;
	void SelectPressed();
	void SelectReleased();
	void MouseTraceByObjectTypes(float InTraceDistance, TArray<TEnumAsByte<ECollisionChannel>> CollisionChannels, bool bAppendToList);

	void DestroyActor();

	UPROPERTY(BlueprintReadOnly)
	class ATP_ThirdPersonCharacter* MyHousingPlayer;
};
