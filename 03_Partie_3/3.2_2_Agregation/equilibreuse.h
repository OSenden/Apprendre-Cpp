#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H
#include "moteur.h"
#include "microdacqlite.h"


class Equilibreuse{
    private:
        const Microdacqlite laCarte;
        Moteur *leMoteur;
    public:
        Equilibreuse();
};

#endif // EQUILIBREUSE_H
