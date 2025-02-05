#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas julia_asiakas("Julia", 1000);

    Asiakas severi_asiakas("Severi", 1000);

    severi_asiakas.talletus(999);

    severi_asiakas.showSaldo();

    return 0;
}
