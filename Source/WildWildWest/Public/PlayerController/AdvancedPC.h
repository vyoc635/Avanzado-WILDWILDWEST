// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AdvancedPC.generated.h"

/**
 * 
 */

struct FInputActionValue;


UCLASS()
class WILDWILDWEST_API AAdvancedPC : public APlayerController
{
	GENERATED_BODY()
	
protected:
	
	virtual void OnPossess(APawn* InputPawn) override;
	
	virtual void SetupInputComponent() override;
	
public:
	
	virtual void BeginPlay() override;
	
	void OnMoveForward(const FInputActionValue& Value);
	void OnMoveRight(const FInputActionValue& Value);
	void OnMoveBack(const FInputActionValue& Value);
	void OnMoveLeft(const FInputActionValue& Value);
	//void OnLook(const FInputActionValue& Value);
	//void OnJump();
	//void OnStartInteract();
	//void OnStopInteract();
	
	
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AdvancedPC")
	class AAdvanceCharFirst* CharacterXP;

};