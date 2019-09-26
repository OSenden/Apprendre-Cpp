#ifndef MENU_H
#define MENU_H
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <algorithm>



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
};

#endif // MENU_H
