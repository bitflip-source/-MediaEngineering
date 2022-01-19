// Fill out your copyright notice in the Description page of Project Settings.


#include "Life.h"

int ALife::increaseLife()
{
	lifes++;
	return lifes;
}

int ALife::increaseLife(int addlifes)
{
	lifes = lifes + addlifes;
	return lifes;
}

int ALife::decreaseLife()
{
	lifes--;
	return lifes;
}

int ALife::decreaseLife(int sublifes)
{
	lifes = lifes - sublifes;
	return sublifes;
}

void ALife::tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (lifes <= 0) {
		isalive = false;
	}
}

void ALife::BeginPlay()
{
	isalive = true;
	lifes = maxlifes;
}



