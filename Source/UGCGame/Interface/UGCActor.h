// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "UGCGame/Data/UGCActorStruct.h"
#include "UGCActor.generated.h"

UCLASS()
class UGCGAME_API AUGCActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AUGCActor();

	virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UDataTable* DT;

private:
	FString Name;
};
