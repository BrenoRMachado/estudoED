#include <iostream>
#include "ListaCont.h"
using namespace std;

ListaCont :: ListaCont(int val)
{
    max = val;
    n = 0;
    vet = new int [max];
}

ListaCont :: ~ListaCont()
{
    delete [] vet;
}

int ListaCont :: getNo(int k)
{

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
void ListaCont :: removeK(int k)
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