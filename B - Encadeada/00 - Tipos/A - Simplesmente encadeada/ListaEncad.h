#include "No.h"
class ListaEncad{
    private:
    No *primeiro; 

    public:
    ListaEncad();
    ~ListaEncad();

    void insereInicio(int val);
    bool busca(int val);
    void removeInicio();
};