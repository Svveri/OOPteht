#include "seuraaja.h"
#include "notifikaattori.h"
#include <iostream>

using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Severi"); // pointermuotoiset
    Seuraaja *B = new Seuraaja("Julia");
    Seuraaja *C = new Seuraaja("Mohammed");
    Seuraaja *D = new Seuraaja("Kasperi");
    Seuraaja *E = new Seuraaja("Santeri");

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);
    N->lisaa(D);
    N->lisaa(E);


    N->postita("Moro");

    N->poista(A);

    N->postita("Mita kuuluu?");

    return 0;
}
