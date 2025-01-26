#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << "YLILUOKKA default konstruktori"
         << endl;
}

ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    cout << "YLILUOKKA konstruktori PARAMETRILLA"
         << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "YLILUOKKA destructori"
         << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    flour = f;
    water = w;

    cout << "askSecret() kutsuttu!"
         << endl;

    if (pw == password)
    {
        cout << "Correct password!"
             << endl;
        makePizza();
        return true;
    }
    else
    {
        cout << "Wrong password!"
             << endl;

        return false;
    }
}

int ItalianChef::makePizza()
{
    cout << "makePizza kutsuttu"
         << endl;

    int pizza = 0;

    while(flour >= 5 & water >= 5)
    {
        flour -= 5;
        water -= 5;
        pizza++;
    }

    if(pizza > 1)
    {
    cout << "There you go! "
         << pizza
         << " pizza's for you."
         << endl;
        return 0;
    }
    else if (pizza < 1)
    {
        cout << "You dont have enough ingredients for pizza..."
             << endl;
    }
    else
    {
        cout << "PIZZA oven broken or something, sorry!";
    }
    return 0;
}

