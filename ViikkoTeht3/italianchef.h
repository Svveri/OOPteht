#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

// aliluokka
class ItalianChef: public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);

private:
    const string password = "pizza";
    int flour;
    int water;

    int makePizza(void);

};

#endif // ITALIANCHEF_H
