#include "No.h"
class ListaEncad{
    private:
    No *primeiro; 
    No *ultimo;
    int n;
    //O descritor é o conjunto de dados que descrevem as propriedades da lista
    //Na simples, só usavamos o "primeiro"
    //Seria interessante ter um "ultimo" para apontar para o último nó da corrente e um "n" para guardar
    //a quantidade de nós

    public:
    ListaEncad();
    ~ListaEncad();

    void insereInicio(int val);
    void insereFinal(int val); //com um descritor para o ultimo, podemos inserir no final
    bool busca(int val);
    void removeInicio();
    void removeFinal(); // "" podemos remover no final

    void imprime();
};