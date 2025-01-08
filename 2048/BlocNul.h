#ifndef _BLOCNUL_H_
#define _BLOCNUL_H_



#include "Bloc.h"



// Classe héritée de la classe de base bloc.
// Cette classe permet de modéliser les blocs vides de la grille qui correspondent aux cases vides
class BlocNul : public Bloc
{
// Méthodes publiques
public :
	BlocNul(); /* Constructeur par défaut : on attribue par défaut le type 1 aux blocs nuls et la couleur grise */
	void afficher(); /* Affiche le bloc nul à l'écran */

};



#endif // !_BLOCNUL_H_