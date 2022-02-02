// Fill out your copyright notice in the Description page of Project Settings.


#include "Time.h"

// Sets default values
ATime::ATime()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATime::BeginPlay()
{
	Super::BeginPlay();

	UpdateLevelTime();

	GetWorldTimerManager().SetTimer(LevelTimeHandle, this, &ATime::LevelTimer, 1.0f, true);

}

// Called every frame
void ATime::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATime::UpdateLevelTime()
{

}

void ATime::LevelTimer()
{
	--levelTime;
	if (levelTime < 1)
	{
		GetWorldTimerManager().ClearTimer(LevelTimeHandle);

		//LevelTimeExpired();
	}


}

//void ATime::LevelTimeExpired()
//{
//}

//void ATime::LevelTimeExpired_Implementation()
//{
//}

void ATime::setLevelTime(int levelTimeSet)
{
	levelTime = levelTimeSet;
}

