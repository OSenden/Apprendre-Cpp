#include "moteur.h"
#include "microdacqlite.h"


Moteur::Moteur(const MicroDacqLite & _laCarte) :
    laCarte(_laCarte) //initialisation de la relation d'agregation
{
    consigneVitesse = 0;
}
