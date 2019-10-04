#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "compte.h"
#include "menu.h"
#include "compteepargne.h"
/**
  * @file main.cpp
  * @date 13/09/19
  * @author mc
*/
using namespace std;

enum MENU_COMPTE_BANCAIRE{
    DEPOSER = 1,
    RETIRER,
    CONSULTER,
    QUITTER
};

enum MENU_COMPTE_EPARGNE{
    DEPOSER_EPARGNE = 1,
    RETIRER_EPARGNE,
    CONSULTER_EPARGNE,
    CALCULER_INTERETS,
    QUITTER_EPARGNE
};

enum MENU{
    COMPTE_BANCAIRE = 1,
    COMPTE_EPARGNE,
    QUITTER_MENU
};

int main()
{
    Compte monCompte(80);
    CompteEpargne monCompteEpargne(80);

    try
    {
        int choixCompte;
        int choixEpargne;
        int choixMenu;

        Menu menuCompteBancaire("menuCompteBancaire.txt");
        Menu menuCompteEpargne("menuCompteEpargne.txt");
        Menu menu("menu.txt");

        do
        {
            choixMenu = menu.Afficher();
            switch (choixMenu)
            {
            case COMPTE_BANCAIRE:

                do
                {
                    float montant;
                    choixCompte = menuCompteBancaire.Afficher();
                    system("clear");

                    switch(choixCompte)
                    {
                    case DEPOSER:
                        cout << "Montant du depot : ";
                        cin >> montant;
                        monCompte.Deposer(montant);
                        Menu::AttendreAppuiTouche();
                        break;

                    case RETIRER:
                        cout << "Montant à retirer : ";
                        cin >> montant;
                        monCompte.Retirer(montant);
                        Menu::AttendreAppuiTouche();
                        break;

                    case CONSULTER:
                        cout << "Votre solde est : ";
                        cout << monCompte.ConsulterSolde() << endl;
                        Menu::AttendreAppuiTouche();
                        break;
                    }

                }while (choixCompte != QUITTER);
                break;

            case COMPTE_EPARGNE:

                do
                {
                    float montant;
                    choixEpargne = menuCompteEpargne.Afficher();
                    system("clear");
                    switch(choixEpargne)
                    {
                    case DEPOSER:
                        cout << "Montant du depot : ";
                        cin >> montant;
                        monCompteEpargne.Deposer(montant);
                        break;

                    case RETIRER:
                        cout << "Montant à retirer : ";
                        cin >> montant;
                        monCompteEpargne.Retirer(montant);
                        break;

                    case CONSULTER:
                        cout << "Votre solde est : ";
                        cout << monCompteEpargne.ConsulterSolde() << endl;
                        Menu::AttendreAppuiTouche();
                        break;

                    case CALCULER_INTERETS:
                        monCompteEpargne.CalculerInterets();
                        break;
                    }

                }while(choixEpargne != QUITTER_EPARGNE);
                break;
            }
        }while(choixMenu !=QUITTER_MENU);

    }catch (ErreurFichier exp)
    {
        cout <<"Erreur : " << exp.ObtenirCodeErreur();
        cout <<exp.ObtenirDescription() << endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}
