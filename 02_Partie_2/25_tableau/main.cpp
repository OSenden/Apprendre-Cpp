#include <iostream>
#include <string>
#include "menu.h"

using namespace std;

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2, //=2
    OPTION_3, //=3
    OPTION_4, //=4
    QUITTER   //=5
};

int main()
{
    int choix;
    Menu unMenu("menu.txt");
    do
    {

        choix = unMenu.Afficher();
        switch (choix)
        {

        case OPTION_1:  //choix = 1
            cout << "Vous avez choisi l'option n°1" << endl;
            Menu::AttendreAppuiTouche();  //Voir fonction
            break;
        case OPTION_2:  //choix = 2
            cout << "Vous avez choisi l'option n°2" << endl;
            Menu::AttendreAppuiTouche();  //Voir fonction
            break;
        case OPTION_3:  //choix = 3
            cout << "Vous avez choisi l'option n°3" << endl;
            Menu::AttendreAppuiTouche();  //Voir fonction
            break;
        case OPTION_4:  //choix = 4
            cout << "Vous avez choisi l'option n°4" << endl;
            Menu::AttendreAppuiTouche();  //Voir fonction
            break;
        }

    }while(choix != QUITTER);   //choix = 5


    return 0;
}
