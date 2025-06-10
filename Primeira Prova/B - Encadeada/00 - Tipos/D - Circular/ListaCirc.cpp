#include <iostream>
#include "ListaCirc.h"
using namespace std;

ListaCirc :: ListaCirc()
{
    primeiro = nullptr; 
    ultimo = nullptr;
    n = 0;
}

ListaCirc :: ~ListaCirc()
{
    NoDuplo * p = primeiro;
    while ( p != nullptr) 
    {
        NoDuplo * t = p->getProx(); 
        delete p ; 
        p = t; 
    }
}

void ListaCirc :: insereInicio(int val)
{

    NoDuplo *p = new NoDuplo(); 

    p->setInfo(val);   

    // a  condição muda para uma lógica circular
    if(n == 0)
    {
        p->setProx(p);
        p->setAnt(p); 
        ultimo = p;
    }
    else
    {
        p->setProx(primeiro);
        p->setAnt(ultimo); 
        primeiro->setAnt(p);
        ultimo->setProx(p);
    }

    primeiro = p; 
    n++;

}
bool ListaCirc :: busca(int val)
{

    NoDuplo * p = primeiro;

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

void ListaCirc :: removeInicio()
{

    NoDuplo * p;
    if(primeiro != nullptr)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;
        n--;
        if(n == 0)
        {
            ultimo = nullptr;
        }
        else
        {
            primeiro->setAnt(nullptr);
        }
    }
    else 
    {
        cout << "Lista Vazia!"<<endl;
        exit(1);
    }
}


