#include <iostream>

#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"


using namespace std;

int main()
{

    BarreRonde laBarre("A1A1",1,1,"Bob",4);

    double surface = laBarre.CalculerSection();

    cout << "Surface du carré : " << surface << endl;

    return 0;
}
