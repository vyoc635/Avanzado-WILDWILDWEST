// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/EnhancedInputUserSettingsVyoc.h"

#include "PlayerMappableKeySettings.h"
#include "InputAction.h"

UTexture2D* UEnhancedInputUserSettingsVyoc:: GetTextureFromInputActionMetadata(const UInputAction* InputAction)
{
	
	UPlayerMappableKeySettings* KeySettings = InputAction->GetPlayerMappableKeySettings();
	if (KeySettings)
	{

		UObject* Data = KeySettings->Metadata; //-> Para tener acceso al pointer; hemos creado un objeto llamado data que tiene la metadata de las keysettings
	
		UTexture2D* Result = Cast<UTexture2D>(Data); //El objeto data lo tiene que convertir en una textura2d y meterlo en result, puede fallar si no hay textura u otro elemento distinto
		if (Result)// Entonces ponemos el if para decir si existe Result, entonces pon el resultado.
{
 
		return Result;
}

	}
	
		return nullptr;
}