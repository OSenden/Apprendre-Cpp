#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
enum CHOIX_MENU{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    //QUITTER
};
enum erreurs{
    FICHIER
};

class Menu
{
private:
    string nom;
    string* options;
    int nbOptions;
    int longueurMax;

public:
    Menu(const string _nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
};

class ErreurFichier{
private:
    int codeErreur;
    string message;
public:
    ErreurFichier(int _codeErreur,string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;

};

#endif // MENU_H
