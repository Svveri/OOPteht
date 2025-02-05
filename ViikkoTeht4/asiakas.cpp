#include "asiakas.h"


Asiakas::Asiakas(string nimi, double lr)
    : kayttotili(nimi), luottotili(nimi, lr)
{
    cout << "Asiakas Konstruktori" << endl;
}

Asiakas::~Asiakas()
{
    cout << "Asiakas Destruktori" << endl;
}

string Asiakas::getNimi()
{
    // tän pitäs palauttaa tilin omistajan nimi fy fan
}

void Asiakas::showSaldo()
{
    cout << "Kaytto"; kayttotili.getBalance();
    cout << "Luotto"; luottotili.getBalance();
}

bool Asiakas::talletus(double summa)
{
    bool onnistuiko = kayttotili.deposit(summa);

    //if (onnistuiko == false)
    //{
    //  cout << "Eipa onnistunut" << endl;
    //}

    return onnistuiko;
}

bool Asiakas::nosto(double summa)
{
    kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa)
{
    kayttotili.withdraw(summa);
    luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa)
{
    bool oliko = luottotili.withdraw(summa);
    if(oliko == true)
    {
        kayttotili.deposit(summa);
    }
}

bool Asiakas::tiliSiirto(double summa, Asiakas &a)
{
    bool tila = kayttotili.withdraw(summa);
    if (summa <= 0)
    {
        cout << "ei voi siirtaa negatiivista summaa" << endl;;
        return false;
    }
    if (tila == false)
    {
        cout << "Kate ei riita!" << endl;
        return false;
    }

    // kayttotili.withdraw(summa);
    a.talletus(summa);

    return true;
}

