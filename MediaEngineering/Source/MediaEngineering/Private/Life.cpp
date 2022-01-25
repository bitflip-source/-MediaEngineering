// Fill out your copyright notice in the Description page of Project Settings.

/**/
#include "Life.h"


//Decreases lifes
int ALife::increaseLife(int addlifes = 1)
{
	lifes = lifes + addlifes;
	return lifes;
}

//Increases lifes 
int ALife::decreaseLife(int sublifes = 1)
{
	lifes = lifes - sublifes;
	if (lifes <= 0) isalive = false;
	return sublifes;
}

//Controls every tick if the character is still alive.
void ALife::tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (lifes <= 0) {
		isalive = false;
	}
	//destroy character
}

//Sets character life on maxlifes.
int ALife::fullLifes()
{
	lifes = maxlifes;
	return lifes;

}

//Sets character life on full and the isalive on true when the game starts.
void ALife::BeginPlay()
{
	isalive = true;
	fullLifes();
}



