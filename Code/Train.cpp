#include "stdafx.h"
#include "Train.h"
#include <time.h>
#include <iostream>
#include "constantes.h"

Train::Train(std::string _name) // : Utiliser une liste d'initialisation !!
{
	
}

Train::~Train()
{
	//TODO : Voir le diagramme de classes
}

void Train::buildTrain()
{
	//TODO : Contruire le train ici, vous devrez entre autres :
	// 1. Visualiser le probl�me d'abord afin de produire un algorithme concis et efficace
	// 2. Allouer dynamiquement chaque wagon
	// 3. Stocker les informations dans les wagons (rappel, le tableau des passagers est un tableau dynamique)
	// 4. "Chainer" les wagons en utilisant le pointeur nextWagon
	// 5. Tenir compte de ces 2 consignes :
	// Un train contient un nombre al�atoire de wagons (de 0 � MAX_WAGONS_PER_TRAIN) (voir constantes.h)
	// Un wagon contient un nombre al�atoire de personnes (de 0 � MAX_PEOPLE_PER_WAGON) (voir constantes.h)
	// Un wagon peut �tre vide, il poss�de tout de m�me son num�ro et son prochain wagon

	srand(unsigned int(time(0)));

	//Rappel pour vous aider avec le random:
	//int numWagonsInTrain = rand() % MAX_WAGONS_PER_TRAIN;

	//Genre de variable utile pour la construction du train
	//car firstWagon doit pointer sur le premier wagon et ne bougera pas
	Wagon* currentWagon = nullptr;
}

void Train::listAllWagons()
{
	//TODO : Afficher le contenu de chaque wagon en partant du premier wagon et en parcourant la cha�ne de wagons � l'aide du nextWagon
}