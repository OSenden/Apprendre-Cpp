#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include<string>
#include"barre.h"

using namespace std;

class BarreRectangle : public Barre
{
public:
    BarreRectangle(string _ref, int _longueur, float densite, string _nomAlliage, int _largeur, int _hauteur);
    double CalculerSection();

private:
    int largeur;
    int hauteur;

    double surface;
};
#endif // BARRERECTANGLE_H
