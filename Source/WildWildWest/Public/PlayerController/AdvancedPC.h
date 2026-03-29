// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AdvancedPC.generated.h"

/**
 * 
 */
UCLASS()
class WILDWILDWEST_API AAdvancedPC : public APlayerController
{
	GENERATED_BODY()
	
protected:
	
	virtual void OnPossess(APawn* InputPawn) override;
	
	
public:
	
	UPROPERTY(VisibleAnywhere)
	class AAdvanceCharFirst* CharacterXP;
};
