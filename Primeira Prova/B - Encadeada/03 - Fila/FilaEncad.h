#include "No.h"
class FilaEncad{
    private:
    No * inicio;
    No * fim;

    public:
    FilaEncad();
    ~FilaEncad();

    int getInicio();
    void enfileira(int val);
    int desenfileira();
    bool vazia();
};