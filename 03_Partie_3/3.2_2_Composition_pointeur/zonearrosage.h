#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H

#include "capteurhumidite.h"
#include "vanne.h"
#include <string>

using namespace std;

class ZoneArrosage{
    private:
        Vanne *laVanne;
        CapteurHumidite *leCapteurHumidite;
        int numZone;
    public:
        ZoneArrosage(string _initialisationZone);
        void Piloter();
        ~ZoneArrosage();
};

#endif // ZONEARROSAGE_H
