#include<iostream>
#include<math.h>
#include<string>

#include"barre.h"
#include "barrehexagonale_creuse.h"


BarreHexagonale_Creuse::BarreHexagonale_Creuse(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametreInscritCreux, double _diametreInscritRempli):
    Barre(_ref, _longueur, _densite, _nomAlliage),
    diametreInscritCreux(_diametreInscritCreux),
    diametreInscritRempli(_diametreInscritRempli)
{

    cout << "Construction de la barre hexagonale creuse terminée" << endl;

}

double BarreHexagonale_Creuse::CalculerSectionRempli()
{
    double surfaceRempli = 2 * sqrt(3 * pow(diametreInscritRempli,2) /4);
    return surfaceRempli;
}

double BarreHexagonale_Creuse::CalculerSectionCreux()
{
    double surfaceCreux = 2 * sqrt(3 * pow(diametreInscritCreux,2) /4);
    return surfaceCreux;
}

double BarreHexagonale_Creuse::CalculerSection()
{
    double surfaceCreux = CalculerSectionCreux();
    double surfaceRempli = CalculerSectionRempli();

    double surface = surfaceRempli - surfaceCreux;
    return surface;
}

double BarreHexagonale_Creuse::CalculerMasse()
{
    double surface = CalculerSection();
    double masse = longueur * surface * densite;
    return masse;
}
