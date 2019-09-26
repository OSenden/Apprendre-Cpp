#include<iostream>
#include<math.h>

#include "barreoctogonale.h"
#include "barre.h"

BarreOctogonale::BarreOctogonale(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametreInscrit):
    Barre(_ref, _longueur, _densite, _nomAlliage),
    diametreInscrit(_diametreInscrit)

{

cout << "Construction de la barre octogonale terminée" << endl;

}

double BarreOctogonale::CalculerSection()
{
    double surface = 2 * pow(diametreInscrit,2) * ( sqrt(2)-1 );
    return surface;
}

double BarreOctogonale::CalculerMasse()
{
    double surface = CalculerSection();
    double masse = longueur * surface * densite;
    return masse;
}
