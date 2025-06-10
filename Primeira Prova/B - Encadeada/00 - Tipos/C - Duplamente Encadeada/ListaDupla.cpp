#include <iostream>
#include "ListaDupla.h"
using namespace std;

ListaDupla :: ListaDupla()
{
    primeiro = nullptr; 
    ultimo = nullptr;
    n = 0;
}

ListaDupla :: ~ListaDupla()
{
    NoDuplo * p = primeiro;
    while ( p != nullptr) 
    {
        NoDuplo * t = p->getProx(); 
        delete p ; 
        p = t; 
    }
}

void ListaDupla :: insereInicio(int val)
{

    NoDuplo *p = new NoDuplo(); 

    p->setInfo(val);   
    p->setProx(primeiro);  //até aqui está como antes. Quando está vaziao primeiro nó é  o último da representação, por isso vai apontar para null igual primeiro aponta no momento.
    //Nos próximos nós, eles irão apontar para o próximo nó  
    p->setAnt(nullptr);  //um novo nó sempre será o novo primeiro da lista. Logo, não tem nada antes dele

    
    if(n == 0)
    {
        ultimo = p; //se a lista estiver vazia, esse nó que estamos colocando é o primeiro e o último
    }
    else 
    {
        primeiro->setAnt(p); //Se a lista já tinha elementos, o antigo primeiro nó (apontado por primeiro) precisa agora apontar de volta para o novo nó como seu anterior.
    }

    primeiro = p;  //o novo nó é o novo pprimeiro nó
    n++; //atualiza o numero  de nós

}
bool ListaDupla :: busca(int val)
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

void ListaDupla :: removeInicio()
{

    NoDuplo * p;
    if(primeiro != nullptr)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;
        n--; //atualização da quantidade
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


