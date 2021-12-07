// Fill out your copyright notice in the Description page of Project Settings.


#include "SpinActor.h"

// Sets default values
ASpinActor::ASpinActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->SetupAttachment(RootComponent);

	Spin = CreateDefaultSubobject<USpinnerComponent>(TEXT("Spinner"));

	


}

// Called when the game starts or when spawned
void ASpinActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpinActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

