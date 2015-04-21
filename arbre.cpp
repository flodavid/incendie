#include "arbre.h"

#include <cmath>
#include <iostream>

/*
 * On considère pour la gestion de l'embrasement d'un arbre
 * et pour sa combustion le système suivant :
 * Le taux d'humidité de l'arbre diminue au fil de sa combustion
 * Plus ce taux est faible, plus l'arbre perd de points de vie par tour
 * De plus, des paramètres extérieurs pourront ralentir cette perte ( pluie, humidité ambiante, canadarage, etc ^^)
 * 
 * On considère de plus qu'un arbre en feu ne génère pas de flamme tant que son humidité n'est pas inférieure à 50%
 * Par conséquent, un arbre emflammera son voisin uniquement à cette condition
 */

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
bool Arbre::brule(float coef)
{
	// On va déterminer le nombre de points de vie à enlever en fonction des paramètres :
	// - des caractères discrets de l'arbre
	// - extérieurs --> TODO
	int decrementation = 100.0*coef;
#if DEBUG_DECRE
// 	cout << coef<< ",decre init: "<< decrementation << "|";
	cout << "type  : " << essence->getType();
#endif
	decrementation *= 1.0/( (float)humidite );
	if(essence->getType() == 0){
		// On considère qu'un épineux brule plus vite qu'un feuillu
		decrementation *= 1.20;
		#if DEBUG_DECRE
// 		cout << "epin: "<< decrementation << "-"<< endl;
		#endif	
	}
#if DEBUG_DECRE
// 	cout << ",fin: "<< decrementation << "||";
#endif
	pv-= decrementation;
	humidite *= 0.9;
	// Si l'arbre n'a plus de points de vie, il passe à l'état cendre
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
	/*
	 * Nous avons décidé d'établir le rayon et la hauteur de l'arbre en fonction de son âge
	 * et de l'âge de maturité de son essence, en simulant des variations de croissance
	 * par l'utilisation de tranche d'âge où la croissance varie. Par défaut, nous utiliserons
	 * trois tranches :
	 * [0;1/4 age maturité[
	 * [1/4;3/4 age maturité[
	 * [3/4; age maturité [
	 * 
	 * Si un arbre est plus vieux que son âge de maturité, il possèdera les caractères
	 */
	// Initialisation des points de vie de l'arbre
	float rayon = essence->getDiametre() / 2.0;
	float	hauteur = essence->getHauteur();
	
	float masseV= essence->getMasse()/1000.0;
	unsigned points = (unsigned) ( 4.0/3.0* (M_PI* (rayon*rayon)*hauteur) * masseV );
	
	// Les données des essences sont décrites pour un arbre de 50 ans à 20% d'humidité
	pv = points * age/50.0;
	pv *= 1  + (humidite-12)/100.0;
	
	#if DEBUG_PV==1
	cout << " pv : "<< pv << endl;
	#endif
	// L'initialisation du coefficient sera faite plus tard puisqu'il dépend des paramètres extérieurs à l'arbre 
	// Humidité ambiante, force du vent etc
// 	coefficient = 0.5;
	
}