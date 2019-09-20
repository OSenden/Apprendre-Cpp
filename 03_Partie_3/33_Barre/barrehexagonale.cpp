#include<iostream>
#include<math.h>

#include "barrehexagonale.h"
#include "barre.h"

BarreHexagonale::BarreHexagonale(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametreInscrit):
    Barre(_ref, _longueur, _densite, _nomAlliage),
    diametreInscrit(_diametreInscrit)

{

cout << "Construction de la barre hexagonale terminée" << endl;

}

double BarreHexagonale::CalculerSection()
{
    double surface = 2 * sqrt(3 * pow(diametreInscrit,2) /4);
    return surface;
}

double BarreHexagonale::CalculerMasse()
{
    double surface = CalculerSection();
    double masse = longueur * surface * densite;
    return masse;
}
