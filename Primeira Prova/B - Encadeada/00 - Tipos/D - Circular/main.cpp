#include <iostream>
#include "ListaCirc.h"
using namespace std;

int main()
{
    
    ListaCirc l;

    int n, val;
    cout << "Escreva quantos nohs tu quer: " << endl;
    cin >> n;
    for ( int i = 0 ; i<n ; i++)
    {
        cout << "Escreva o valor do " << i+1 << " noh " <<endl;
        cin >> val;
        l.insereInicio(val);
    }

    //cout << "Aqui está sua lista: " <<endl;
    //l.imprime();
    

    return 0;
}