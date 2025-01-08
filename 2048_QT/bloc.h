#ifndef _BLOC_H_
#define _BLOC_H_



#include <iostream>
#include <string>

using namespace std;



// Classe abstraite de base permettant de modéliser les blocs de la grille
class Bloc
{
    // Attributs protégés
protected :
    string m_couleur; /* Couleur du bloc (dépend de sa valeur) */
    int m_type; /* Utilisé pour la hiérarchie de classe : permet d'identifier à partir de quelle classe dérivée l'objet à été instancié.
                   On attribut le type 0 aux objets instanciés à partir de cette classe */

    // Méthodes publiques
public :
    Bloc(); /* Constructeur par défaut */
    string get_couleur(); /* Renvoie la couleur du bloc */
    virtual void afficher() = 0; /* Affiche le bloc à l'écran. Méthode abstraite car les différentes classes dérivées n'auront pas
                                    la même implémentation de cette méthode */

};



#endif
