#include<iostream>
#include<math.h>

#include "barre.h"
#include "barrecarree.h"

BarreCarree::BarreCarree(string _ref, int _longueur, float _densite, string _nomAlliage, int _cote):
    Barre(_ref, _longueur, _densite, _nomAlliage),
    cote(_cote)

{

cout << "Construction de la barre carrée terminée" << endl;

}

double BarreCarree::CalculerSection()
{

    double surface = pow(cote,2);
    return surface;
}

double BarreCarree::CalculerMasse()
{
    double surface = CalculerSection();
    double masse = longueur * surface * densite;
    return masse;
}
