#include "firewidget.h"
#include <QtGui/qevent.h>

using namespace std;

// Constructeur
FireWidget::FireWidget(int _largeur, int _hauteur, float proba, float coef_brulure): QWidget()
{
	foret = new Foret(_largeur, _hauteur, proba, coef_brulure);
	buffer = new QImage();
	color = new QColor(Qt::black);
	bufferPainter= new QPainter();
	
	setMinimumSize(_largeur, _hauteur);
}

FireWidget::FireWidget(): QWidget()
{
}


// Destructeur
FireWidget::~FireWidget()
{
	delete(bufferPainter);
	delete(buffer);
	delete(color);
	delete(foret);
}


// #####################
//		Autres méthodes
// #####################
void FireWidget::initialise(int _largeur, int _hauteur, float proba, float coef_brulure)
{
	foret = new Foret(_largeur, _hauteur, proba, coef_brulure);
	buffer = new QImage();
	color = new QColor(Qt::black);
	bufferPainter= new QPainter();
	
	setMinimumSize(_largeur, _hauteur);
}

void FireWidget::setColor(int colorIndice)
{
	switch(colorIndice){
		case 0:
			this->color->setRgb(1,100,0,255);
			break;
		case 1:
			this->color->setRgb(34,139,34,255);
			break;
		case 2:
			this->color->setRgb(107,142,35,255);
			break;
		case 3:
			this->color->setRgb(0,205,0,255);
			break;
		case 4:
			this->color->setRgb(46,139,87,255);
			break;								
	}
}

// #################
//		Affichages
// #################
/**
 * imprime une cellule à une position donnée, utilise la couleur de la classe
 * @author Florian
 * @param ab arbre à dessiner
 */
void FireWidget::drawCell(int colonne, int ligne)
{
	bufferPainter->fillRect(colonne, ligne, tailleCell, tailleCell, *(color));
	#if DEBUG_TMATRICE
	cout <<"draw cell ; ";
	#endif
}

// utiliser drawCell?
/**
 * imprime un arbre selon sa position, utilise la couleur de la classe
 * @author Florian
 * @param ab arbre à dessiner
 */
void FireWidget::drawTree(const Arbre* ab)
{
	bufferPainter->fillRect(tailleCell* ab->getPos().col, tailleCell* ab->getPos().row, tailleCell, tailleCell, *(color));
	#if DEBUG_TMATRICE
	cout <<"draw tree ; ";
	#endif
}


/**
 * Dessine les arbres et cellules vides dans le buffer
 * @author Florian and Ugo
 */
void FireWidget::drawForest()
{	
	bufferPainter->begin(buffer);
	
	int current_hauteur= 0;
	for(int i=0; i<foret->hauteur(); ++i){
		// On ne passe pas la hauteur de la grille mais le nombre de colonne*taille de colonne pour
		// éviter la petite zone en bas de grille
		vector< Cellule* >* ligne= (*foret)[i];
		
		int current_largeur= 0;
		for( vector< Cellule* >::const_iterator j( ligne->begin() ); j!=ligne->end(); ++j){
			Cellule* cell= *j;
			
			if( cell->getEtat() == 0){
				color->setNamedColor("black");
				drawCell(current_largeur, current_hauteur);
			}
			else if(cell->getEtat() == 1){
				// Il faut ici vérifier l'essence de l'arbre pour lui attribuer une variante de vert
				Arbre* ab= dynamic_cast < Arbre* >(cell);
				
//				Pour changer la couleur de l'arbre en train d'etre enflammé 
// 				int brulure= ab->getEssence()->get;
				
				unsigned indice= ab->getEssence()->getIndice();
				setColor(indice);
				drawCell(current_largeur, current_hauteur);
			}
			else if (cell->getEtat() == 2){
				color->setNamedColor("red");
				drawCell(current_largeur, current_hauteur);
			}
			else if (cell->getEtat() == 3){
				color->setNamedColor("gray");
				drawCell(current_largeur, current_hauteur);
			}
			
			// Incrémentations des positions des cellules
			current_largeur += tailleCell;
		}
		#if DEBUG_TMATRICE
		cout << endl;
		#endif
		current_hauteur += tailleCell;
	}
	
	bufferPainter->end();
	
	#if DEBUG_TMATRICE
	cout <<"fin draw forest ; "<< endl;
	#endif
}

/**
 * Dessine la matrice dans le buffer, sur l'ancienne matrice
 * 	On réutilise les cellules non susceptibles d'avoir été modifiées
 * @author Florian and Ugo
 */
void FireWidget::drawFire()
{
	bufferPainter->begin(buffer);
	
	const list< Arbre * >* newOnFire= foret->getBurned();
	for( list< Arbre * >::const_iterator j( newOnFire->begin() ); j != newOnFire->end(); ++j){
		color->setNamedColor("red");
		drawTree(*j);
	}
	foret->clearBurned();
	
	const list< Arbre * >* newAsh= foret->getCarbonized();
	for( list< Arbre * >::const_iterator j( newAsh->begin() ); j != newAsh->end(); ++j){
		color->setNamedColor("gray");
		drawTree(*j);
	}
	foret->clearCarbonized();
	
	bufferPainter->end();
}

void FireWidget::redraw()
{
	if (!buffer->isNull()){
		delete(buffer);
		// 		bufferPainter->end();
	}
	buffer = new QImage(tailleCell*foret->largeur(), tailleCell*foret->hauteur(), QImage::Format_ARGB32);
	drawForest();
	drawFire();
	update();
}


/**
 * Eteint un arbre à une position donnée
 * @author Florian
 * @param ligne 
 * @param colonne ligne et colonne de l'arbre à eteindre
* @return vrai si il y avait un arbre en feu
 */
