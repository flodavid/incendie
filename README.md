# incendie
Automate de simulation d'incendie

Semaine 1

Mardi : réfléxion commune 

Mercredi : Flo : génération et affichage matrice ; Ugo : Cahiers des charges et réflexion

Jeudi : Flo : déclenchement d'un incendie et propagation simple ; Ugo : réflexion sur SDD et != arbres

Vendredi : Flo : Passage des fonctions via pointeurs et nettoyage du code ; Ugo : reflexion sur la modélisation des !=arbres

Semaine 2

Lundi : Flo : - les cellules/arbres sont stockés par pointeurs dans le vecteur de vecteurs
              - la cellule ne contient qu'un état, si c'est un arbre (dynamic_cast) il a des attributs spécifiques
              - faire une sous-classe de arbre : arbre en cendres ? ou alors sous-classe de cellule ou seulement arbre dans état brulé (3) : plus simple
              - Nettoyage du code et commentaire.
              
        Ugo : Implémentation de la notion d'essence.
        
 Mardi : Intégration de la notion d'essence dans une forêt (Gestion moteur et graphique). Gestion couleurs != abres
         Cellule adjacentes en diagonale
 
 Mercredi : Calcul et prise en compte des points de vie en fonction des paramètres de l'essence et des caractères discrets de l'arbre.
 
 Jeudi : Sélection aléatoire essence avec notion de bosquet. Nettoyage du code, debugage, tests mémoires ( concluant).
 
 Vendredi :
