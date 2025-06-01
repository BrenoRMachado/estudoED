#include "No.h"
class ListaEncad{
    private:
    No * primeiro; // ponteiro para o primeiro nó
    public:

    ListaEncad();
    ~ListaEncad();

    void insereInicio(int val);
    bool busca(int val);
};