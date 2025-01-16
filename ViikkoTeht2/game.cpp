#include "game.h"

Game::Game(int mn)
{
    maxNumber = mn;
    cout << "Game constructor"
         << endl;

}

Game::~Game()
{
    cout << "Game destruktori"
         << endl;
}

void Game::play()
{
    cout << "Game play"
         << endl;


    int satunnaisluku = 0;
    int arvaus = -1;

    // 1. arvotaan satunnainen luku
    srand(time(NULL));
    satunnaisluku = rand() % maxNumber;

    while (true)
    {
        // 2. käyttäjän syöttämä arvaus
        cout << "ARVAA!" << endl;
        cin >> arvaus;

        numOfGuesses++;

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
    printGameResult(); // printataan alla oleva funktiolla arvausten lukumäärä
}

void Game::printGameResult()
{
    cout << "Game printGameResult"
         << endl
         << "Arvausten lukumaara = "
         << numOfGuesses
         << endl;
}
