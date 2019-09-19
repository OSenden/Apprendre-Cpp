#include<iostream>

#include "barre.h"
#include "barrerectangle.h"

BarreRectangle::BarreRectangle(string _ref, int _longueur, float _densite, string _nomAlliage, int _largeur, int _hauteur):
    Barre(_ref, _longueur, _densite, _nomAlliage),
    largeur(_largeur),
    hauteur(_hauteur)

{

cout << "Construction de la barre rectangulaire terminée" << endl;

}

double BarreRectangle::CalculerSection()
{
    double surface = largeur * hauteur;
    return surface;
}
