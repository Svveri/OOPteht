#include "chef.h"

Chef::Chef()
{
    cout << "ALILUOKKA default konstruktori"
         << endl;
}

Chef::Chef(string name)
{
    cout << "ALILUOKKA konstruktori PARAMETRILLA"
         << endl;
}

Chef::~Chef()
{
    cout << "ALILUOKKA destruktori"
         << endl;
}

string Chef::getName()
{
    string name;

    cout << "getName() kutsuttu"
         << endl
         << "Tell me the chefs name: "
         << endl;

    cin >> name;

    return name;
}

int Chef::makeSalad(int aines)
{
    cout << "makeSalad kutsuttu"
         << endl;

    int salad = 0;

    while(aines >= 3)
    {
        aines -= 3;
        salad++;
    }

    if(salad > 1)
    {
        cout << "There you go! "
             << salad
             << " salad's for you."
             << endl;
        return 0;
    }
    else if (salad < 1)
    {
        cout << "You dont have enough ingredients for salad..."
             << endl;
    }
    else
    {
        cout << "Salad bowl broken or something, sorry!";
    }

    return 0;
}

int Chef::makeSoup(int aines)
{
    cout << "makeSoup kutsuttu"
         << endl;

    int soup = 0;

    while(aines >= 3)
    {
        aines -= 5;
        soup++;
    }

    if(soup > 1)
    {
        cout << "There you go! "
             << soup
             << " soup's for you."
             << endl;
        return 0;
    }
    else if (soup < 1)
    {
        cout << "You dont have enough ingredients for soup..."
             << endl;
    }
    else
    {
        cout << "Soup cattle broken or something, sorry!";
    }

    return 0;
}

