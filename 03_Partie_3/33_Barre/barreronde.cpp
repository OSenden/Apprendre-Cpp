#include<iostream>
#include<math.h>
#include "barre.h"
#include "barreronde.h"


BarreRonde::BarreRonde(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametre):
    Barre(_ref, _longueur, _densite, _nomAlliage),
  diametre(_diametre)


{
cout << "Construction de la barre terminée" << endl;

}

double BarreRonde::CalculerSection()
{
    double surface = M_PI * (diametre * diametre) /4;
    return surface;
}
