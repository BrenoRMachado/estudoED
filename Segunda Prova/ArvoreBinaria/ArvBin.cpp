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
    //sae é subárvore a esquerda e Sad é subárvore a direita

    NoArv * p = new NoArv(); 
    p->setInfo(val);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);

    raiz = p;

    //cria um nó p e define ele como uma raiz
    // concede a ele uma subárvore a esqurda ou a direita
    // pode ser subarvores com nós ou nula 
    // como cria é um método de arvbin, ele tem acesso a atributos privados da classe ArvBin

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