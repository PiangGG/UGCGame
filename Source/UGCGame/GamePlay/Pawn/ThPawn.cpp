// Fill out your copyright notice in the Description page of Project Settings.


#include "ThPawn.h"


// Sets default values
AThPawn::AThPawn()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AThPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AThPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}