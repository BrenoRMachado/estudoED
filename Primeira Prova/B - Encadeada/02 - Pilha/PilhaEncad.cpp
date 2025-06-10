#include <iostream>
#include "PilhaEncad.h"
using namespace std;

PilhaEncad :: PilhaEncad()
{
    topo = nullptr; //
}

PilhaEncad :: ~PilhaEncad()
{
    //
    No *p = topo;
    while(topo != nullptr)
    {
        topo = p->getProx();
        delete p;
        p = topo;
    }
}

int PilhaEncad :: getTopo()
{
    //
    if(topo != nullptr)
    {
        return topo->getInfo();
    }
    else
    {
        cout << "Pilha vazia!"<<endl;
        exit(1);
    }
}

void PilhaEncad :: empilha(int val)
{
    //
    No *p = new No();
    p->setInfo(val);
    p->setProx(topo);
    topo = p;
}

int PilhaEncad :: desempilha(int val)
{
    No *p;
    int val;
    if(topo != nullptr)
    {
        p = topo;
        topo = p->getProx();
        val = p->getInfo();
        delete p;
    }
    else
    {
        exit(1);
    }
    return val;
}

bool PilhaEncad :: vazia()
{
    return (topo == nullptr);
}