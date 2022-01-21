// Fill out your copyright notice in the Description page of Project Settings.


#include "NeedDrainManager.h"

// Sets default values
ANeedDrainManager::ANeedDrainManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Drains the hunger by the specific value put in
float ANeedDrainManager::DrainHunger(float HungerPercent, float drainPerTick)
{	
	HungerPercent -= drainPerTick;
	return HungerPercent;
}

// Drains the thirst by the specific value put in
float ANeedDrainManager::DrainThirst(float ThirstPercent, float drainPerTick)
{
	ThirstPercent -= drainPerTick;
	return ThirstPercent;
}

// Drains the sleep by the specific value put in
float ANeedDrainManager::DrainSleep(float SleepPercent, float drainPerTick)
{
	SleepPercent -= drainPerTick;
	return SleepPercent;
}

// Drains the hygiene by the specific value put in
float ANeedDrainManager::DrainHygiene(float HygienePercent, float drainPerTick)
{
	HygienePercent -= drainPerTick;
	return HygienePercent;
}


// Called when the game starts or when spawned
void ANeedDrainManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANeedDrainManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

