#ifndef BARRERONDE_H
#define BARRERONDE_H
#include<string>

#include"barre.h"

using namespace std;

class BarreRonde : public Barre
{
public:
    BarreRonde(string _ref, int _longueur, float densite, string _nomAlliage, double _diametre);
    double CalculerSection();

private:
    double diametre;

};

#endif // BARRERONDE_H
