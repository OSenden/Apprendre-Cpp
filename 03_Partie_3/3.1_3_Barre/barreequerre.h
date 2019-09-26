#ifndef BARREEQUERRE_H
#define BARREEQUERRE_H


#include<string>
#include"barre.h"

using namespace std;

class BarreEquerre : public Barre
{
public:
    BarreEquerre(string _ref, int _longueur, float _densite, string _nomAlliage, int _largeurRempli, int _hauteurRempli, int _largeurCreux, int _hauteurCreux);
    double CalculerSectionCreux();
    double CalculerSectionRempli();
    double CalculerSection();
    double CalculerMasse();

protected:
    int largeurRempli;
    int hauteurRempli;
    int largeurCreux;
    int hauteurCreux;


    double surfaceCreux;
    double surfaceRempli;
    double surface;
    double masse;
};

#endif // BARREEQUERRE_H
