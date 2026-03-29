// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AdvanceCharFirst.generated.h"

UCLASS()
class WILDWILDWEST_API AAdvanceCharFirst : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	
	AAdvanceCharFirst();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera");
	class UCameraComponent* Camera1P;
	
	virtual void OnMoveForward(float Value);
	virtual void OnMoveRight(float Value);
	virtual void OnMoveBack(float Value);	
	virtual void OnMoveLeft(float Value);
	virtual void OnLook(FVector2d Value);
	virtual void OnJump();
	virtual void OnStartInteract();	
	virtual void OnStopInteract();
	
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
