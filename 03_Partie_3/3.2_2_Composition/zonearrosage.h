#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H

#include "vanne.h"
#include "capteurhumidite.h"

class ZoneArrosage{
    private:
        Vanne laVanne;
        CapteurHumidite leCapteurHumidite;
        int numZone;
    public:
        ZoneArrosage(const int _numZone,
                     const gpio_num_t _commandeVanne,
                     const gpio_num_t _sensAVanne,
                     const gpio_num_t _sensBVanne,
                     const gpio_num_t _brocheHumidite);
        void Piloter();
};

#endif // ZONEARROSAGE_H
