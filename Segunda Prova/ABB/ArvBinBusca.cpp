#include <iostream>
#include "ArvBinBusca.h"
#include <sstream>
#include "FilaEncad.h"
using namespace std;

ArvBinBusca :: ArvBinBusca()
{
    raiz = nullptr;
}
    
ArvBinBusca :: ~ArvBinBusca()
{
    libera(raiz);
}

int ArvBinBusca :: getRaiz()
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

bool ArvBinBusca :: vazia()
{
    return raiz == nullptr;
}


bool ArvBinBusca :: busca(int val)
{
    return auxBusca(raiz, val); 
}

bool ArvBinBusca :: auxBusca(No* p, int val)
{
    if(p == nullptr)
    {
        return false;
    }
    else if( val == p->getInfo())
    {
        return true;
    }
    else if(val < p->getInfo())
    {
        return auxBusca(p->getEsq(), val);
    }
    else 
    {
        return auxBusca(p->getDir(), val);
    }

}


void ArvBinBusca :: insere(int x)
{
    auxInsere(raiz, x);
}

No* ArvBinBusca :: auxInsere(No *p, int x)
{
    if(p == nullptr)
    {
        p = new No();
        p->setInfo(x);
        p->setEsq(nullptr);
        p->setDir(nullptr);
    }
    else if ( x < p->getInfo())
    {
        p->setEsq(auxInsere(p->getEsq(), x));
    }
    else
    {
        p->setDit(auxInsere(p->getDir(),x ));
    }
    return p;
}

int ArvBinBusca :: min()
{
    return auxMin(raiz);
}

int ArvBinBusca :: auxMin(No *p)
{
    if(p!=nullptr)
    {
        if(p->getEsq() == nullptr)
        {
            return p->getInfo();
        }
        else 
            return auxMin(p->getEsq());
    }
}

void ArvBinBusca :: removeMin()
{
    raiz = auxRemoveMin(raiz);
}
No* ArvBinBusca :: auxRemoveMin(No * p)
{
    if(p!= nullptr)
    {
        if(p->getEsq() == nullptr)
        {
            No * r = p->getDir();
            delete p;
            return r;
        }
    }

    p->setEsq( auxRemoveMin(p->getEsq()));
    return p;
}

No * ArvBinBusca:: removeFolha(No * p)
{
    delete p;
    return NULL;
}

No* ArvBinBusca:: remove1Filho(No *p)
{
    No *aux;
    if(p->getEsq() == NULL)
        aux = p->getDir();
    else
        ux = p->getEsq();
    delete p;
    return aux;
}

No* ArvBinBusca::menorSubArvDireita(No *p)
{
    No *aux = p->getDir();
    while(aux->getEsq() != NULL)
        aux = aux->getEsq();
    return aux;
}

No* ArvBinBusca:: auxRemove(No *p, int x)
{
    if(p == NULL)
        return NULL;
    else if(x < p->getInfo())
        p->setEsq( auxRemove(p->getEsq(), x) );
    else if(x > p->getInfo())
        p->setDir( auxRemove(p->getDir(), x) );
    else // achou o no a ser removido
    {
        if((p->getEsq() == NULL) && (p->getDir() == NULL))
            p = removeFolha(p);
        else if((p->getEsq() == NULL) || (p->getDir() == NULL))
            p = remove1Filho(p);
        else
        {
            // p tem dois filhos
            No *aux = menorSubArvDireita(p);

            // troca as informacoes
            int tmp = aux->getInfo();
            p->setInfo(tmp);
            tmp->setInfo(C);
            
            // recursao: para a subarv. direita
            p->setDir( auxRemove(p->getDir(),x) );
        }
    }
    return p;
}