// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeedDrainManager.generated.h"

UCLASS()
class PROGRAMMINGDEMO_API ANeedDrainManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANeedDrainManager();

	UFUNCTION(BlueprintCallable)
	float DrainHunger(float HungerPercent, float drainPerTick);

	UFUNCTION(BlueprintCallable)
	float DrainThirst(float ThirstPercent, float drainPerTick);

	UFUNCTION(BlueprintCallable)
	float DrainSleep(float SleepPercent, float drainPerTick);

	UFUNCTION(BlueprintCallable)
	float DrainHygiene(float HygienePercent, float drainPerTick);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
