// Fill out your copyright notice in the Description page of Project Settings.
//自由飞行建造的Pawn
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CreatePawn.generated.h"

UCLASS()
class UGCGAME_API ACreatePawn : public APawn
{
	GENERATED_BODY()

public:
	ACreatePawn();

protected:
	virtual void BeginPlay() override;

	void MoveForward(float var);
	void MoveRight(float var);
	void Turn(float var);
	void LookUp(float var);
public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UFloatingPawnMovement* Movement;

private:
	UPROPERTY(VisibleAnywhere,Category = Camera)
	class USpringArmComponent* CameraBoom;
	
	UPROPERTY(VisibleAnywhere,Category = Camera)
	class UCameraComponent* FollowCamera;

};
