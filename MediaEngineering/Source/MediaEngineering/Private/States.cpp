
#include "States.h"

/**
* Actor zum Verwalten des Levelfortschritts und mögliches Einstellen der Startparameter für den startenden Level.
* 
*/

// Anfangsparameter setzen
AStates::AStates()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	currentState = 0;
	nextState = 1;
	
}
/*
Setzen des nächsten Level
*/
void AStates::setNextState()
{

	currentState = nextState;

	switch (nextState) {
	case 0:					//Startmenü -> Level 1
		nextState = 1;
		
		break;
	case 1:					//Level 1 -> Level 2
		nextState = 2;
		break;
	case 2:					//Level 2 -> Level 3
		nextState = 3;
		break;
	case 3:					//Endmenü -> Startmenü
		nextState = 0;
		break;
	}
}

/*
Den aktuellen Level erfragen.
*/
int AStates::getcurrentState()
{
	return currentState;
}

/*
Einstellen von Parametern bei Respawn (nicht implementiert)
*/
void AStates::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AStates::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}