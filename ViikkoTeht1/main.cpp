#include "source.cpp"

using namespace std;

int main()
{
    while(true)
    {
        cout << "Anna arvotun numeron maksimi: ";
        cin >> maksimi;

        arvaustenluku = game(maksimi);
        cout << "It took you this many guesses = " << arvaustenluku << endl;

        cout << "Lopeta peli painamalla 1 ja enter: " << endl << "Jos haluat jatkaa paina 2 ja enter: " << endl;
        cin >> lopetus;

        if(lopetus == 1)
        {
            return 0;
        }
    }
}
