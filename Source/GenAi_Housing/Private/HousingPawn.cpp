// Fill out your copyright notice in the Description page of Project Settings.


#include "HousingPawn.h"
#include <Net/UnrealNetwork.h>
#include "../Public/GenAiPlayerController.h"
#include "../Public/CustomFBXMeshActor.h"

AHousingPawn::AHousingPawn()
{
	bReplicates = true;
}

void AHousingPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Select"), IE_Pressed, this, &AHousingPawn::SelectPressed);
	PlayerInputComponent->BindAction(TEXT("Select"), IE_Released, this, &AHousingPawn::SelectReleased);
	PlayerInputComponent->BindAction(TEXT("Delete"), IE_Pressed, this, &AHousingPawn::DestroyActor);
}

void AHousingPawn::SelectPressed()
{
	TArray<TEnumAsByte<ECollisionChannel>> CheckCollisionChannels;
	// CollisionChannel : HousingObj
	CheckCollisionChannels.Add(ECollisionChannel::ECC_GameTraceChannel1);
	MouseTraceByObjectTypes(TraceDistance, CheckCollisionChannels, false);
}


void AHousingPawn::SelectReleased()
{
	auto Pc = Cast<AGenAiPlayerController>(GetWorld()->GetFirstPlayerController());
	if (Pc) {
		auto OutPutComponentList = GetSelectedComponents();
		for (int i = 0; i < OutPutComponentList.Num(); i++)
		{
			auto FbxMeshActor = Cast<ACustomFBXMeshActor>(OutPutComponentList[i]->GetOwner());
			if (FbxMeshActor) {
				ClearDomain();
				Pc->ServerSetActorTransform(FbxMeshActor, FbxMeshActor->GetActorTransform());
			}
		}
	}
}

void AHousingPawn::MouseTraceByObjectTypes(float InTraceDistance, TArray<TEnumAsByte<ECollisionChannel>> CollisionChannels, bool bAppendToList)
{
	FVector start, end;
	if (GetMouseStartEndPoints(TraceDistance, start, end))
	{
		bool bTraceSuccessful = TraceByObjectTypes(start, end, CollisionChannels, TArray<AActor*>(), bAppendToList);
	}
}

void AHousingPawn::DestroyActor()
{
	GEngine->AddOnScreenDebugMessage(-1, 999, FColor::Purple,
		FString::Printf(TEXT("%s > %s > DestroyActor!!"), *FDateTime::UtcNow().ToString(TEXT("%H:%M:%S")),
			*FString(__FUNCTION__)), true, FVector2D(1, 1));
	DeselectAll(true);
}

void AHousingPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AHousingPawn, CurrUserName);
}