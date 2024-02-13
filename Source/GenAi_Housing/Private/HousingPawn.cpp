// Fill out your copyright notice in the Description page of Project Settings.


#include "HousingPawn.h"
#include <Net/UnrealNetwork.h>

AHousingPawn::AHousingPawn()
{
	bReplicates = true;
}

void AHousingPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AHousingPawn, CurrUserName);
}

