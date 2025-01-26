#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    bool tila = false; // tilakäsittelijä
    int orri = -1; // tilakäsittelijä
    string salasana; // ottaa vastaan syötetyn salasanan jota verrataan string password
    int ainekset; // ainesten määrä muuttuja
    int w; // veden käsittelijä
    int f; // jauhon käsittelijä

    // luodaan olio ItalianChef pohjalta
    ItalianChef severi_olio("Mario");

    severi_olio.getName();

    // kysellään salasana ja aineksien määrä
    cout << "Anna salasana: ";
    cin >> salasana;

    cout << "How many portions of flour do you have?"
         << endl;

    cin  >> w;

    cout << "How many portions of water do you have?"
         << endl;

    cin  >>  f;

    tila = severi_olio.askSecret(salasana, f, w);

    if (tila == false)
    {
        ainekset = w + f;
        cout << "If you want salad, press 1"
             << endl
             << "If you want soup, press 2"
             << endl;
        cin  >> orri;

        if(orri == 1)
            {
                severi_olio.makeSalad(ainekset);
            }
        else if (orri == 2)
            {
                severi_olio.makeSoup(ainekset);
            }

        else
            {
                cout << "I guess you want nothing from me... GET OUT!"
                 << endl;
            }
    }

    return 0;
}
