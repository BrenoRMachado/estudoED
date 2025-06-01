#include <iostream>
#include "ListaEncad.h"
using namespace std;

int main()
{
    ListaEncad l;

    int n, val;
    cout << "Escreva quantos nós tu quer: " << endl;
    cin >> n;
    for ( int i = 0 ; i<n ; i++)
    {
        cout << "Escreva o valor do nó " <<endl;
        cin >> val;
        l.insereInicio(val);
    }

    ///l.imprime();

    return 0;
}