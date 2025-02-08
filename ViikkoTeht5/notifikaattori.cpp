#include "notifikaattori.h"
#include "seuraaja.h"
#include <iostream>

using namespace std;

Notifikaattori::Notifikaattori()
{
    cout << "Notifikaattori konstruktori"
         << endl;
}

Notifikaattori::~Notifikaattori()
{
    // while (n != nullptr) // tälllä poistetaan kaikki lopuksi?
}

void Notifikaattori::lisaa(Seuraaja *uusiSeur) // toimii
{
    if (seuraajat == nullptr)
    {
        seuraajat = uusiSeur;
        return;
    }

    uusiSeur->next = this->seuraajat;
    this->seuraajat = uusiSeur;

}

void Notifikaattori::poista(Seuraaja *poistSeur) // ei toimi
{
    if (seuraajat == nullptr || poistSeur == nullptr) {
        std::cout << "tyhja" << std::endl;
        return;
    }

    // Jos poistettava olio on listan ensimmäinen
    if (seuraajat == poistSeur) {
        Seuraaja *temp = seuraajat;
        seuraajat = seuraajat->next;
        std::cout << "Poistettu: " << temp->getNimi() << std::endl;
        delete temp;
        return;
    }

    Seuraaja *alku = seuraajat;
    while (alku->next != nullptr && alku->next != poistSeur) {
        alku = alku->next;
    }

    if (alku->next == poistSeur) {
        Seuraaja *temp = alku->next;
        alku->next = poistSeur->next;
        std::cout << "Poistettu: " << temp->getNimi() << std::endl;
        delete temp;
    }
}

void Notifikaattori::tulosta() // toimii
{
    Seuraaja *alku = seuraajat;

    if(alku == nullptr)
    {
        cout << "tyhja" << endl;
        return;
    }

    while (alku != nullptr)
    {
        cout << alku -> getNimi() << " " << endl;
        alku = alku -> next;
    }
    return;
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;

    if(alku == nullptr)
    {
        cout << "tyhja" << endl;
        return;
    }

    while (alku != nullptr)
    {
        alku -> paivitys(viesti);
        alku = alku -> next;

    }

    return;
}
