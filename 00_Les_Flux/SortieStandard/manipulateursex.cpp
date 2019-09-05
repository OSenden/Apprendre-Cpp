/******************************************************************************************************************

/*!

    /file       manipulateursEX.cpp
    /author     Océane Senden
    /date       05 Septembre 2019

    /brief      Exemple de manipulaterus en C++
*/
/******************************************************************************************************************/


#include <iostream>
#include<iomanip>

using namespace std;

int manipulateursEX(){

    int val=192;
    double val2=3.141592654;
    bool sortie=true;
    cout<<"Affichage par défaut : "<< val << endl;
    cout<<"Affichage en hexadécimal : "<< hex << val << endl;
    cout<<"Affichage en décimal : "<< dec << val << endl;
    cout<< hex << val << " " << uppercase << val << " ";
    cout<< showbase << val << nouppercase << " " << val << endl;
    cout<< "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout<< "|" << setw(20) << left << "abc" << "|" << endl;
    cout<< "|" << setw(20) << right << "abc" << "|" << endl;
    cout<< "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout<< dec << sortie << " " << boolalpha << sortie << endl;
    cout<< val2 << " " << fixed << val2 << " " << scientific << val2 << " ";
    cout<< fixed << setprecision(2) << val2 << endl;
    cout<<"Entrez un nombre en octal :";
    cin>> oct >> val;
    cout<< "vous avez saisie " << dec << val << "en décimal" << endl;
    return 0;
}

