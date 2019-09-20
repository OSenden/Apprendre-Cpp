#ifndef BARREOCTOGONALE_H
#define BARREOCTOGONALE_H


#include<string>
#include"barre.h"

class BarreOctogonale:Barre
{
public:
    BarreOctogonale(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametreInscrit);
    double CalculerSection();
    double CalculerMasse();

protected:
    double diametreInscrit;

    double surface;
    double masse;
};


#endif // BARREOCTOGONALE_H
