#include "zonearrosage.h"
#include <iostream>

using namespace std;

ZoneArrosage::ZoneArrosage(const int _numZone,const int _commandeVanne,const int _sensAVanne,const int _sensBVanne,const gpio_num_t _brocheHumidite):
    laVanne(_commandeVanne,_sensAVanne,_sensBVanne),
    leCapteurHumidite(_brocheHumidite),
    numZone(_numZone)
{
    cout << "Constructeur de ZoneArrosage n°"<< numZone << endl;
}

void ZoneArrosage::Piloter()
{
    laVanne.Ouvrir();

        if(leCapteurHumidite.MesurerHumiditeDuSol() > 60){
            laVanne.Fermer();
        }
}
