#ifndef MOTEUR_H
#define MOTEUR_H

class Microdacqlite;

class Moteur{
    private:
        int consigneVitesse;
        Microdacqlite & laCarte; //Pour la relation d’agrégation
    public:
        Moteur(const Microdacqlite & _laCarte);
        void Demarrer();
        void Arreter();
        void FixerConsigne(int _laConsigne);
};

#endif // MOTEUR_H
