#include "luottotili.h"
#include "pankkitili.h"

Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o)
{
    luottoRaja = lr;
    cout << "Luottotili Konstruktori" << endl;
}

Luottotili::~Luottotili()
{
    cout << "Luottotili Destruktori" << endl;
}

bool Luottotili::withdraw(double summa)
{
    if (summa < 0)
    {
        cout<< "Ei voi nostaa negatiivista." << endl;
        return false;
    }

    if(summa > luottoRaja)
    {
        cout << "Ei voi rikkoa luottorajaa" << endl;
        return false;
    }

    // onnistui
    luottoRaja -= summa;
    saldo -= summa;
    cout << "Luottoa nostettu = " << summa << endl;
    cout << "Luottorajaa jaljella = " << luottoRaja << endl;

    return true;
}

bool Luottotili::deposit(double summa)
{
    if (summa < 0)
    {
        cout << "Ei voi tallettaa negatiivista." << endl;
        return false;
    }

    else if (0 < saldo + summa)
    {
        cout << "Summa on suurempi kuin luotto raja, ei onnistu." << endl;
        return false;
    }
    else
    {
        saldo += summa;
        luottoRaja += summa;
        cout << "Luottoa maksettu = " << summa << endl;
        return true;
    }
    return false;
}
