#include "NoArv.h"
class FilaEncad {
    private:
        NoArv* inicio;
        NoArv* fim;

    public:
        FilaEncad();
        ~FilaEncad();

        NoArv* getInicio();
        void enfileira(NoArv*p);
        NoArv* desenfileira();
        bool vazia();
};