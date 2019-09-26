#ifndef BARREHEXAGONALE_H
#define BARREHEXAGONALE_H

#include<string>
#include"barre.h"

class BarreHexagonale:Barre
{
public:
    BarreHexagonale(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametreInscrit);
    double CalculerSection();
    double CalculerMasse();

protected:
    double diametreInscrit;

    double surface;
    double masse;
};

#endif // BARREHEXAGONALE_H
