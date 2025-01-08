#ifndef _GRILLE_H_
#define _GRILLE_H_



#include "BlocNumerote.h"
#include "BlocNul.h"



// Classe permettant de mod�liser la grille du 2048.
// Cette grille poss�de le m�me nombre de lignes et de colonnes, et chaque case de cette derni�re est compos�e d'un bloc
class Grille {
// Attributs prot�g�s
protected :
	int m_taille; /* Nombre de lignes et de colonnes de la grille : si m_taille = 4, alors la grille est de taille 4x4 */
	Bloc*** m_matBloc; /* Matrice de pointeurs vers des objets de type "Bloc" : cette matrice correspond � la grille */
	int m_nbBloc; /* Nombre de blocs num�rot�s dans la grille � un instant t (nombre de cases non vides) */

// D�claration des m�thodes
public :
	Grille(int taille = 4); /* Constructeur par d�faut qui prend en param�tre la taille de la grille : la taille par d�faut est 4
							   La grille est initialement remplie de blocs nuls */
	int getTaille(); /* Renvoie la taille de la grille */
	int getNbBloc(); /* Renvoie le nombre de blocs num�rot�s actuellement pr�sents dans la grille */
	void modifierCase(Bloc bloc, int i, int j); /* Permet de modifier le contenu de la case situ�e � la ligne i
												   et la colonne j de la grille */
	void initialiser(); /* Permet d'initialiser la grille avec 2 blocs al�atoirement plac�s.
						   Ces blocs prennent la valeur 2 ou 4 */
	void afficher(); /* Permet d'afficher la grille */
	Bloc* obtenirCase(); /* Permet d'obtenir le pointeur de bloc situ� � la ligne i et la colonne j */
	void deplacerBlocs(string direction, int i, int j); /* Permet de d�placer les blocs de la grille en fonction d'une direction */

};



#endif _GRILLE_H_