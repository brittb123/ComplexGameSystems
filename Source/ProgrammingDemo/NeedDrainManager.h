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

	UFUNCTION(BlueprintCallable)
	float DrainSocial(float SocialPercent, float drainPerTick);

	UFUNCTION(BlueprintCallable)
	bool IsHungerTooLow(float NumberThatIsLow);

	UFUNCTION(BlueprintCallable)
	bool IsThirstTooLow(float ThirstThatIsLow);

	UFUNCTION(BlueprintCallable)
	bool IsSleepTooLow(float SleepThatIsLow);

	UFUNCTION(BlueprintCallable)
	bool IsHygieneTooLow(float HygieneThatIsLow);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Low Needs")
	bool IsHungerLow;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	float Sleepiness;

	float Hunger;

	float Water;

	float Hygiene;



};
