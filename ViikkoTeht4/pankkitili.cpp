#include "pankkitili.h"

Pankkitili::Pankkitili(string)
{
    cout << "Pankkitili Konstruktori parametrilla" << endl;
}

Pankkitili::~Pankkitili()
{
    cout << "Pankkitili Destruktori" << endl;
}

double Pankkitili::getBalance()
{
    cout << "tilin saldo = " << saldo << endl;
    // cout << "Luottotilin raja = " << luottoRaja << endl;

    return saldo;
}

bool Pankkitili::deposit(double summa)
{
    if (summa < 0)
    {
        cout << "Ei voi tallettaa negatiivista lukua." << endl;
        return false;
    }
    saldo += summa;
    cout << "Tilille lisatty = " << summa << " euroa." << endl;

    return true;
}

bool Pankkitili::withdraw(double summa)
{


    if (summa < 0) // negatiivinen summa
    {
        cout << "Nosto ei onnistu, summa negatiivinen" << endl;
        return false;
    }

    if(summa > saldo) // saldo ei riitä
    {
        cout << "Nosto ei onnistu, liian iso summa" << endl;
        return false;
    }

    // onnistui, päivitetään saldo
    saldo -= summa;
    cout << "Onnistui, nostit = " << summa << endl;

    return true;
}
