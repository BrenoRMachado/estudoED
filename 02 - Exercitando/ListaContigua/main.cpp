#include <iostream>
#include "ListaCont.h"
using namespace std;

int main()
{
    //vamos criar um exemplo
    int x = 0;
    int y = 0;
    cout << "Qual o tamanho da sua lista?" <<endl;
    cin >> x;
    ListaCont lista(x);
    cout << "Insira os elementos da lista: " <<endl;
    for(int i = 0; i<x ; i++)
    {
        cin>> y;
        lista.insereFinal(y);
    }
    cout << "Aqui está sua lista: " <<endl;
    lista.imprimirLista();
    cout << "\nSua lista tem " << lista.numeroNos() << " nohs!"<<endl;
    
    return 0;
}