// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/AdvancedPC.h"

#include "Character/AdvanceCharFirst.h"

void AAdvancedPC::OnPossess(APawn* InputPawn)
{
	Super::OnPossess(InputPawn);
	
	CharacterXP = Cast<AAdvanceCharFirst>(InputPawn);
	if (!CharacterXP)
	{
	UE_LOG(LogTemp, Error, TEXT("PlayerController : El character no es la clase que deberia"))
	}
	
}
