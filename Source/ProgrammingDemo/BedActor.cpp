// Fill out your copyright notice in the Description page of Project Settings.


#include "BedActor.h"

// Sets default values
ABedActor::ABedActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UStaticMeshComponent* MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BedMesh"));
	MeshComp->SetupAttachment(RootComponent);
	MeshComp->OnComponentBeginOverlap.AddDynamic(this, &ABedActor::BeginOverlap);
}

// Called when the game starts or when spawned
void ABedActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABedActor::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}


