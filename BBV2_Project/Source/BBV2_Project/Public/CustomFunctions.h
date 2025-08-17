// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomFunctions.generated.h"

/**
 * 
 */
UCLASS()
class BBV2_PROJECT_API UCustomFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintPure, Category = "Rotation Interpolation")
			static FRotator RInterpToConstant(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed, bool bShortestPath);
	
};
