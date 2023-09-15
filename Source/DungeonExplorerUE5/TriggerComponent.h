// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Mover.h"
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TriggerComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DUNGEONEXPLORERUE5_API UTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	UTriggerComponent();

	UFUNCTION(BlueprintCallable)
	void SetMover(UMover* Mover);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UPROPERTY(EditAnywhere)
	FName AcceptableActorTag;

	UMover* Mover;

	AActor* GetAcceptableActor() const;
	
};
