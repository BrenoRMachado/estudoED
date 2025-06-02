#include <iostream>
#include "ListaCont.h"
using namespace std;

ListaCont :: ListaCont(int val)
{
    max = val;
    n = 0; // lista ainda vazia
    vet = new int [max]; //aloca vetor com tamanho max
}

ListaCont :: ~ListaCont()
{
    delete [] vet;
}

int ListaCont :: getNo(int k)
{
    //deve ter uma verificação se o indice é válido
    //deve retornar o valor do indice k

    if( k >= 0 && k<n)
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
    // deve verificar sse o indice está  certo
    // deve definir o nó  da posição k como um o valor de val

    if( k>= 0 && k < n)
    {
        vet[k] = val;
    }
    else
    {
        cout << "Indice Inválido" << endl;
        exit(1);
    }
}

void ListaCont :: insereFinal(int val)
{
    //deve verificar se o vetor está cheio
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
    //deve verificar que o vetor não está vazio
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
    //deve verificar se k é válido
    //deve empurrar o pessoal pro lado
    //deve verificar se o vetor não está cheio
    if( n < max )
    {
        if(k>=0 && k<n)
        {
            for(int i = n ; i>k ; i--)
            {
                vet[i] = vet[i-1];
            }
            vet[k] = val;
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
    //deve verificar se k é válido e se o vetor está  vazio
    // só sobrescreve os próximos valores pra trás
    if( n != 0)
    {
        if( k >= 0 && k<n)
        {
            for(int i = k ; k<n-1 ; i++)
            {
                vet[i] = vet[i+1];
            }
            n--;
        }
    }
    else
    {
        cout << "Vetor Vazio!" <<endl;
    }
}
