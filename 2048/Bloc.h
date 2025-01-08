#ifndef _BLOC_H_
#define _BLOC_H_



#include <iostream>
#include <string>

using namespace std;



// Classe abstraite de base permettant de mod�liser les blocs de la grille
class Bloc
{
// Attributs prot�g�s
protected :
	string m_couleur; /* Couleur du bloc (d�pend de sa valeur) */
	int m_type; /* Utilis� pour la hi�rarchie de classe : permet d'identifier � partir de quelle classe d�riv�e l'objet � �t� instanci�.
				   On attribut le type 0 aux objets instanci�s � partir de cette classe */

// M�thodes publiques
public :
	Bloc(); /* Constructeur par d�faut */
	string get_couleur(); /* Renvoie la couleur du bloc */
	virtual void afficher() = 0; /* Affiche le bloc � l'�cran. M�thode abstraite car les diff�rentes classes d�riv�es n'auront pas 
									la m�me impl�mentation de cette m�thode */

};



#endif