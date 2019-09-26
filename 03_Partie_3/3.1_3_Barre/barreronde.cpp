#include<iostream>
#include<math.h>
#include "barre.h"
#include "barreronde.h"


BarreRonde::BarreRonde(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametre):
    Barre(_ref, _longueur, _densite, _nomAlliage),
  diametre(_diametre)


{
cout << "Construction de la barre ronde terminée" << endl;

}

double BarreRonde::CalculerSection()
{
    double surface = M_PI * pow(diametre,2) /4;
    return surface;
}

double BarreRonde::CalculerMasse()
{
    double surface = CalculerSection();
    double masse = longueur * surface * densite;
    return masse;
}