bool FireWidget::eteindreFeu(int colonne, int ligne)
{
	#if DEBUG_ALLUME
	cout << "eteindre cellule ? : (l,c)"<< ligne<< " : "<< colonne << endl; 
	#endif
	
	if(ligne>=0 && ligne < foret->hauteur()){
		vector< Cellule* >* line= (*foret)[ligne];
		
		if (colonne>=0 && colonne < foret->largeur()){
			Cellule* cell= (*line)[colonne];	
			
			if (cell->getEtat()==2){
				Arbre* ab= dynamic_cast< Arbre* >(cell);
				foret->water(ab);
				drawFire();
				update();
				
				return true;
			}
		}
	}
	// cas d'erreur par défaut
	return false;
}

/**
 * Allume un feu sur un arbre "vivant"
 * @author Florian
 * @param ligne
 * @param colonne ligne et colonne de l'arbre à enflammer
 * @return vrai si il y avait un arbre enflammable
 */
bool FireWidget::allumerFeu(int colonne, int ligne)
{
#if DEBUG_ALLUME
	cout << "allumer cellule ? : (l,c)"<< ligne<< " : "<< colonne << endl; 
#endif
	
	if(ligne>=0 && ligne < foret->hauteur()){
		vector< Cellule* >* line= (*foret)[ligne];
		
		if (colonne>=0 && colonne < foret->largeur()){
			Cellule* cell= (*line)[colonne];	
		
			if (cell->getEtat()==1){
				Arbre* ab= dynamic_cast< Arbre* >(cell);
				foret->allumer(ab);
				drawFire();
				update();
				
				return true;
			}
		}
	}
	// cas d'erreur par défaut
	return false;
}

/**
 * Opere une combustion complete sur un arbre en feu (IMPROVEIT faire sur les arbres non en feu ?)
 * @author Florian
 * @param ligne
 * @param colonne ligne et colonne de l'arbre à bruler totalement
 * @return vrai si il y avait un arbre en feu
 */
bool FireWidget::finirFeu(int colonne, int ligne)
{
	#if DEBUG_ALLUME
	cout << "embraser cellule ? : (l,c)"<< ligne<< " : "<< colonne << endl; 
	#endif
	
	if(ligne>=0 && ligne < foret->hauteur()){
		vector< Cellule* >* line= (*foret)[ligne];
		
		if (colonne>=0 && colonne < foret->largeur()){
			Cellule* cell= (*line)[colonne];	
			
			if (cell->getEtat()==2){
				Arbre* ab= dynamic_cast< Arbre* >(cell);
				foret->eteindre(ab);
				drawFire();
				update();
				
				return true;
			}
		}
	}
	// cas d'erreur par défaut
	return false;
}


// #############
// 	Events
// #############
void FireWidget::paintEvent(QPaintEvent* event)
{
	QPainter paint(this);
	paint.drawImage(0, 0, *buffer); // , 0, 0, width(), height());
}

void FireWidget::resizeEvent(QResizeEvent* event)
{
	float nbCol= foret->largeur();
	float nbRow= foret->hauteur();
	tailleCell = min (event->size().width() / nbCol , event->size().height() / nbRow);
	
	#if DEBUG_DIMENSION
	cout << "tH: "<< event->size().width()<< " tL "<< event->size().height()<< endl;
	cout << "taille Cellule : "<< tailleCell<< endl;
	#endif

	redraw();
}

void FireWidget::mousePressEvent(QMouseEvent* event)
{
	int colonne= event->x()/tailleCell;
	int ligne= event->y()/tailleCell;
	
	if (event->button()==Qt::LeftButton)
		allumerFeu(colonne, ligne);
	else if (event->button()==Qt::MiddleButton)
		finirFeu(colonne, ligne);
	else if (event->button()==Qt::RightButton){
		eteindreFeu(colonne, ligne);
		drawForest();
	}
}


void FireWidget::mouseMoveEvent(QMouseEvent* event)
{
	int colonne= event->x()/tailleCell;
	int ligne= event->y()/tailleCell;
	
	if (event->buttons().testFlag(Qt::LeftButton) )
		allumerFeu(colonne, ligne);
	else if (event->buttons().testFlag(Qt::MiddleButton) )
		finirFeu(colonne, ligne);
	else if (event->buttons().testFlag(Qt::RightButton) ){
		eteindreFeu(colonne, ligne);
		drawForest();
	}
}

// void FireWidget::newForet(int _largeur, int _hauteur, float _proba, float _coef_brulure)
// {
// 	delete(foret);
// 	foret = new Foret(_largeur,_hauteur, _proba, _coef_brulure);
// }

// ################
// 	Deroulement
// ################
/**
 * Passe de l'etat t à t+1 la foret
 * @author Florian
 * @return vrai si la foret a ete modifiée
 */
bool FireWidget::next()
{
	// pas suivant
	if (!foret->NextMove())
		return false;
	
	// mise à jour de l'image puis affichage à l'écran
	drawFire();
	update();
	
	return true; // cas par défaut, il y a eu un changement
}

void FireWidget::delForet()
{
	delete(foret);
}

/**
 * reinitialise la foret
 * @author Florian et un petit peu Ugo :p
 * @deprecated
 */
void FireWidget::reset(int _larg, int _haut, float proba, float coef)
{
// 	Foret* OldForet= foret;
// 	foret = new Foret(*OldForet, probaMatriceReset);
// 	delete(OldForet);
// IMPROVEIT quelle est la meilleure facon de RAZ une foret?
// 	buffer->fill(1);
	foret->clean();
	foret->setValues(_larg,_haut, coef);
	foret->randomMatrice(proba);
// 	foret->reset(_larg,_haut, proba, coef);
	setMinimumSize(_larg, _haut);
	drawForest();
	drawFire();
	update();
}

