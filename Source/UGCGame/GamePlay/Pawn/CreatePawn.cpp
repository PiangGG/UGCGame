// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatePawn.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
ACreatePawn::ACreatePawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->TargetArmLength = 0.0f;
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->SetupAttachment(RootComponent);
	
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	
	SetReplicates(true);
	
}

// Called when the game starts or when spawned
void ACreatePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACreatePawn::MoveForward(float var)
{
	if (Controller!=nullptr&&var != 0.0f)
	{
		/*const FRotator YawRotation(0.0f,Controller->GetControlRotation().Yaw,0.0f);
		const FVector Dirction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddMovementInput(Dirction,var);*/

		FRotator const ControlSpaceRot = Controller->GetControlRotation();
		AddMovementInput( FRotationMatrix(ControlSpaceRot).GetScaledAxis( EAxis::X ), var );
	}
}

void ACreatePawn::MoveRight(float var)
{
	if (Controller!=nullptr&&var != 0.0f)
	{/*
		const FRotator YawRotation(0.0f,Controller->GetControlRotation().Yaw,0.0f);
		const FVector Dirction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddMovementInput(Dirction,var);*/

		FRotator const ControlSpaceRot = Controller->GetControlRotation();
		AddMovementInput( FRotationMatrix(ControlSpaceRot).GetScaledAxis( EAxis::Y ), var );
		
	}
}

void ACreatePawn::Turn(float var)
{
	AddControllerYawInput(var);
}

void ACreatePawn::LookUp(float var)
{
	AddControllerPitchInput(var);
}

// Called every frame
void ACreatePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACreatePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward",this, &ACreatePawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",this, &ACreatePawn::MoveRight);
	PlayerInputComponent->BindAxis("Turn",this, &ACreatePawn::Turn);
	PlayerInputComponent->BindAxis("LookUp",this, &ACreatePawn::LookUp);
}