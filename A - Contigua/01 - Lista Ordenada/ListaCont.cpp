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

/*

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

*/

void ListaCont :: insere(int val)
{
    int i;
    if(n < max)
    {
        for(i = n-1; i>=0 && vet[i] >= val; i--) //vai descendo no vetor até achar um valor menor que val
        {
            vet[i+1] = vet[i]; //passa os valores maiores que val para a direita 
        }
        vet[i+1] = val; //i+1 é = a o primeiro índice em que o valor é menor que val,  + 1. Dai adicionamos o valo no lugar em que há um valor clonado( pois antes do loop encerrar, o anterior foi copiado para a direita)
        n++;
    }
    else 
    {
        cout << "Vetor cheio" <<endl;
    }
}
void ListaCont :: remove(int val)
{
    int k = buscaBinaria(val); //obtemos o índice do valor que desejamos remover
    if( k >= 0 && k < n) //não precisamos verificar se o vetor já está vazio, se o buscaBinaria retornar -1, já concluímos que o valor não está em nenhum lugar
    {
        for(int i = k ; i<n-1 ; i++) //a partir do valor que desejamos remover, vamos copiando os valores da direita para esquerda 
        {
            vet[i] = vet[i+1]; 
        }
        n--; // A lista diminuiu. O valor da extremidade foi desconsiderado.
    }
}

/*

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

*/


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

// TODO: Novos métodos

int ListaCont :: buscaBinaria(int val)
{
    int esq = 0; //indice menor
    int dir = n-1;  //indice maior

    while(esq <= dir) //enquanto o menor não alcança o maior
    {
        int meio = (esq + dir) / 2 ; //vamos usa-lo para dividir a lista na metáde e descobrir em qual porção o valor está
        //por ser um while, lembra que teremos meios diferentes à medida que o código avança. No pior caso, dividimos a lista em várias até achar ele
        if(val > vet[meio])
        {
            //se o valor existir, vai estar depois do meio
            esq = meio + 1; //leva o menor indice pra porção após o meio
        }
        else if(val < vet[meio])
        {
            //se o valor existir, vai estar antes do meio
            dir = meio - 1; //leva o maior indice pra porção antes do meio
        }
        else
        {
            //se o valor existir, é o do meio
            return meio;
        }
    }
    //se não existir:
    return -1;
}

bool ListaCont :: busca(int val)
{
    int k = buscaBinaria(val); //encontramos o índice do valor desejado
    return (k>= 0 && k<n); //retorna true se o índice for válido (achamos o valor na lista)
}