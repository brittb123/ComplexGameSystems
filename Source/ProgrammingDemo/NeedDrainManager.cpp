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
	Hunger = HungerPercent;
	return HungerPercent;
}

float ANeedDrainManager::DrainThirst(float ThirstPercent, float drainPerTick)
{
	ThirstPercent -= drainPerTick;
	Water = ThirstPercent;
	return ThirstPercent;
}

float ANeedDrainManager::DrainSleep(float SleepPercent, float drainPerTick)
{
	SleepPercent -= drainPerTick;
	Sleepiness = SleepPercent;
	return SleepPercent;
}

float ANeedDrainManager::DrainHygiene(float HygienePercent, float drainPerTick)
{
	HygienePercent -= drainPerTick;
	Hygiene = HygienePercent;
	return HygienePercent;
}

float ANeedDrainManager::DrainSocial(float SocialPercent, float drainPerTick)
{
	SocialPercent -= drainPerTick;
	return SocialPercent;
}

bool ANeedDrainManager::IsHungerTooLow(float NumberThatIsLow)
{
	if (Hunger <= NumberThatIsLow)
		return true;

	else 
	return false;
}

bool ANeedDrainManager::IsThirstTooLow(float ThirstThatIsLow)
{
	if (Water <= ThirstThatIsLow)
		return true;

	else
		return false;
}

bool ANeedDrainManager::IsSleepTooLow(float SleepThatIsLow)
{
	if (Sleepiness <= SleepThatIsLow)
		return true;

	else
		return false;
}

bool ANeedDrainManager::IsHygieneTooLow(float HygieneThatIsLow)
{
	if (Hygiene <= HygieneThatIsLow)
		return true;

	else
		return false;
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

