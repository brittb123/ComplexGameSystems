// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstAIController.h"

AFirstAIController::AFirstAIController() 
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFirstAIController::BeginPlay()
{
	Super::BeginPlay();
}

void AFirstAIController::Posses(APawn* pawn)
{
	Super::Possess(pawn);
}

void AFirstAIController::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
}
