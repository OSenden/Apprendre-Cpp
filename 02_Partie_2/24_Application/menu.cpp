#include "menu.h"
#include "ui_menu.h"

#include<algorithm>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

Menu::Menu(const string &_nom):nom(_nom),longueurMax(0)
{
    int nbLignes;
    nom = _nom;

    ifstream fichierMenu(nom.c_str());// c_str() transforme string en char*

    if (fichierMenu.fail()) // Si il y a une erreur
    {
        cerr<< "Erreur lors de l'ouverture du fichier" << endl; // alors Afficher un message indiquant une erreur de lecture
        nbOptions = 0; // et mettre nbOptions à 0
    }
    else // Sinon calculer nbOptions, le nombre d’options dans le fichier
    {
        nbLignes=static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
            // allocation dynamique du tableau
            nbOptions=nbLignes;
        fichierMenu.seekg(0,ios::beg);
        // allouer dynamiquement le tableau options en fonction de nbOptions
        options = new string[nbOptions];
    }
        for(unsigned int i=0; i < nbOptions ; i++) // Pour chaque option dans le fichier
        {
            std::getline (fichierMenu, options [i]); //Lire l’option et l’affecter dans le tableau options
            if(options[i].length() > longueurMax) // Si la taille de l’option est plus grande que longueurMax
            {
                longueurMax = options[i].length(); // alors longueurMax reçoit la taille de l’option

            } // FinSi

        } // FinPour
}

Menu::~Menu()
{
    delete options;
}


int Menu::Afficher()
{
    int choix;
    int longueur = (int) longueurMax+2;
    if(nbOptions == 1)
        choix = -1;
    else {

    //cout << "+" << setfill('-') << setw(5) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+2) << "+" << endl;
    //cout << setfill('-');
    //cout << "+" << setw(5) << "+" << setw(longueurMax+2)<<"+"<<endl;
        for (unsigned int i=0; i < nbOptions; i++)
        {
         cout << "| " << i << " | " << options[i] << " |" << endl;
        }
        cout << setfill('-');
        cout << "+" << setw(5) << "+" << setw(longueur)<<"+"<<endl;
        cout << setfill(' ');
        cin >> choix;
    }
    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "Appyuer sur la touche Entrée pour continuer ...";
    getline(cin,uneChaine);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("clear");
}
