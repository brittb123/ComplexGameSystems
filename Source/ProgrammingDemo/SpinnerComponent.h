// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpinnerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROGRAMMINGDEMO_API USpinnerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpinnerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void SetRotationSpeed(FRotator Speed);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float YawSpeed = 20.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PitchSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RollSpeed = 0.0f;
};
