// Implementação de números complexos

#include <iostream>
#include "Complexo.h"
#include <iostream>

using namespace std;

int main()
{
    Complexo<float> c1(2.0, 2.0);
    Complexo<float> c2(2.0, 2.0);

    Complexo<float> c3 = c1 + c2;
    Complexo<float> c4 = c1 - c2;

    // c3
    cout << "\nc3" << endl;
    c3.imprimirFormaCartesiana();
    c3.imprimirFormaPolar();

    // c4
    cout << "\nc4" << endl;
    c4.imprimirFormaCartesiana();
    c4.imprimirFormaPolar();
}
