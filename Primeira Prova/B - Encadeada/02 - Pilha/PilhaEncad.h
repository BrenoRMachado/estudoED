#include "No.h"
class PilhaEncad{
    private:
    No *topo; 

    public:
    PilhaEncad();
    ~PilhaEncad();

    int getTopo(); //
    void empilha(int val); //
    int desempilha(int val); //
    bool vazia();//

};