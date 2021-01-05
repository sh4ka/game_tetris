// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerBar.h"

// Sets default values
ATimerBar::ATimerBar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimerBar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATimerBar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

