#include<iostream>
#include<math.h>
#include<string>

#include"barre.h"
#include "barreoctogonal_creuse.h"


BarreOctogonal_Creuse::BarreOctogonal_Creuse(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametreInscritCreux, double _diametreInscritRempli):
    Barre(_ref, _longueur, _densite, _nomAlliage),
    diametreInscritCreux(_diametreInscritCreux),
    diametreInscritRempli(_diametreInscritRempli)
{

    cout << "Construction de la barre octogonale creuse terminée" << endl;

}

double BarreOctogonal_Creuse::CalculerSectionRempli()
{
    double surfaceRempli = 2 * pow(diametreInscritRempli,2) * ( sqrt(2)-1 );
    return surfaceRempli;
}

double BarreOctogonal_Creuse::CalculerSectionCreux()
{
    double surfaceCreux = 2 * pow(diametreInscritCreux,2) * ( sqrt(2)-1 );
    return surfaceCreux;
}

double BarreOctogonal_Creuse::CalculerSection()
{
    double surfaceCreux = CalculerSectionCreux();
    double surfaceRempli = CalculerSectionRempli();

    double surface = surfaceRempli - surfaceCreux;
    return surface;
}

double BarreOctogonal_Creuse::CalculerMasse()
{
    double surface = CalculerSection();
    double masse = longueur * surface * densite;
    return masse;
}

