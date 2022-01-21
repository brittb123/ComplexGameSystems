
// Fill out your copyright notice in the Description page of Project Settings.

#include "DayNightCycleManager.h"

// Sets default values
ADayNightCycleManager::ADayNightCycleManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADayNightCycleManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADayNightCycleManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// If the directional light is not null, rotates the light by its turn rate
	if (SunLight)
	{
		SunLight->AddActorLocalRotation(FRotator((DeltaTime * TurnRate), 0, 0));
	}

	// If the sky sphere is not null, it calls a function to update the sun position
	if (sun)
	{
		FOutputDeviceNull ar;
		sun->CallFunctionByNameWithArguments(TEXT("UpdateSunDirection"), ar, NULL, true);
	}
}

