#ifndef FORET_H
#define FORET_H
#define MAXI 1000 

#include <vector>
#include <list>
#include <iostream>

#include "coordonnee.h"
#include "cellule.h"
#include "arbre.h"

class Foret
{
private:
	int lignes;
	int colonnes;
	std::vector<std::vector< Cellule* > > matrice;
	std::list<Coordonnee>	onFire;
	
public:
	Foret(int n_lignes, int n_colonnes);
	
	void initialisation(float probabilite);
	
	// 	Acces aux elements
	int largeur(){ return colonnes;};
	int hauteur(){ return lignes;};
	std::vector< Cellule* > operator[](int ligne) { return matrice[ligne]; };
	
// 	Modification des éléments
	void enflammer(int row, int col);
	void enflammer(Coordonnee c);
	void enflammer(Cellule* cell, int x, int y); // pour ne pas faire 2 fois l'acces à la cellule ?
	
	void eteindre(int x, int y);
	
	
	std::list< Coordonnee > adjacents(const Coordonnee& coord) const;
	
// 	Avancee du temps
	// voir transition avec d'autres parametres
	void transition(Cellule& cell);
	bool NextMove();

};

#endif // FORET_H
