#include <iostream>
#include <contenant.h>
#include <carton.h>
#include <caissedebouteilles.h>

using namespace std;

int main()
{
    /*Carton unCarton(20,10,50,12);
    cout << "Volume du carton : " << unCarton.CalculerVolume() / 100 << " cm3" << endl;
    cout << "Poids maxi du carton : " << unCarton.ObtenirPoidsMaxi() << " kg" << endl;*/

    CaisseDeBouteilles uneCaisse(20,10,50,6,75);
    cout << "Volume : " << uneCaisse.CalculerVolume() << " cl" << endl;
    cout << "Volume de la caisse : " << uneCaisse.Contenant::CalculerVolume() << " cm3" << endl;

    return 0;
}
