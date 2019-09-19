#ifndef BARRCARREE_H
#define BARRCARREE_H


#include<string>
#include"barre.h"

using namespace std;

class BarreCarree : public Barre
{
public:
    BarreCarree(string _ref, int _longueur, float densite, string _nomAlliage, int _cote);
    double CalculerSection();

private:
    int cote;
    double surface;
};

#endif // BARRCARREE_H
