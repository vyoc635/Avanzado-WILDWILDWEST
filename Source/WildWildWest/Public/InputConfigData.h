// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "InputConfigData.generated.h"

/**
 * 
 */

USTRUCT()
struct FTaggedAction
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere)
	FGameplayTag Tag; //FGameplayTag es propia de Unreal, 
	
	UPROPERTY(EditAnywhere)
	class UInputAction* Action;
	
	
};

UCLASS()
class WILDWILDWEST_API UInputConfigData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	
	UPROPERTY(EditAnywhere)
	TArray<FTaggedAction> MouseActions;
	
	UPROPERTY(EditAnywhere)
	TArray<FTaggedAction> GamepadActions;
	
	
};
