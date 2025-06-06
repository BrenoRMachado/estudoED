#include <iostream>
#include "FilaEncad.h"
using namespace std;

FilaEncad :: FilaEncad()
{
    inicio = nullptr;
    fim = nullptr;
}
FilaEncad ::  ~FilaEncad()
{
    No *p = inicio;
    while(inicio != NULL)
    {
        inicio = p->getProx();
        delete p;
        p = inicio;
    }
}

int FilaEncad :: getInicio()
{
    if(inicio != NULL)
        return inicio->getInfo();
    else
    {
        cout << "ERRO: Fila vazia!" << endl;
        exit(1);
    }
}
void FilaEncad :: enfileira(int val)
{
    No *p = new No();
    p->setInfo(val);
    p->setProx(NULL);
    if(fim == NULL)
        inicio = p; 
    else
        fim->setProx(p); 
        
    fim = p;
}
int FilaEncad :: desenfileira()
{
    No *p;
    if(inicio != NULL)
    {
        p = inicio;
        inicio = p->getProx();
        if(inicio == NULL)
            fim = NULL; 
    
        int val = p->getInfo();
        delete p; 
        return val;
    }
    cout << "ERRO: Fila vazia" << endl;
    exit(1);
}

bool FilaEncad :: vazia()
{
    if(inicio == NULL)
        return true;
    else
        return false;
}

