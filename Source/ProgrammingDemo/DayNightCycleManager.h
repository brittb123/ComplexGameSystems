// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h" 
#include "Engine/DirectionalLight.h"
#include "Misc/OutputDeviceNull.h"
#include "DayNightCycleManager.generated.h"

UCLASS()
class PROGRAMMINGDEMO_API ADayNightCycleManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADayNightCycleManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "DayNightCycle")
	AActor* sun;

	UPROPERTY(EditAnywhere, Category = "DayNightCycle")
	ADirectionalLight* SunLight;

	UPROPERTY(EditAnywhere, Category = "DayNightCycle")
	float TurnRate;
};
