#include <iostream>
#include "ListaOrdEncad.h"
using namespace std;

int main()
{
    ListaOrdEncad *lista = new ListaOrdEncad();
    int n;
    cout << "quantos nós tu quer?" <<endl;
    cin >> n ;
    for(int i = 0 ; i<n ; i++)
    {
        int valor;
        cout << "Digite o valor do nó: "<<endl;
        cin >> valor;
        lista->insere(valor);
    }
    cout << "Lista ordenada: " <<endl;
    lista->imprime();
    delete lista;

    return 0;
}