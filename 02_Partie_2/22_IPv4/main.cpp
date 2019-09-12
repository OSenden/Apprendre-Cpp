#include <iostream>

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
    //Nouveau programme principal
        unsigned char adresse[4] = {162,168,1,1};
        unsigned char reseau[4];
        IPv4 *uneAdresse = new IPv4(adresse,24);//instanciation de la classe IPv4
        IPv4 adresseCopie = *uneAdresse;//l'instance est recopiée dans une autre

        cout<<"Adresse réseau avant : ";
        adresseCopie.ObtenirAdresseReseau(reseau);
        AfficherTableau(reseau);

        delete uneAdresse;//destruction de la premièreinstance

        cout<<"Adresse réseau après destruction : ";
        adresseCopie.ObtenirAdresseReseau(reseau);
        AfficherTableau(reseau);

    return 0;
}
