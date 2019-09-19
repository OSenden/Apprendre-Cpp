#include "caissedebouteilles.h"
#include <iostream>

using namespace std;

CaisseDeBouteilles::CaisseDeBouteilles(const int _largeur, const int _hauteur, const int _profondeur, int _nbBouteilles, int _contenance):
    Contenant (_largeur,_hauteur,_profondeur),
    nbBouteilles(_nbBouteilles),
    contenance(_contenance)
{
    cout << "Constructeur de la classe CaisseDeBouteilles" << endl;
    cout << "Largeur: " << largeur << " cm" << endl;
    cout << "Hauteur: " << hauteur << " cm" << endl;
    cout << "Profondeur: " << profondeur << " cm" << endl;
    cout << "Nb de bouteilles: " << nbBouteilles << " bouteilles" << endl;
    cout << "Contenance: " << contenance << " cL" << endl;
}

int CaisseDeBouteilles::CalculerVolume()
{
    return nbBouteilles * contenance;
}

CaisseDeBouteilles::~CaisseDeBouteilles()
{
    cout << "Desstructeur de la classe CaisseDeBouteilles" << endl;
}
