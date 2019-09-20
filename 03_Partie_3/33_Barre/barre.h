#ifndef BARRE_H
#define BARRE_H
#include<string>


using namespace std;

class Barre
{
public:
    Barre(string _ref, int _longueur,float _densite, string _nomAlliage);
    void AfficherCaracteristiques();

protected:

    string ref;
    int longueur;
    float densite;
    string nomAlliage;
};

#endif // BARRE_H
