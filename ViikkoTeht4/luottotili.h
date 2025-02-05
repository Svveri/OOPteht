#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili();
    Luottotili(string o, double lr);
    ~Luottotili();

    virtual bool withdraw(double summa) override;
    virtual bool deposit(double summa) override;

protected:
    double luottoRaja;

};

#endif // LUOTTOTILI_H
