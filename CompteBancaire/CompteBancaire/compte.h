#ifndef COMPTE_H
#define COMPTE_H


class Compte
{
protected:
    float solde;

public:
    Compte();
    Compte(const float _montantInitial);
    float ConsulterSolde();
    void Retirer(const float _montant);
    void Deposer(const float _montant);
};

#endif // COMPTE_H
