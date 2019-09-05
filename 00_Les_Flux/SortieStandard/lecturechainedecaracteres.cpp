/******************************************************************************************************************

/*!

    /file       lectureChaineDeCaracteres.cpp
    /author     Océane Senden
    /date       05 Septembre 2019

    /brief      Chaine de caracteres en C++
*/
/******************************************************************************************************************/


#include <iostream>

using namespace std;
int lectureChaineDeCaracteres(){
    char phrase[80+1];
    cout<<"Saisir une phrase: ";
    cin.getline(phrase,80);
    cout<<"Votre phrase est: "<<phrase<<endl;
    return 0;
}
