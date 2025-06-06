#include <iostream>
#include "ListaEncad.h"
using namespace std;

ListaEncad :: ListaEncad()
{
    primeiro = nullptr; 
}

ListaEncad :: ~ListaEncad()
{
    No * p = primeiro;
    while ( p != nullptr) 
    {
        No * t = p->getProx(); 
        delete p ; 
        p = t; 
    }
}

void ListaEncad :: insereInicio(int val)
{
    No *p = new No(); 

    p->setInfo(val);
    p->setProx(primeiro);   

    primeiro = p; 
}
bool ListaEncad :: busca(int val)
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

void ListaEncad :: removeInicio()
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
