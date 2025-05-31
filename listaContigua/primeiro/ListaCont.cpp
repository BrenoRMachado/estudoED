#include <iostream>
#include "ListaCont.h"
using namespace std;

ListaCont :: ListaCont(int tam) //construtor da nossa lista
{
    //inicializa nossos dados. Que dados temos? O tamanho limite da nossa lista (max) 
    //a quantidade de nós. ( n = 0 , afinal não começamos a  brincar com ela)
    //ponteiro para nosso vetor. (bora criar nosso vetor dinâmico)
    //o usuário vai passar o valor do max por parâmetroS
    //não usamos o this igual no java, pois aqui o this é um ponteiro
    max = tam;
    n = 0;
    vet = new int [max];
}

ListaCont :: ~ListaCont() //destrutor da nossa lista
{
    delete [] vet;
}

int ListaCont :: get(int k)
{
    if(k<n)
    {
        cout << "Nó inexistente" <<endl;
        exit(1);
    }
    //método de consulta, quero saber qual o valor do nó k
    return vet[k]; 
}

void ListaCont :: set(int k ,  int valor)
{
    if(k<n)
    {
        cout << "Nó inexistente" <<endl;
        exit(1);
    }
    //método de alteração, quero alterar o valor do nó k
    vet[k] = valor;
}








