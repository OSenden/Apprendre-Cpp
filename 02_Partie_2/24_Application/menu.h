#ifndef MENU_H
#define MENU_H

#include<algorithm>
#include<iostream>
#include<iomanip>
#include<fstream>
#include <string>

using namespace std;

class Menu{
    private:
        string nom;
        string * options;
        int nbOptions;
        size_t longueurMax;


    public:
        Menu(const std::string &_nom);
        ~Menu();
        int Afficher();
        static void AttendreAppuiTouche();

};

#endif // MENU_H
