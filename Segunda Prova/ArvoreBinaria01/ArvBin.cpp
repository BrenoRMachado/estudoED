#include <iostream>
#include "ArvBin.h"
using namespace std;

ArvBin :: ArvBin()
{
    raiz = nullptr;
}

ArvBin :: ~ArvBin()
{

}

int ArvBin :: getRaiz()
{
    if(raiz != nullptr) //se a raiz não estiver vazia
    {
        return raiz->getInfo();
    }
    else
    {
        cout << "Árvore vazia" << endl;
        exit(1); 
    }
}

void ArvBin :: cria(int val, ArvBin *sae, ArvBin *sad)
{

}

bool ArvBin :: vazia()
{
    return raiz == nullptr; //verifica se a árvore está vazia pela raiz
}

void ArvBin :: imprime()
{

}

bool ArvBin :: busca(int val)
{
    
}