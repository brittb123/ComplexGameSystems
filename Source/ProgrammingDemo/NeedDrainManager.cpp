// Fill out your copyright notice in the Description page of Project Settings.


#include "NeedDrainManager.h"

// Sets default values
ANeedDrainManager::ANeedDrainManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

float ANeedDrainManager::DrainHunger(float HungerPercent, float drainPerTick)
{	
	HungerPercent -= drainPerTick;
	return HungerPercent;
}

float ANeedDrainManager::DrainThirst(float ThirstPercent, float drainPerTick)
{
	ThirstPercent -= drainPerTick;
	return ThirstPercent;
}

float ANeedDrainManager::DrainSleep(float SleepPercent, float drainPerTick)
{
	SleepPercent -= drainPerTick;
	return SleepPercent;
}

float ANeedDrainManager::DrainHygiene(float HygienePercent, float drainPerTick)
{
	HygienePercent -= drainPerTick;
	return HygienePercent;
}

float ANeedDrainManager::DrainSocial(float SocialPercent, float drainPerTick)
{
	SocialPercent -= drainPerTick;
	return SocialPercent;
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

