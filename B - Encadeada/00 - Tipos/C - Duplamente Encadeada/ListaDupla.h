#include "NoDuplo.h"
class ListaDupla{
    private:
    NoDuplo *primeiro; 
    NoDuplo *ultimo;
    int n;

    public:
    ListaDupla();
    ~ListaDupla();

    bool busca(int val);

    void insereInicio(int val);
    void removeInicio();

    //agora, com ponteiro para o final, podemos inserir e remover lá
    void insereFinal(int val);
    void removeFinal();

    void imprime();
    void imprimeReverso();
    
};