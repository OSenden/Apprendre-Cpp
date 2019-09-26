#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H

#include "moteur.h"
#include "microdacqlite.h"
#include "codeur.h"

class Codeur;
class Equilibreuse;

class Equilibreuse
{
private:
    const MicroDacqLite laCarte;
    Moteur *leMoteur;
    Codeur *leCodeur;

public:
    Equilibreuse();
    ~Equilibreuse();
};

#endif // EQUILIBREUSE_H
