#include <iostream>
#include "ArvBin.h"
#include <sstream>
#include "FilaEncad.h"
using namespace std;

ArvBin :: ArvBin()
{
    raiz = nullptr;
}
    
ArvBin :: ~ArvBin()
{
    libera(raiz);
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
    //precisa usar percurso. Vamos usar o pré-ordem primeiro
    auxImprime(raiz);
}

void ArvBin :: auxImprime(NoArv *p)
{
    //fiz sem precisar olhar, hehe
    if( p!= nullptr)
    {
        cout << p->getInfo() << " ";
        auxImprime(p->getEsq());
        auxImprime(p->getDir());
    }
}

/*
Função para impressão em ordem 

void ArvBin::auxImprime(NoArv *p) { // em ordem
    if (p != NULL) {
        auxImprime(p->getEsq());
        cout << p->getInfo() << " ";
        auxImprime(p->getDir());
    }
}

Função para impressão em pós-ordem 
void ArvBin::auxImprime(NoArv *p) { // pos-ordem
    if (p != NULL) {
        auxImprime(p->getEsq());
        auxImprime(p->getDir());
        cout << p->getInfo() << " ";
    }
}
*/

bool ArvBin :: busca(int val)
{
    return auxBusca(raiz, val); 
}

bool ArvBin :: auxBusca(NoArv* p , int val)
{
    //segue um percurso pré-ordem
    if(p == nullptr)
    {
        return false;
    }
    else if( val == p->getInfo())
    {
        return true;
    }
    else if(auxBusca(p->getEsq(), val))
    {
        return true;
    }
    else 
    {
        return auxBusca(p->getDir(), val);
    }

    // se a arvore ta vazia, o nó não tá lá 
    // ai vé se a info do nó atual é igual a val
    // ai vê se a info das subárvores é igual, pra isso chama recursivamente passando
    //o nó da subarvore 
    // isso vai fazer verificar a árvore toda, quando chegar nos filhos das folhas, ou seja: nullptr, há sabe que não tá lá

}

// montagem recursiva: 

void ArvBin :: montaArvore()
{
    if(!vazia())
    {
        cout << "Arvore montada" << endl;
    }
    else {
        raiz = auxMontaArvore();
    }
    //se pressupoe que monta a árvore tudo de uma vez, por isso a crítica
}
NoArv* ArvBin ::  auxMontaArvore()
{
    string linha;
    cin >> linha;
    if(linha !=  "null" && linha != "NULL")
    {
        istringstream ent (linha);
        int val;
        ent >> val;

        NoArv * p = new NoArv(); 
        p->setInfo(val);
        p->setEsq(auxMontaArvore());
        p->setDir(auxMontaArvore());
        return p; 
    }
    else 
    {
        return nullptr;
    }
}


// Montagem por nós:

void ArvBin :: insere(int val)
{
    raiz = auxInsere(raiz, val);
    // monta nó por  vez, por isso sem crítica
}
NoArv * ArvBin :: auxInsere(NoArv*p, int val)
{
    if( p == nullptr)
    {
        p = new NoArv();
        p->setInfo(val);
        p->setEsq(nullptr);
        p->setDir(nullptr);
        //se ta vazia, cria uma raiz-folha
    }
    else 
    {
        char direcao;
        cin >> direcao;
        if(direcao == 'e' || direcao == 'E')
        {
            p->setEsq(auxInsere(p->getEsq(),val));
        }
        else
        {
            p->setDir(auxInsere(p->getDir(),val));
        }
    }
    return p;
}


//auxiliar do destrutor

void ArvBin :: libera(NoArv*p)
{
    if( p != nullptr)
    {
        libera(p->getEsq());
        libera(p->getDir());
        delete p;
    }
    //é uma passagem pós ordem
}


// percurso em largura

int ArvBin :: altura()
{
    // a altura de um nó é a distância entre o nó e seu descentente mais afastado(folha)
    // árvore vazia tem altura -1 e quando só tem 1, a altura é 0
    return auxAltura(raiz);
}


int ArvBin :: auxAltura(NoArv*p)
{
    if(p == nullptr)
    {
        return -1;
    }else
    {
        int he = auxAltura(p->getEsq());
        int hd = auxAltura(p->getDir());
        if(he>hd)
        {
            return 1 + he;
        }else
        {
            return 1 + hd;
        }
    }
}



void ArvBin:: percursoLargura()
{
    if (raiz != nullptr)
    {
        NoArv* p;
        FilaEncad f;
        f.enfileira(raiz);
        while(!f.vazia)
        {
            p = f.desenfileira();
            cout << p->getInfo() <<endl;
            if(p->getEsq() != nullptr)
            {
                f.enfileira(p->getEsq());
            }
            if(p->getDir() != nullptr)
            {
                f.enfileira(p->getDir());
            }
        }
    }
    
}