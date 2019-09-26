#include "vanne.h"
#include <iostream>

using namespace std;

Vanne::Vanne(const int _impulsion, const int _sensA, const int _sensB):
    impulsion(_impulsion),
    sensA(_sensA),
    sensB(_sensB)
{
    cout << "Vanne : " << impulsion << " - " << sensA << " - " << sensB << endl;
}

void Vanne::Ouvrir()
{

}

void Vanne::Fermer()
{

}
