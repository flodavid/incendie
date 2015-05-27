#include "windcircle.h"

#include "../debug.h"
// Valeur du nombre pi, utilisée pour les calcul de trigonométrie
#define PI 3.14159265

using namespace std;

/*** Constructeur et destructeur ***/
/**
 * Constructeur de classe
 * @param int Valeur de l'angle initial
 * @author Ugo
 */
WindCircle::WindCircle()
{
	buffer = new QImage();
	center = NULL;
	direction = new QPointF();

	setMinimumSize(100,100);
	setMaximumSize(180,180);
	
	this->heightForWidth(1);
}

WindCircle::~WindCircle(){
	delete(buffer);
	delete(center);
	delete(direction);
}


/*** Getters and Setters ***/
/**
 * Met à jour la valeur de l'angle
 * @param int Valeur de l'angle
 * @author Ugo
 */
void WindCircle::setAngle(int x){
	angle = x;
	drawDir();
	update();
}

/**
 * Permet de calculer le point d'arrivée du segment 
 * sur le cercle trigonométrique en fonction de l'angle passé 
 * en paramètre.
 * @param int Valeur de l'angle choisi
 * @author Ugo
 */
void WindCircle::setDirection(int angle){
	float rayon =(float)height()/2.0 - 25.0;
	direction->setX(cos(PI*(float)angle/180.0)*rayon+center->rx());
	direction->setY(sin(PI*(float)angle/180.0)*rayon+center->ry());
}

/*** Autres Méthodes ***/
/**
 * Méthode graphique permettant d'afficher le cercle de la boussole
 * @author Ugo
 */
void WindCircle::drawCircle(){
	QPainter paint(buffer);
	
	float rayon = height()/2.0 - 25.0;
	
	paint.drawEllipse(*center, rayon, rayon);
	
	// Dessin des 4 lignes cardinales
	paint.drawLine(*center, QPointF(center->rx(), center->ry()+rayon+6)); // Sud
	paint.drawLine(*center, QPointF(center->rx(), center->ry()-rayon-6)); // Nord
	paint.drawLine(*center, QPointF(center->rx()+rayon+6, center->ry())); // Est
	paint.drawLine(*center, QPointF(center->rx()-rayon-6, center->ry())); // Ouest
	
	// Dessin des caractères cardinaux (NSEO)
	paint.drawText(QPointF(center->rx()-4, center->ry()+rayon+20), QString("S"));
	paint.drawText(QPointF(center->rx()-4, center->ry()-rayon-10), QString("N"));
	paint.drawText(QPointF(center->rx()+rayon+10, center->ry()+4), QString("E"));
	paint.drawText(QPointF(center->rx()-rayon-20, center->ry()+4), QString("O"));
}

/**
 * Méthode graphique permettant d'afficher la ligne 
 * directionnelle de la boussole
 * @author Ugo
 */
void WindCircle::drawDir(){
	effaceBuffer();
	setDirection(angle);
	#if DEBUG_VENT
	cout << "angle de windcircle" << angle << endl;
	#endif
	QPainter paint(buffer);
	QPen pen(Qt::red); paint.setPen(pen);

	paint.drawLine(*center, *direction);
}

/**
 * Méthode générique pour vider le buffer 
 * @author Ugo
 */
void WindCircle::effaceBuffer(){
	buffer->fill(Qt::white);
	drawCircle();
}

/*** Events ***/
void WindCircle::paintEvent(QPaintEvent* event){
	QPainter paint(this);
	paint.drawImage(0, 0, *buffer);
}


void WindCircle::resizeEvent(QResizeEvent* event){
    if (!buffer->isNull()){
		delete(buffer);
	}
	if(!center)
		center = new QPointF();
	
	buffer = new QImage(event->size().width(), event->size().height(), QImage::Format_ARGB32);

	center->setX(event->size().width()/2);
	center->setY(event->size().height()/2);
	setDirection(angle);
  	drawCircle();
	drawDir();
}
/**
 * Nous avons redéfini cet Event dans le but de pouvoir faire varier la valeur de l'angle
 * dynamiquement à l'aide du clic sur le widget
 * Signale à windwidget que l'angle est modifié
 * @author Ugo
 */
void WindCircle::mousePressEvent(QMouseEvent* event)
{
	float param = event->x()-center->x();
	float rayon = height()/2.0;
	param = param/ rayon;
	float result = atan((event->y()-center->y())/(event->x()-center->x()))*180.0 / PI;

	if(param<=0){
		result += 180;
	}

	#if DEBUG_CLICK
	cout << "Taille de windcircle : " << width() << " ; " << height() << endl;
	cout << "Angle de windcircle : " << angle << endl;
	cout << "Coordonnée du centre : " << center->x() << " ; " << center->y() << endl;
	cout << "Coordonnée de l'event : " << event->x() << " ; " << event->y() << endl;
	cout << "Angle résultat ? : " << (int)result << endl;
	#endif
	setAngle((int)result);
	emit modifAngle();
}

