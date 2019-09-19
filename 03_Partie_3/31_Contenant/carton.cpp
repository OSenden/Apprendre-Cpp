#include "carton.h"
#include <iostream>

using namespace std;

Carton::Carton(const int _largeur, const int _hauteur, const int _profondeur, const float _poidsMaxi):
    Contenant (_largeur,_hauteur,_profondeur),
    poidsMaxi(_poidsMaxi)
{
    cout << "Constructeur de la classe Carton" << endl;
    cout << "Largeur: " << largeur << " cm" << endl;
    cout << "Hauteur: " << hauteur << " cm" << endl;
    cout << "Profondeur: " << profondeur << " cm" << endl;
}

float Carton::ObtenirPoidsMaxi()
{
    return poidsMaxi;
}

Carton::~Carton()
{
    cout << "Destructeur de la classe Carton" << endl;
}
