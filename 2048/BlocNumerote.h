#ifndef _BLOCNUMEROTE_H_
#define _BLOCNUMEROTE_H_



#include "Bloc.h"



// Classe h�rit�e de la classe de base bloc.
// Cette classe permet de mod�liser les blocs num�rot�es auxquels on attribue une valeur et une couleur (d�pendant de la valeur)
class BlocNumerote : public Bloc
{
// Attributs prot�g�s
protected :
	int m_valeur; /* Valeur attribu�e au bloc */

// M�thodes publiques
public :
	BlocNumerote(int valeur); /* Contructeur par d�faut : on attribue le type 2 aux blocs num�rot�s. Le contructeur prend en param�tre une 
								 valeur, et on d�finira la couleur du bloc en fonction de cette derni�re */
	void afficher(); /* Affiche le bloc num�rot� � l'�cran */
	int getValeur(); /* Retourne la valeur du bloc */

};





#endif // !_BLOCNUMEROTE_H_