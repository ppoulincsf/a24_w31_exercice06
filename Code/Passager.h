#pragma once
#include <string>
class Passager
{
public:
	Passager();
	~Passager();
	void setPrenom(const std::string& prenom);
	const std::string& getPrenom() const;
	void setNom(const std::string& nom);
	const std::string& getNom() const;
	
private:
	std::string prenom;
	std::string nom;	

};

