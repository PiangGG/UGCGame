// Fill out your copyright notice in the Description page of Project Settings.


#include "UGCActor.h"


AUGCActor::AUGCActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UDataTable>data(TEXT(""));
	
	if (data.Succeeded())
	{
		DT = data.Object;
	}
	if (DT)
	{
		FUGCActorStruct * DataRow = DT->FindRow<FUGCActorStruct>(TEXT("NewRow"),Name);
	}
}

// Called when the game starts or when spawned
void AUGCActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUGCActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

