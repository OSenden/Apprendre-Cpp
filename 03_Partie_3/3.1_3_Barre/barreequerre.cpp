#include<iostream>
#include<math.h>
#include<string>

#include "barre.h"
#include "barreequerre.h"


BarreEquerre::BarreEquerre(string _ref, int _longueur, float _densite, string _nomAlliage, int _largeurRempli, int _hauteurRempli, int _largeurCreux, int _hauteurCreux):
    Barre(_ref, _longueur, _densite, _nomAlliage),
    largeurCreux(_largeurCreux),
    largeurRempli(_largeurRempli),
    hauteurRempli(_hauteurRempli),
    hauteurCreux(_hauteurCreux)
{

    cout << "Construction de la barre équerre terminée" << endl;

}

double BarreEquerre::CalculerSectionRempli()
{
    double surfaceRempli = largeurRempli * hauteurRempli;
    return surfaceRempli;
}

double BarreEquerre::CalculerSectionCreux()
{
    double surfaceCreux = largeurCreux * hauteurCreux;
    return surfaceCreux;
}

double BarreEquerre::CalculerSection()
{
    double surfaceCreux = CalculerSectionCreux();
    double surfaceRempli = CalculerSectionRempli();

    double surface = surfaceRempli - surfaceCreux;
    return surface;
}

double BarreEquerre::CalculerMasse()
{
    double surface = CalculerSection();
    double masse = longueur * surface * densite;
    return masse;
}
