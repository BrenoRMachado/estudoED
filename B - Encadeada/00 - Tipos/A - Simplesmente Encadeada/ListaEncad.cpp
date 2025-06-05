#include <iostream>
#include "ListaEncad.h"
using namespace std;

ListaEncad :: ListaEncad()
{
    primeiro = nullptr; //a lista começa vazia
}

ListaEncad :: ~ListaEncad()
{
    //analise ele depois de entender os métodos abaixo:

    // Bora lá: Criamos vários obejtos dinâmicomente, precisamos deleta-los
    // Vamos percorrer a "corrente" da forma diferente que aprendemos em busca
    // Em cada laço, deletamos o que o p atual aponta. Mas não podemos deletar o que estamos usando para percorrer
    // Vamos usar um ponteiro temporário para sempre apontar para o próximo valor de p. Deletamos o atual e no fim o p vai apontar para o que o t apontou.
    // o ponteiro temporario vai sempre estar na frente de p

    No * p = primeiro;
    while ( p != nullptr) //enquanto não chega no fim da lista
    {
        No * t = p->getProx(); //getProx para t apontar para o próximo, dessa forma não perdemos nosso meio de locomoção 
        delete p ; //vai deletar o que está alocado no p atual
        p = t; // t vai incrementar p 
    }
}

void ListaEncad :: insereInicio(int val)
{
    //O método de inserir vai seguir uma lógica básica: 
    // Criamos um objeto do No e atribuimos a ele suas informações 
    // Note que para suas informações, seu valor é o passado. E o seu ponteiro será para o poteiro primeiro. PRIMEIRO? É 
    // Vamos apontando para trás. Montamos a lista "de trás para frente".
    // No final fazemos primeiro apontar para o nó criado, assim o ponteiro primeiro "anda para frente"

    No *p = new No(); //cria o nó

    p->setInfo(val);    //atribui o valor de parâmetro para ser o valor desse nó
    p->setProx(primeiro);   //faz o ponteiro apontar para mesma coisa que primeiro aponta, que é null. Depois será o primeiro nó

    primeiro = p; //primeiro agora aponta para o nó atual

    //No final das contas, o primeiro nó a ser criado será o último em uma representação visual. E o último nó aponta para null, que é o que primeiro aponta
    //no começo da fila. Conforme vamos adicionar novos nós, primeiro estara apontando para o último nó criado. Por isso os nós sempre apontarão um pras o outro. 
    //O último nó criado vai ser o primeiro de uma representação visual e primeiro apontará para ele
}
bool ListaEncad :: busca(int val)
{
    //vamos simular uma procura de elemento em vetor
    //não temos um vetor, temos uma "corrente" de valores
    // Podemos criar um ponteiro que recebe primeiro e atrávez de um looping, usar os ponetiros para se buscar qual ponteiro aponta para o nó que possui o valor desejado

    No * p = primeiro;

    while( p != nullptr ) //enquanto não chegar no último npo
    {
        if(p->getInfo() == val) //comparamos os valores
        {
            return true;
        }
        p = p->getProx(); //incrementamos o ponteiro fazendo ele apontar pro proximo nó
    }
    return false;

    //podemos fazer o mesmo com um for 
    /*
    for(no*p = primeiro ; p !=nullptr ; p = p->getprox)
        if...
    */
}

void ListaEncad :: removeInicio()
{
    // criamos um ponteiro p para fazer a operação de remoção
    // Nos certificamos que a lista não está vazia
    // fazemos a remoção fazendo o nosso ponteiro p apontar para primeiro. O primeiro aponta para o primeiro nó, que afinal, está no inicio
    //  primeiro vai apontar paro o próximo, afinal vamos remover o atual primeiro
    // deletamos o nó 

    No * p;
    if(primeiro != nullptr)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;
    }
    else 
    {
        cout << "Lista Vazia!"<<endl;
        exit(1);
    }
    
}


