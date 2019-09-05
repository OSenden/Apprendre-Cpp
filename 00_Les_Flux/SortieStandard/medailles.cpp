/******************************************************************************************************************

/*!

    /file       medailles.cpp
    /author     Océane Senden
    /date       05 Septembre 2019

    /brief      Medailles.txt mis en tableau grace au C++
*/
/******************************************************************************************************************/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int medailles(){
    string nomDuFichier;

    cout<< "Entrer le nom du fichier à lire :";
    cin>> nomDuFichier;

    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str());// c_str() transforme string en char*

    if(!leFichier .is_open())
        cerr<< "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        // A compléter, affichage de la première ligne du tableau
        cout<< "+" <<setfill('-') << setw(21) << "+" <<setfill('-') << setw(11) << "+" <<setfill('-') << setw(11) << "+" <<setfill('-') << setw(11) << "+" << endl;
        do{
            //récupération des valeurs
            leFichier>>pays>>nbOr>>nbArgent>>nbBronze;
            if(leFichier.good())//Si les valeurs ont bien été lues
            {
                // A compléter, affichage de chaque ligne du tableau
                cout<< "| " << left << setw(18) << setfill(' ') << pays ;
                cout << right << " |" << setw(9) << setfill(' ') << nbOr ;
                cout << " |" << setw(9) << setfill(' ') << nbArgent ;
                cout << " |" << setw(9) << setfill(' ') << nbBronze << " |" << endl;
            }
        }while(!leFichier.eof());
        // A compléter, affichage de la dernière ligne du tableau.
        cout<< "+" <<setfill('-') << setw(21) << "+" <<setfill('-') << setw(11) << "+" <<setfill('-') << setw(11) << "+" <<setfill('-') << setw(11) << "+" << endl;
    }
    return 0;
}
