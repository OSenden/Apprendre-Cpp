#ifndef BARREOCTOGONAL_CREUSE_H
#define BARREOCTOGONAL_CREUSE_H


#include<string>
#include"barre.h"

using namespace std;

class BarreOctogonal_Creuse : public Barre
{
public:
    BarreOctogonal_Creuse(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametreInscritCreux, double _diametreInscritRempli);
    double CalculerSectionCreux();
    double CalculerSectionRempli();
    double CalculerSection();
    double CalculerMasse();

protected:
    int diametreInscritRempli;
    int diametreInscritCreux;

    double surfaceInscritCreux;
    double surfaceInscritRempli;
    double surface;
    double masse;
};

#endif // BARREOCTOGONAL_CREUSE_H
