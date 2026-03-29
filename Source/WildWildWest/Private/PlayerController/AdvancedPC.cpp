// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/AdvancedPC.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Character/AdvanceCharFirst.h"

void AAdvancedPC::BeginPlay()
{
	Super::BeginPlay();
    
	
}

void AAdvancedPC::OnPossess(APawn* InputPawn)
{
	Super::OnPossess(InputPawn);
	
	CharacterXP = Cast<AAdvanceCharFirst>(InputPawn);
	if (!CharacterXP)
	{
	UE_LOG(LogTemp, Error, TEXT("PlayerController : El character no es la clase que deberia"))
	}
	
}

void AAdvancedPC::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
	
	
}



void AAdvancedPC::OnMoveForward(const FInputActionValue& Value)
{
	float v = Value.Get<float>();
	if (CharacterXP) CharacterXP->OnMoveForward(v);
}

void AAdvancedPC::OnMoveRight(const FInputActionValue& Value)
{
	float v = Value.Get<float>();	
	if (CharacterXP) CharacterXP->OnMoveRight(v);
}

void AAdvancedPC::OnMoveBack(const FInputActionValue& Value)
{
	float v = Value.Get<float>();	
	if (CharacterXP) CharacterXP->OnMoveBack(v);
	
}

void AAdvancedPC::OnMoveLeft(const FInputActionValue& Value)
{
	float v = Value.Get<float>();
	if (CharacterXP) CharacterXP->OnMoveLeft(v);
}

