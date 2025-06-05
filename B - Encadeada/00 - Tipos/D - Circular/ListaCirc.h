#include "NoDuplo.h"
class ListaCirc{
    private:
    NoDuplo *primeiro; 
    NoDuplo *ultimo;
    int n;

    public:
    ListaCirc();
    ~ListaCirc();

    bool busca(int val);

    void insereInicio(int val);
    void removeInicio();

    void insereFinal(int val);
    void removeFinal();

    void imprime();
    void imprimeReverso();
    
};