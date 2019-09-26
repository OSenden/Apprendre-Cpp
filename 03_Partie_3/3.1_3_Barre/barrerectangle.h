#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include<string>
#include"barre.h"

using namespace std;

class BarreRectangle : public Barre
{
public:
    BarreRectangle(string _ref, int _longueur, float _densite, string _nomAlliage, int _largeur, int _hauteur);
    double CalculerSection();
    double CalculerMasse();

protected:
    int largeur;
    int hauteur;

    double surface;
    double masse;
};
#endif // BARRERECTANGLE_H
