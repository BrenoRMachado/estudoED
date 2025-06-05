#include <iostream>
#include "ListaEncad.h"
using namespace std;

ListaEncad :: ListaEncad()
{
    primeiro = nullptr; 
    ultimo = nullptr;
    n = 0;
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

    n++; //agora temos um descritor para a quantidade de nós
    // Lembra que o primeiro nó adicionado é  o último na representação da lista? Então fazemos isso:
    if(n == 1)
    {
        ultimo = p;
    }
    //Assim garantimos que último deixa de apontar para o vazio e irá apontar para o último nó sempre

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

void ListaEncad :: removeInicio(int val)
{

    No * p;
    if(primeiro != nullptr)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;

        //precisamos atualizar o descritor
        n--;
        if(n == 0)
        {
            ultimo = nullptr; //se removermos de uma lista com 1 nó, a lista volta a estar vazia
        }
    }
    else 
    {
        cout << "Lista Vazia!"<<endl;
        exit(1);
    }
}


 void ListaEncad :: insereFinal(int val)
 {
    //implemento depois
 }

 void ListaEncad :: removeFinal(int val)
 {
    //implemento depois
 }

void :: imprime()
{
    //implemento depois
}