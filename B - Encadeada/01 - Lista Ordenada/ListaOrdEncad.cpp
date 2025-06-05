#include <iostream>
#include "ListaOrdEncad.h"
using namespace std;

ListaOrdEncad :: ListaOrdEncad()
{
    primeiro = nullptr; 
}

ListaOrdEncad :: ~ListaOrdEncad()
{
    No * p = primeiro;
    while ( p != nullptr) 
    {
        No * t = p->getProx(); 
        delete p ; 
        p = t; 
    }
}

void ListaOrdEncad :: insere(int val)
{
    No *p = new No();
    No *ant = nullptr; //
    No *atual = primeiro; // 

    p->setInfo(val);

    while (atual != nullptr && val >= atual->getInfo())//
    {
        ant = atual;
        atual = atual->getProx();
    }

    if(ant == nullptr)
    {
        p->setProx(primeiro);
        primeiro = p;
    }
    else 
    {
        ant->setProx(p);
        p->setProx(atual);
    }
    

    p->setProx(primeiro);   

    primeiro = p; 

}
bool ListaOrdEncad :: busca(int val)
{
    No * p = primeiro;

    while( p != nullptr ) 
    {
        if(p->getInfo() == val) 
        {
            return true;
        }
        p = p->getProx(); 
    }
    return false;

}

/*

void ListaOrdEncad :: removeInicio()
{
    No * p;
    if(primeiro != nullptr)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;
    }
    else 
    {
        cout << "Lista Vazia!"<<endl;
        exit(1);
    }
}

*/
