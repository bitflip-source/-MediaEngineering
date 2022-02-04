
#include "Time.h"
/**
* Timer für die im Level zur Verfügung stehende Zeit. 
* Möglichkeit die Zeit Levelabhängig einzustellen.
* 
* 
*/


/*

*/
ATime::ATime()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; 
}

/*
Erzeugen des Timers bei Start eines Levels
*/
void ATime::BeginPlay()
{
	Super::BeginPlay();

	//UpdateLevelTime();

	GetWorldTimerManager().SetTimer(LevelTimeHandle, this, &ATime::LevelTimer, 1.0f, true);

}

// Called every frame
void ATime::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/*
Sollte die Anzeige aktualisieren
*/
//void ATime::UpdateLevelTime()
//{
//}

void ATime::LevelTimer()
{
	--levelTime;
	if (levelTime < 1)
	{
		timeexpired = false;
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

/*
Setzen der zur Verfügung stehenden Zeit.
*/
void ATime::setLevelTime(int levelTimeSet)
{
	levelTime = levelTimeSet;
}

