#include<iostream>

#include "barre.h"
#include "barrecarree.h"

BarreCarree::BarreCarree(string _ref, int _longueur, float _densite, string _nomAlliage, int _cote):
    Barre(_ref, _longueur, _densite, _nomAlliage),
    cote(_cote)

{

cout << "Construction de la barre rectangulaire terminée" << endl;

}

double BarreCarree::CalculerSection()
{

    double surface = cote*cote;
    return surface;
}
