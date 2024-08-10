#pragma once
#include "Passager.h"

struct Wagon
{
	int numero;						//Numero du wagon
	int numPassagers;				//Le nombre de passagers dans le wagon
	Passager * tabPassagers;		//Tableau dynamique de passagers
	Wagon * nextWagon = NULL;		//Pointeur vers le prochain wagon, restera NULL	 si c'est le dernier
};



