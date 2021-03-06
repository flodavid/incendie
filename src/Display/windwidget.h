#ifndef WINDWIDGET_H
#define WINDWIDGET_H

#include <QtCore/QTimer>
#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QCheckBox>

#include <iostream>

#include "../debug.h"
#include "windcircle.h"

/**
 * Classe représentant le widget complet pour gérer orientation et
 * vitesse du vent de manière dynamique
 * @author Ugo
 *
 */
class WindWidget : public QWidget
{
    Q_OBJECT
private:
    WindCircle* wind_dir;
    QLabel* angle_lbl;
    QLabel* speed_lbl;
    QTimer* timer;
    QCheckBox* varAngleBox;
    QSlider* slider_vitesse;

    int speed;

public:
    /* Constructeur et destructeur */
    /**
     * Initialise les attributs graphiques de la classe
     * @author Ugo
     */
    WindWidget();
    virtual ~WindWidget();

    /* Méthodes d'initialisation */
    /**
     * Initialise les composants graĥiques statiques
     * 	et organise la hiérarchie des différents composants
     * @author Ugo
     */
    void initComponents();
    void initValues(int angle, int vitesse);

    /* Getters */
    int getAngle() const { return wind_dir->getAngle(); }
    int getSpeed() const { return speed; }

    /* Setters */
protected:
    void resizeEvent(QResizeEvent* Qevent);

public slots:
    /**
     * Signale à firescreen que le vent a été modifié
     * @author Ugo
     */
    void majAngle();
    /**
     * Met à jour la valeur de la vitesse choisie et l'affiche
     *  signale à firescreen que le vent a été modifié
     * @author Ugo
     * @param vitesse nouvelle vitesse
     */
    void majSpeed(int vitesse);
    /**
     * Slot exécuté à chaque timeout du timer pour
     * faire varier la valeur de l'angle de facon aléatoire
     * @author Ugo
     */
    void changeWindDir();

signals:
    /** TODO Ugo comment
     *
     * @author Ugo et Florian
     * @param angle
     * @param vitesse
     */
    void wind_changed(int angle, int vitesse);
};

#endif // WINDWIDGET_H
