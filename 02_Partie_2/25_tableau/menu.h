#ifndef MENU_H
#define MENU_H
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <algorithm>

enum erreurs
{
    FICHIER,
};


using namespace std;
/**
 * @brief The Menu class
 */


class Menu
{
private:
    string nom; ///Désigne le nom du fichier
    string * options; ///Représente un tableau de chaînes de caractères implémentées sous la forme de string. Ce tableau sera alloué dynamiquement en fonction du nombre de lignes du fichier
    int nbOptions; ///Contient le nombre d'options du Menu
    int longueurMax; ///Taille de la plus grande chaîne contenue dans le tableau


public:
    ~Menu();
    Menu(const string _nom);
    int Afficher();
    static void AttendreAppuiTouche();

    void Affecter(int _indice,int _valeur);
    int &operator[](int _indice);
};


class ErreurFichier
{

private:

    int codeErreur;
    string message;

public:

    ErreurFichier(int _codeErreur, string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription()const;
};



class ErreurIndice
{

private:

    int codeErreur;
    string message;

public:

    ErreurIndice(int _codeErreur, string _message);
    int ObtenirCodeErreur()const;
    string ObtenirDescription()const;

};




#endif // MENU_H
