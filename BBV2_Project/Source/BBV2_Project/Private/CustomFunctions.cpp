// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomFunctions.h"

FRotator UCustomFunctions::RInterpToConstant(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed, bool bShortestPath)
{
	// if shortest path, we use Quaternion to interpolate instead of using FRotator
	if (bShortestPath)
	{
		FQuat AQuat(Current);
		FQuat BQuat(Target);

		FQuat Result = FMath::QInterpConstantTo(AQuat, BQuat, DeltaTime, InterpSpeed);

		return Result.Rotator();
	}

	return FMath::RInterpConstantTo(Current, Target, DeltaTime, InterpSpeed);
}