#include <iostream>
#include "ListaEncad.h"
using namespace std;

ListaEncad :: ListaEncad()
{
    primeiro = nullptr; //com a lista vazia, o primeiro não deve apontar para ninguém
}

ListaEncad :: ~ListaEncad()
{
    No *p = primeiro; //devemos começar a destruir a lista pelo começo
    while ( p != nullptr)
    {
        No * t = p->getProx(); //fazemos um ponteiro novo apontar para o próximo, já que o atual vai ser apagado
        //se não perderiamos o ponteiro para o próximo
        delete p; //apaga o conteúdo apontado pelo p, mas mantem o ponteiro p
        p = t;
    }
}

void ListaEncad :: insereInicio(int val)
{
    No *p = new No(); //cria um nó apontado por  p

    p->setInfo(val); //preeenche a info do nó com o valor
    p->setProx(primeiro);   //faz o ponteiro desse nó ser o primeiro

    primeiro = p;   //o endereço  que o ponteiro primeiro aponta vai ser o endereço do nó (objeto)
}

/* bool ListaEncad :: busca(int val)
{
    //precisamos começar a busca do primeiro elemento
    //como temos certeza que começamos por ele?
    No * p = primeiro; //pronto
    while( p != nullptr) //vamos olhar todos os nós até chegar no final da lista
    {
        if( p->getInfo() == val )   //verificamos se o valor é = o buscado
            return true;
        p = p->getProx();   //andamos para o próximo nó usando o ponteiro do atual
    }
    return false;
}
*/

// podemos fazer com for :

bool ListaEncad :: busca(int val)
{
    for( No * p = primeiro ; p->getProx() != nullptr ; p = p->getProx())
    {
        if( p->getInfo() == val)
            return true;
    }
    return false;
}

void ListaEncad :: imprime()
{
    for( No * p = primeiro ; p != nullptr ; p = p->getProx() )
    {
        cout << p->getInfo() << " ";
    }
    cout << endl;
}

void ListaEncad :: removeInicio()
{
    No * p; 
    if(primeiro != nullptr) //precisamos ter certeza que existe algum elemento
    {
        p = primeiro; // o ponteiro que criamos vai receber o endereço do primeiro valor para podermos apaga-lo com o delete
        primeiro = p->getProx(); //o próximo nó será o primeiro
        delete p;
    } else
    {
        // rotina_erro(1); //precisamos saber caso ela esteja vazia, então podemos declarar uma função que faça isso 
    }

    //não precisamos corrigir posições pois não estamos em um vetor
}