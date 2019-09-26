#ifndef MENU_H
#define MENU_H

using namespace std;

class Menu{
    private:
        string nom;
        string * options;
        int nbOptions;
        int longueurMax;
    public:
        Menu(string _nom);
        ~Menu();
        int Afficher();
        void AttendreAppuiTouche();
};

#endif // MENU_H
