// Fill out your copyright notice in the Description page of Project Settings.


#include "SpinnerComponent.h"

// Sets default values for this component's properties
USpinnerComponent::USpinnerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void USpinnerComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void USpinnerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* owner = GetOwner();

	FRotator rotation = owner->GetActorRotation();

	rotation.Yaw += YawSpeed * DeltaTime;
	rotation.Pitch += PitchSpeed * DeltaTime;
	rotation.Roll += RollSpeed * DeltaTime;
	rotation.Pitch += PitchSpeed * DeltaTime;


	owner->SetActorRotation(rotation);
}

void USpinnerComponent::SetRotationSpeed(FRotator Speed) {
	YawSpeed = Speed.Yaw;
	PitchSpeed = Speed.Pitch;
	RollSpeed = Speed.Roll;
}

