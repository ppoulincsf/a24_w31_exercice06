#include "stdafx.h"
#include "Passager.h"


Passager::Passager() : nom(""), prenom("")
{
	
}


Passager::~Passager()
{
}

void Passager::setPrenom(const std::string& _prenom)
{
	prenom = _prenom;
}

const std::string& Passager::getPrenom() const
{
	return prenom;
}

void Passager::setNom(const std::string& _nom)
{
	nom = _nom;
}

const std::string& Passager::getNom() const
{	
	return nom;
}
