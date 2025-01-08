#include "bloc.h"



Bloc::Bloc() {
    m_type = 0;
    m_couleur = "";
}

string Bloc::get_couleur() {
    return m_couleur;
}
