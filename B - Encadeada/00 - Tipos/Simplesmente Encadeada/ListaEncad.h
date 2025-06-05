#include "No.h"
class ListaEncad{
    private:
    No *primeiro; //Vamos usar um ponteiro para apontar para o primeiro nó

    public:
    ListaEncad();
    ~ListaEncad();

    void insereInicio(int val);
    bool busca(int val);
};