#include <iostream>
#include "ipv4.h"

using namespace std;

void AfficherTableau(unsigned char *tab){
    for(int indice=0; indice<4; indice++){
        cout << static_cast<int>(tab[indice]);
        if(indice<3)cout << ".";
    }
    cout<<endl;
}

int main()
{
    //Affichage masque en fonction de l'adresse
    /*unsigned char add[4]= {192,168,1,1};
    unsigned char masque[4];

    IPv4 add1(add,24);

    add1.ObtenirMasque(masque);
    cout << static_cast<int>(masque[0]) << "." << static_cast<int>(masque[1]) << ".";
    cout << static_cast<int>(masque[2]) << "." << static_cast<int>(masque[3]) << endl;
    */


    //Programme principal
    unsigned char adresse[4]={162,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];

    IPv4 uneAdresse(adresse,24);

    cout << "Adresse IPv4 : ";
    AfficherTableau(adresse);
    uneAdresse.ObtenirMasque(masque);
    cout << "Masque : ";
    AfficherTableau(masque);
    uneAdresse.ObtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    AfficherTableau(diffusion);


    return 0;
}
