#include "arbre.h"

#include <cmath>
#include <iostream>

using namespace std;

Arbre::Arbre(int col, int row, const Essence* _essence, unsigned _age, unsigned _humidite)
	: Cellule(1), pos(col, row),essence(_essence),age(_age),humidite(_humidite)
{	
	initialise();
}

Arbre::Arbre(Cellule* cell, int col, int row, const Essence* _essence, unsigned _age, unsigned _humidite)
: Cellule (*cell), pos(col, row),age(age),humidite(humidite)
{
	initialise();
// 	delete(cell);
}


Arbre::~Arbre()
{
}

/**
 * Retire un nombre de points de vie à l'arbre
 * @author Florian
 * TODO Prendre en compte paramètres pour le nombre de points à enlever * 
 */
bool Arbre::brule()
{
	pv-= 45;
	if (pv<=0){
		blast();
		return false;
	}
	else return true;
}

/**
 * Initialise les points de vie de l'arbre en fonction des caractères de son essence
 * et de ses propriétés discrètes
 * @author Ugo Florian
 */
void Arbre::initialise()
{
	// Initialisation des points de vie de l'arbre
	float rayon = essence->getDiametre() / 2.0;
	float	hauteur = essence->getHauteur();
	
	float masseV= essence->getMasse()/1000.0;
	unsigned points = (unsigned) ( 4.0/3.0* (M_PI* (rayon*rayon)*hauteur) * masseV );
	
	// Les données des essences sont décrites pour un arbre de 50 ans à 12% d'humidité
	pv = points * age/50.0;
	pv *= 1+ humidite/100.0;
// 	cout << " pv : "<< pv << endl;
	
	// L'initialisation du coefficient sera faite plus tard puisqu'il dépend des paramètres extérieurs à l'arbre 
	// Humidité ambiante, force du vent etc
// 	coefficient = 0.5;
	
}