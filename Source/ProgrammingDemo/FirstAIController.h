// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FirstAIController.generated.h"

/**
 * 
 */
UCLASS()
class PROGRAMMINGDEMO_API AFirstAIController : public AAIController
{
    GENERATED_BODY()

    AFirstAIController();
    
    virtual void BeginPlay() override;

    virtual void Posses(APawn* pawn);

    virtual void Tick(float deltaTime) override;



};
