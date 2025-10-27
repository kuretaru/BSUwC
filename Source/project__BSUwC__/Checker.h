// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Checker.generated.h"

UCLASS()
class PROJECT__BSUWC___API AChecker : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AChecker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere);
	USceneComponent* OurVisibleComponent;
	
	void CheckerChoose(int A);
	void Move_XAxis(float Ax);
	
	FVector CurrentVelocity;

};
