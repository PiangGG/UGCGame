// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FrPawn.generated.h"

UCLASS()
class UGCGAME_API AFrPawn : public ACharacter
{
	GENERATED_BODY()

public:
	AFrPawn();

protected:
	
	virtual void BeginPlay() override;

	void MoveForward(float var);
	void MoveRight(float var);
	void Turn(float var);
	void LookUp(float var);

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere,Category = Camera)
	class USpringArmComponent* CameraBoom;
	
	UPROPERTY(VisibleAnywhere,Category = Camera)
	class UCameraComponent* FollowCamera;
};
