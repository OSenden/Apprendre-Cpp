#include <iostream>
#include <vanne.h>
#include <zonearrosage.h>
#include <capteurhumidite.h>

using namespace std;

int main()
{
    ZoneArrosage zone1(1,25,15,5,17);
    zone1.Piloter();
    return 0;
}
