#include<iostream>

#include "barre.h"


Barre::Barre(string _ref, int _longueur, float _densite, string _nomAlliage):
    ref(_ref),
    longueur(_longueur),
    densite(_densite),
    nomAlliage(_nomAlliage)
{

cout << "Construction de la barre terminée" << endl;

}

void Barre::AfficherCaracteristiques()
{
    cout << "Référence : " << ref << endl;
    cout << "Longueur : " << longueur << endl;
    cout << "Densité : " << densite << endl;
    cout << "Nom de l'alliage : " << nomAlliage << endl;
}
