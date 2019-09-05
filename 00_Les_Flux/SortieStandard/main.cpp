/******************************************************************************************************************

/*!

    /file       main.cpp
    /author     Océane Senden
    /date       05 Septembre 2019

    /brief      Premiers exercices sur le C++
*/
/******************************************************************************************************************/

#include <iostream>

using namespace std;

void Ajouter(int a, int b ,int &c){

    c = a + b;

}

int main(){

    int a = 1;
    int b = -2;
    int c = 0;

    cout << "avant l'appel de Ajouter "<< endl;

    cout << "a=" << a << endl;
    cout << "b=" << b <<endl;
    cout << "c=" << c <<endl;

    //Appelle la fonction Ajouter à compléter dans le tableau suivant le cas.

    Ajouter(a,b,c);

    cout << "après l'appel de Ajouter " << endl;

    cout << "a=" << a <<endl;
    cout << "b=" << b <<endl;
    cout << "c=" << c <<endl;

    return 0;
}
