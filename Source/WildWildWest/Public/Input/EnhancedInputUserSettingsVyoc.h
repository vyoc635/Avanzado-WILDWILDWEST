// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "EnhancedInputUserSettingsVyoc.generated.h"

/**
 * 		Ajustes del usuario y otras utilidades de input.
 */
UCLASS()
class WILDWILDWEST_API UEnhancedInputUserSettingsVyoc : public UEnhancedInputUserSettings
{
	GENERATED_BODY() //Obligatorio en todas las clases de unreal

public:

	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")  //Solo le dice que existe esta VARIABLE al sistema; EditAnywhere cambia tanto en parado como jugado
	float MouseSensitivityX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")  
	float MouseSensitivityY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings") 	
	bool InvertYAxis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings") 
	bool HoldToCrouch;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings") 
	bool HoldToSprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float FOV;
	

	
	

	UFUNCTION(BlueprintPure, Category = "Input")  //Pure solo saca un valor, no esta conectada al flujo
	
	static UTexture2D* GetTextureFromInputActionMetadata(const UInputAction* InputAction); //static es que no necesitas en la funcion un target, el target ya lo tiene otro
																// Me retorna un pointer(*) a una Texture2D, para ahorrar espacio.
																// "GetTexTurexxx" es el nombre de la funcion
																// const le dice que solo lo puedes leer y no cambiar
	
	
	
	
	
};
