#ifndef BARRERONDE_H
#define BARRERONDE_H
#include<string>

#include"barre.h"

using namespace std;

class BarreRonde : public Barre
{
public:
    BarreRonde(string _ref, int _longueur, float _densite, string _nomAlliage, double _diametre);
    double CalculerSection();
    double CalculerMasse();

protected:
    double diametre;

    double surface;
    double masse;

};

#endif // BARRERONDE_H
