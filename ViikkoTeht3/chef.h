#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;

// yliluokka
class Chef
{
public:
    Chef();
    Chef(string);
    ~Chef();
    string getName();
    int makeSalad(int);
    int makeSoup(int);

protected:
    string chefName;

};

#endif // CHEF_H
