#ifndef BARRCARREE_H
#define BARRCARREE_H


#include<string>
#include"barre.h"

using namespace std;

class BarreCarree : public Barre
{
public:
    BarreCarree(string _ref, int _longueur, float _densite, string _nomAlliage, int _cote);
    double CalculerSection();
    double CalculerMasse();

protected:
    int cote;

    double surface;
    double masse;
};

#endif // BARRCARREE_H
