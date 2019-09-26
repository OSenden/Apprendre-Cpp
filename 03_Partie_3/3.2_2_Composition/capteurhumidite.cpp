#include "capteurhumidite.h"

CapteurHumidite::CapteurHumidite(const int _brocheCapteur):
    brocheCapteur(_brocheCapteur)
{
    cout << "CapteurHumidite: " << brocheCapteur << endl;
}

int CapteurHumidite::MesurerHumiditeDuSol()
{
    return 0;
}
