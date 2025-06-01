#include <iostream>
#include "ListaEncad.h"
using namespace std;

ListaEncad :: ListaEncad()
{
    primeiro = NULL; //com a lista vazia, o primeiro não deve apontar para ninguém
}

ListaEncad :: ~ListaEncad()
{}

void ListaEncad :: insereInicio(int val)
{
    No *p = new No(); //cria um nó apontado por  p

    p->setInfo(val); //preeenche a info do nó com o valor
    p->setProx(primeiro);   //faz o ponteiro desse nó ser o primeiro

    primeiro = p;   //o endereço  que o ponteiro primeiro aponta vai ser o endereço do nó (objeto)
}