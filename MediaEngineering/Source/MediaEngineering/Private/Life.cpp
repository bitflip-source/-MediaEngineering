
#include "Life.h"
/*
Verwaltung der zur Verfügung stehenden Leben.
*/

/*
Die Anzahl der Leben erhöhen. Default Wert ist 1 wenn kein Wert für addlifes angegeben wird.
*/
int ALife::increaseLife(int addlifes = 1)
{
	lifes = lifes + addlifes;
	return lifes;
}

/*
Die Anzahl der Leben verringern. Default Wert ist 1 wenn kein Wert für addlifes angegeben wird.
Es wird überprüft ob die Leben verbraucht sind. Sind die Leben aufgebraucht wird isalive auf false gesetzt.
*/
int ALife::decreaseLife(int sublifes = 1)
{
	lifes = lifes - sublifes;
	if (lifes <= 0) isalive = false;
	return sublifes;
}

/*
Für den Fall das aus Blueprint herraus die lifes direkt geändert wird, wird ständig überprüft ob noch Leben da sind.
*/
void ALife::tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (lifes <= 0) {
		isalive = false;
	}
	//destroy character
}

/*
Die Leben werden auf den Maximalwert gesetzt. 
*/
int ALife::fullLifes()
{
	lifes = maxlifes;
	return lifes;

}





