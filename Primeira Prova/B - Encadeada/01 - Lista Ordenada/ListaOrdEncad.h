#include "No.h"
class ListaOrdEncad{
    private:
    No *primeiro; 

    public:
    ListaOrdEncad();
    ~ListaOrdEncad();

    void insere(int val); //não inserimos mais no ínicio. Inserimos onde ela permanece ordenada
    bool busca(int val);
    //void removeInicio();
    void imprime();
};