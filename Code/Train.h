#pragma once
#include "wagon.h"
#include <string>
class Train
{
public:
	Train(std::string _name = "Algo-111");
	~Train();
	void buildTrain();
	void listAllWagons();

private:
	//NE PAS DÉCLARER D'AUTRES VARIABLES, TRAVAILLEZ UNIQUEMENT AVEC CELLES-CI DANS CET EXERCICE
	Wagon * firstWagon;
	std::string name;
};

