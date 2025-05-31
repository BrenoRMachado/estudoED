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
    //método de consulta, quero saber qual o valor do nó k
    if( k >= 0 && k < n)
    {
        return vet[k]; 
    } else{
        cout << "nó inexistente" <<endl;
        exit(1);
    }
    
}

void ListaCont :: set(int k ,  int val)
{
    //método de alteração, quero alterar o valor do nó k
    if( k >= 0 && k < n)
    {
        vet[k] = val;
    } else{
        cout << "nó inexistente" <<endl;
        exit(1);
    }
}

void ListaCont :: insereFinal(int val)
{
    //só adicionar no n, já que n vai ser o próximo nó
    // se n = 0, o  indice n é o único nó
    if( n == max)
    {
        cout << "Lista está cheia!"<<endl;
        exit(1);
    }
    else 
    {
        vet[n] = val;
        n ++;
    }
}

void ListaCont :: removeFinal()
{
    //só transformar o ultimo em lixo de memória
    if( n == 0)
    {
        cout << "Lista vazia!" <<endl;
    }
    else
    {
        n--; //diminuindo o tamanho do vetor
    }
}

void ListaCont :: insereK(int k , int val)
{
    
}

void ListaCont :: removeK(int k)
{

}








