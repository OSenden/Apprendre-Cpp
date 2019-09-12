#include "menu.h"
#include <QApplication>

int main()
{

    int choix;
    Menu leMenu("menu.txt");

    choix = leMenu.Afficher();
    cout << "Vous avez choisi l'option : " << choix << endl;

    return 0;
}
