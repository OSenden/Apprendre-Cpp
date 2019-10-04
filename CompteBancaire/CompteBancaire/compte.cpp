#include "compte.h"

Compte::Compte():
    solde(0)
{

}

Compte::Compte(const float _montantInitial):
    solde(_montantInitial)
{

}

float Compte::ConsulterSolde()
{
    return solde;
}

void Compte::Retirer(const float _montant)
{
    if (solde >= _montant)
        solde -= _montant;
}

void Compte::Deposer(const float _montant)
{
    solde += _montant;
}
