#include <iostream> 
#include "ListaCont.h"
using namespace std;

ListaCont :: ListaCont(int tam)
{
    max = tam;
    n = 0;
    vet = new int[max];
}
ListaCont :: ~ListaCont()
{
    delete [] vet;
}

int ListaCont :: get(int k)
{
    if(k>=0 && k<n)
    {
        return vet[k];
    }
    else
    {
        cout << "Indice Inválido!" <<endl;
        exit(1);
    }
}

void ListaCont :: set(int k, int val)
{
    if(k>=0 && k<n)
    {
        vet[k] = val;
    }
    else 
    {
        cout <<"Indice Inválido!" <<endl;
        exit(1);
    }
}

void ListaCont :: insereFinal(int val)
{   
    if(n == max)
    {
        cout << "Vetor cheio!" <<endl;
    }
    else
    {
        vet[n] = val;
        n++;
    }
}

void ListaCont :: removeFinal(){
    if(n == 0)
    {
        cout << "Lista Vazia!"<<endl;
    }
    else
    {
        n--;
    }
}

void ListaCont :: insereK(int k, int val)
{
    if(n == max)
    {
        cout << "Vetor cheio!"<<endl;
    } else if( k >= 0 && k < n)
    {
        for( int i = n ; i > k ; i --)
        {
            vet[i] = vet[i - 1];
        }
        vet[k] = val;
        n++;
    }
    else{
    cout << "Indice Invállido!"<< endl;
    }
}

void ListaCont :: removeK(int k)
{
    if(k>=0 && k<n)
    {
        for(int i = k ; k<n - 1 ; i++)
        {
            vet[i] = vet[i + 1];
        }
        n--;
    }
    else{
        cout << "Indice Inválido!"<<endl;
    }
}