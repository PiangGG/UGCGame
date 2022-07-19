// Fill out your copyright notice in the Description page of Project Settings.
#include "FrPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
AFrPawn::AFrPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->TargetArmLength = 0.0f;
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->SetupAttachment(RootComponent);
	
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
}

// Called when the game starts or when spawned
void AFrPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFrPawn::MoveForward(float var)
{
	if (Controller!=nullptr&&var != 0.0f)
	{
		const FRotator YawRotation(0.0f,Controller->GetControlRotation().Yaw,0.0f);
		const FVector Dirction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddMovementInput(Dirction,var);
	}
}

void AFrPawn::MoveRight(float var)
{
	if (Controller!=nullptr&&var != 0.0f)
	{
		const FRotator YawRotation(0.0f,Controller->GetControlRotation().Yaw,0.0f);
		const FVector Dirction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddMovementInput(Dirction,var);
	}
}

void AFrPawn::Turn(float var)
{
	AddControllerYawInput(var);
}

void AFrPawn::LookUp(float var)
{
	AddControllerPitchInput(var);
}

// Called every frame
void AFrPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFrPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward",this, &AFrPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",this, &AFrPawn::MoveRight);
	PlayerInputComponent->BindAxis("Turn",this, &AFrPawn::Turn);
	PlayerInputComponent->BindAxis("LookUp",this, &AFrPawn::LookUp);
}

