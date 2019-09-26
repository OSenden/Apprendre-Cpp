#ifndef CODEUR_H
#define CODEUR_H

#include "microdacqlite.h"

class Codeur
{
private:
    const MicroDacqLite laCarte;

public:
    Codeur(const MicroDacqLite &_laCarte);
    int ObtenirVitesse();
};

#endif // CODEUR_H
