#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "compte.h"

class CompteEpargne:public Compte
{
private:
    float tauxInterets;
    float montantInitial;

public:
    CompteEpargne(const float _TauxInterets, const float _montantInitial = 0);
    void CalculerInterets();
};

#endif // COMPTEEPARGNE_H
