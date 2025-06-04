#include <iostream>
#include "PilhaCont.h"
using namespace std;

PilhaCont :: PilhaCont(int val)
{
    max = val;
    topo = -1; //Como a lista ainda está vazia, o topo não existe.
    vet = new int [max]; 
}

PilhaCont :: ~PilhaCont()
{
    delete [] vet;
}

int PilhaCont :: getTopo()
{
    if(topo != -1)
    {
        return vet[topo];
    }
    else
    {
        cout << "Pilha vazia!" <<endl;
        exit(1);
    }
}

/*
void PilhaCont :: setNo(int k , int val)
{

    if( k>= 0 && k < n)
    {
        vet[k] = val;
    }
    else
    {
        cout << "Indice Inválido" << endl;
    }
}

void PilhaCont :: insereFinal(int val)
{

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
void PilhaCont :: removeFinal()
{

    if( n != 0)
    {
        n --;
    }
    else 
    {
        cout << "Vetor vazio" <<endl;
    }
    
}

void PilhaCont :: insereK(int k, int val)
{

    if( n < max ) 
    {
        if(k>=0 && k<n) 
        {
            for(int i = n ; i>k ; i--)
            {
                vet[i] = vet[i-1]; 
            }
            setNo(k , val); 
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
void PilhaCont :: removeK(int k)
{

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

*/

bool PilhaCont :: vazia()
{
    return (topo == -1);
}

void PilhaCont :: empilha(int val)
{
    if(topo < (max-1))
    {
        topo++;
        vet[topo] = val;
    }
    else
    {
        cout << "Pilha cheia!"<<endl;
        exit(2);
    }
}

int PilhaCont :: desempilha()
{
    if(topo > -1)
    {
        topo--; //diminuir o topo ja faz a pilha diminuir
        return vet[topo+1]; //retorna o valor desempilhada (as vezes é necessário saber quem vc tirou, talvez para usa-lo)
    }
    else 
    {
        cout << "Pilha vazia!"<<endl;
        exit(1);
    }
}

void PilhaCont :: imprimirLista()
{
    for(int i = 0 ; i < topo ; i++)
    {
        cout << vet[i] << " ";
    }
}

int PilhaCont :: numeroNos()
{
    int quantidade = 0;
    for(int i = 0; i<topo ; i++)
    {
        quantidade++;
    }
    return quantidade;
}