#ifndef BARRERONDE_CREUSE_H
#define BARRERONDE_CREUSE_H


#include<string>
#include"barre.h"

using namespace std;

class BarreRonde_Creuse : public Barre
{
public:
    BarreRonde_Creuse(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametreCreux, double _diametreRempli);
    double CalculerSectionCreux();
    double CalculerSectionRempli();
    double CalculerSection();
    double CalculerMasse();

protected:
    int diametreRempli;
    int diametreCreux;

    double surfaceCreux;
    double surfaceRempli;
    double surface;
    double masse;
};

#endif // BARRERONDE_CREUSE_H
