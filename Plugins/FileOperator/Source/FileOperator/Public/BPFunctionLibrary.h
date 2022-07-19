// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FILEOPERATOR_API UBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable,Category=BPF)
	static FString GetMapData(const FString& MapName);

	UFUNCTION(BlueprintCallable,Category=BPF)
	static void SaveMapData(const FString& MapName,const FString& Datastr);
private:
	
};
