#ifndef _BLOCNUL_H_
#define _BLOCNUL_H_



#include "Bloc.h"



// Classe h�rit�e de la classe de base bloc.
// Cette classe permet de mod�liser les blocs vides de la grille qui correspondent aux cases vides
class BlocNul : public Bloc
{
// M�thodes publiques
public :
	BlocNul(); /* Constructeur par d�faut : on attribue par d�faut le type 1 aux blocs nuls et la couleur grise */
	void afficher(); /* Affiche le bloc nul � l'�cran */

};



#endif // !_BLOCNUL_H_