/******************************************************************************************************************

/*!

    /file       lecture.cpp
    /author     Océane Senden
    /date       05 Septembre 2019

    /brief      Lecture en C++
*/
/******************************************************************************************************************/



#include <iostream>
using namespace std;

int lecture(){
    float temperature;
    float humidite;
    int pression;
    cout<<"Saisir la température,l'humidité et la pression:";
    cin>>temperature>>humidite>>pression;
    cout<<"la température est: "<<temperature<<"°"<<endl;
    cout<<"le taux d'humidité est: "<<humidite<<" %"<<endl;
    cout<<"la pression est: "<<pression<<" hPa"<<endl;
    return 0;
}
