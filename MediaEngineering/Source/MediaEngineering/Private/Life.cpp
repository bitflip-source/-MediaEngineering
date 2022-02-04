
#include "Life.h"
/*
Verwaltung der zur Verf�gung stehenden Leben.
*/

/*
Die Anzahl der Leben erh�hen. Default Wert ist 1 wenn kein Wert f�r addlifes angegeben wird.
*/
int ALife::increaseLife(int addlifes = 1)
{
	lifes = lifes + addlifes;
	return lifes;
}

/*
Die Anzahl der Leben verringern. Default Wert ist 1 wenn kein Wert f�r addlifes angegeben wird.
Es wird �berpr�ft ob die Leben verbraucht sind. Sind die Leben aufgebraucht wird isalive auf false gesetzt.
*/
int ALife::decreaseLife(int sublifes = 1)
{
	lifes = lifes - sublifes;
	if (lifes <= 0) isalive = false;
	return sublifes;
}

/*
F�r den Fall das aus Blueprint herraus die lifes direkt ge�ndert wird, wird st�ndig �berpr�ft ob noch Leben da sind.
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





