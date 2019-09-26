#include "equilibreuse.h"
#include<iostream>

using namespace std;

Equilibreuse::Equilibreuse()
{
    leMoteur = new Moteur(laCarte);
    leCodeur = new Codeur(laCarte);

    cout << "Equilibreuse constuctor's actions correctly done" << endl;
}

Equilibreuse::~Equilibreuse()
{
    delete leMoteur;
    delete leCodeur;

    cout << "Equilibreuse destructor's actions correctly done" << endl;
}
