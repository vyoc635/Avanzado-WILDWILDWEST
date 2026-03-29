// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AdvanceCharFirst.h"

#include "Camera/CameraComponent.h"

// Sets default values
AAdvanceCharFirst::AAdvanceCharFirst()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Camera1P = CreateDefaultSubobject<UCameraComponent>("Camera1P");
	Camera1P->SetupAttachment(RootComponent);
	Camera1P->bUsePawnControlRotation = true;
	Camera1P->SetRelativeLocation(FVector(0, 0, 100));
}

// Called when the game starts or when spawned
void AAdvanceCharFirst::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAdvanceCharFirst::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAdvanceCharFirst::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAdvanceCharFirst::OnMoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AAdvanceCharFirst::OnMoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AAdvanceCharFirst::OnMoveBack(float Value)
{
	OnMoveForward(-Value); // Reutilizamos la lógica de Forward invertida
}

void AAdvanceCharFirst::OnMoveLeft(float Value)
{
	OnMoveRight(-Value); // Reutilizamos la lógica de Right invertida
}

void AAdvanceCharFirst::OnLook(FVector2D Value)
{
	AddControllerYawInput(Value.X);
	AddControllerPitchInput(Value.Y);
}

void AAdvanceCharFirst::OnJump()
{
	Jump(); // Función nativa de ACharacter
}

void AAdvanceCharFirst::OnStartInteract()
{
	// Lógica de interacción futura
}

void AAdvanceCharFirst::OnStopInteract()
{
	// Lógica de interacción futura
}