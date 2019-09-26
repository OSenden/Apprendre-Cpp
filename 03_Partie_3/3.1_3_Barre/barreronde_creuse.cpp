#include<iostream>
#include<math.h>
#include<string>

#include"barre.h"
#include "barreronde_creuse.h"


BarreRonde_Creuse::BarreRonde_Creuse(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametreCreux, double _diametreRempli):
    Barre(_ref, _longueur, _densite, _nomAlliage),
    diametreCreux(_diametreCreux),
    diametreRempli(_diametreRempli)
{

    cout << "Construction de la barre ronde creuse terminée" << endl;

}

double BarreRonde_Creuse::CalculerSectionRempli()
{
    double surfaceRempli = M_PI * pow(diametreCreux,2) /4;
    return surfaceRempli;
}

double BarreRonde_Creuse::CalculerSectionCreux()
{
    double surfaceCreux = M_PI * pow(diametreRempli,2) /4;
    return surfaceCreux;
}

double BarreRonde_Creuse::CalculerSection()
{
    double surfaceCreux = CalculerSectionCreux();
    double surfaceRempli = CalculerSectionRempli();

    double surface = surfaceRempli - surfaceCreux;
    return surface;
}

double BarreRonde_Creuse::CalculerMasse()
{
    double surface = CalculerSection();
    double masse = longueur * surface * densite;
    return masse;
}
