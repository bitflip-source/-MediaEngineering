// Fill out your copyright notice in the Description page of Project Settings.


#include "States.h"

// Sets default values
AStates::AStates()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	currentState = 0;
	nextState = 1;
}
void AStates::setNextState()
{
	currentState = nextState;

	switch (nextState) {
	case 0:
		nextState = 1;
		break;
	case 1:
		nextState = 2;
		break;
	case 2:
		nextState = 3;
		break;
	case 3:
		nextState = 0;
		break;


	}
}

int AStates::getcurrentState()
{
	return currentState;
}

void AStates::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AStates::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}