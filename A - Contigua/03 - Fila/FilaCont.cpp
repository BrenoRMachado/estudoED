#include <iostream>
#include "FilaCont.h"
using namespace std;

FilaCont :: FilaCont(int val)
{
    max = val;
    //n = 0;
    inicio = 0;
    fim = 0; 
    vet = new int [max];
}

FilaCont :: ~FilaCont()
{
    delete [] vet;
}

/*
int FilaCont :: getNo(int k)
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

void FilaCont :: setNo(int k , int val)
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

void FilaCont :: insereFinal(int val)
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
void FilaCont :: removeFinal()
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

void FilaCont :: insereK(int k, int val)
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
void FilaCont :: removeK(int k)
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

int FilaCont :: getInicio()
{

}
void FilaCont :: enfileira(int val)
{

}
void FilaCont :: desenfileira()
{

}
bool FilaCont :: vazia()
{
    return (inicio == fim);
}

void FilaCont :: imprimirLista()
{
    for(int i = 0 ; i < fim ; i++)
    {
        cout << vet[i] << " ";
    }
}

int FilaCont :: numeroNos()
{
    int quantidade = 0;
    for(int i = 0; i<fim ; i++)
    {
        quantidade++;
    }
    return quantidade;
}