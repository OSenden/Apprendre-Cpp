#include "compteepargne.h"


CompteEpargne::CompteEpargne(const float _tauxInterets, const float _montantInitial):
    Compte (_montantInitial),
    tauxInterets(_tauxInterets)
{

}

void CompteEpargne::CalculerInterets()
{
    solde = solde + solde*tauxInterets/static_cast<float>(100);
}
