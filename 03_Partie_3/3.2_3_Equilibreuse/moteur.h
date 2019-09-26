#ifndef MOTEUR_H
#define MOTEUR_H

class MicroDacqLite;

class Moteur
{
private:
    int consigneVitesse;
    const MicroDacqLite & laCarte; // Pour la relation d'agrégation

public:
    Moteur(const MicroDacqLite & _laCarte);
    void Demarrer();
    void Arreter();
    void FixerConsigne(int _laConsigne);
};
#endif // MOTEUR_H
