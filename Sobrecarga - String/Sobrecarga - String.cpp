// Demonstração de aplicação de sobrecarga de string

#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa p1("deilson", 123);
    Pessoa p2("vitoria", 456);

    p1 = p2;

    cout << p1.getNome() << endl;
    cout << p2.getNome() << endl;

    p1.alterarPrimeiraLetra('e');

    cout << p1.getNome() << endl;
    cout << p2.getNome() << endl;

}

