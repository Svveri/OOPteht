#include "game.h"

using namespace std;

int main()
{
    int luku = 0;

    cout << "Anna arvotun numeron maksimi!"
         << endl;

    cin  >> luku;

    Game peliolio(luku);

    peliolio.play();

    return 0;
}
