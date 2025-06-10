#include <iostream>
#include "ListaCont.h"
using namespace std;

ListaCont :: ListaCont(int val)
{
    max = val;
    n = 0; // lista começa vazia
    vet = new int [max]; //vetor dinâmico que será usado
}

ListaCont :: ~ListaCont()
{
    delete [] vet;
}

int ListaCont :: getNo(int k)
{
    //deve ter uma verificação se o indice é válido
    //deve retornar o valor do indice k

    if( k >= 0 && k<n ) 
    {
        return vet[k];
    }
    else 
    {
        cout << "Indice Inválido" << endl;
        exit(1);
    }
}

void ListaCont :: setNo(int k , int val)
{
    //deve ter uma verificação se o indice é válido
    // deve definir o nó da posição k como o valor de val

    if( k>= 0 && k < n)
    {
        vet[k] = val;
    }
    else
    {
        cout << "Indice Inválido" << endl;
    }
}

void ListaCont :: insereFinal(int val)
{
    //deve verificar se o vetor está cheio. Afinal, precisa ter espaço para inserir
    //deve incrementar n. Afinal, a quantidade de nós aumentou

    if(n < max)
    {
        vet[n] = val;
        n++;
    }
    else 
    {
        cout << "Vetor cheio" <<endl;
    }
}
void ListaCont :: removeFinal()
{
    //deve verificar se o vetor está vazio. Afinal, não vamos remover o que não existe
    //deve decrementar n. Afinal, a quantidade de nós diminuiu

    if( n != 0)
    {
        n --;
    }
    else 
    {
        cout << "Vetor vazio" <<endl;
    }
    
}

void ListaCont :: insereK(int k, int val)
{
    //deve ter uma verificação se o indice é válido
    //deve verificar se o vetor está cheio. Afinal, precisa ter espaço para inserir
    //deve empurrar os outros nós para o lado
    //deve incrementar n. Afinal, a quantidade de nós aumentou

    if( n < max ) 
    {
        if(k>=0 && k<n) 
        {
            for(int i = n ; i>k ; i--)
            {
                vet[i] = vet[i-1]; //o atual recebe o seu antecessor, empurrando os elementos para o lado
            }
            setNo(k , val); //inserimos o valor no espaço que abrimos
            n++;
        }
        else{
            cout << "O indice é inválido" <<endl;
        }
    }
    else 
    {
    cout << "O vetor está cheio" <<endl;
    }

}
void ListaCont :: removeK(int k)
{
    //deve ter uma verificação se o indice é válido
    //deve verificar se o vetor está vazio. Afinal, não vamos remover o que não existe
    // sobrescreve os próximos valores pra trás
    //deve decrementar n. Afinal, a quantidade de nós diminuiu

    if( n != 0)
    {
        if( k >= 0 && k<n)
        {
            for(int i = k ; k<n-1 ; i++)
            {
                vet[i] = vet[i+1]; //sobrescrevemos com o valor dos próximos. n-1, pq não queremos catar de onde não tem valor
            }
            n--;
        }
    }
    else
    {
        cout << "Vetor Vazio!" <<endl;
    }
}

void ListaCont :: imprimirLista()
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << vet[i] << " ";
    }
}

int ListaCont :: numeroNos()
{
    int quantidade = 0;
    for(int i = 0; i<n ; i++)
    {
        quantidade++;
    }
    return quantidade;
}