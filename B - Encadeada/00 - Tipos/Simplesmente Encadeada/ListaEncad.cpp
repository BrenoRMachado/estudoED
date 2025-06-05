#include <iostream>
#include "ListaEncad.h"

ListaEncad :: ListaEncad()
{
    primeiro = nullptr; //a lista começa vazia
}

ListaEncad :: ~ListaEncad()
{}

void ListaEncad :: insereInicio(int val)
{
    //O método de inserir vai seguir uma lógica básica: 
    // Criamos um objeto do No e atribuimos a ele suas informações 
    // Note que para suas informações, seu valor é o passado. E o seu ponteiro será para o poteiro primeiro. PRIMEIRO? É 
    // Vamos apontando para trás. Montamos a lista "de trás para frente".
    // No final fazemos primeiro apontar para o nó criado, assim o ponteiro primeiro "anda para frente"

    No *p = new No(); //cria o nó

    p->setInfo(val);    //atribui o valor de parâmetro para ser o valor desse nó
    p->setProx(primeiro);   //faz o ponteiro apontar para mesma coisa que primeiro aponta, que é null

    primeiro = p; //primeiro agora aponta para o nó atual

    //No final das contas, o primeiro nó a ser criado será o último em uma representação visual. E o último nó aponta para null, que é o que primeiro aponta
    //no começo da fila. Conforme vamos adicionar novos nós, primeiro estara apontando para o último nó criado. Por isso os nós sempre apontarão um pras o outro. 
    //O último nó criado vai ser o primeiro de uma representação visual e primeiro apontará para ele
}
bool ListaEncad :: busca(int val)
{

}


