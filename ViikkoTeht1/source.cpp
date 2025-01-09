#include <iostream>
#include <header.h>

using namespace std;


int game(int maxnum)
{
    int satunnaisluku = 0;
    int arvaus = -1;
    int arvaustenluku = 0;

    // 1. arvotaan satunnainen luku
    srand(time(NULL));
    satunnaisluku = rand() % maxnum;

    while (true)
{
        arvaustenluku++;
        // 2. käyttäjän syöttämä arvaus
        cout << "ARVAA!" << endl;
        cin >> arvaus;

    // 3.1 jos arvaus yhtäsuuri
    if(arvaus == satunnaisluku)
    {
        cout << "Oikein meni" << endl;
        cout << "Vastaus oli " << satunnaisluku << endl;
        break;
    }

    // 3.2 jos arvaus pienempi
    if (arvaus < satunnaisluku)
    {
        cout << arvaus << " oli liian pieni numero" << endl;
    }

    // 3.3 jos arvaus suurempi
    if (arvaus > satunnaisluku)
    {
        cout << arvaus << " oli liian suuri numero" << endl;
    }
    // 5. jos ei ollut oikein palataan kohtaan 2.
}
    // palautetaan arvausten lukumäärä pääohjelmaan
    return arvaustenluku;
}
