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
    //tem que lembrar da ccritica. A árvore pode estar vazia, e quando isso acontece a raiz é  nula.
    if(raiz != nullptr)
    {
        return raiz->getInfo(); //não retornarmos o objeto raiz, mas sim seu valor
    }
    else
    {
        cout << "Arvore vazia" <<endl;
        exit(1);
    }
}

void ArvBin :: cria(int val, ArvBin *sae, ArvBin *sad)
{

}

bool ArvBin :: vazia()
{
    return raiz == nullptr;
}

void ArvBin :: imprime()
{

}

bool ArvBin :: busca(int val)
{

}