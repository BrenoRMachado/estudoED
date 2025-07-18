//vai ser útil para percorrer em largura
#include "NoArv.h"

class No {
    private:
        NoArv*info; //ponteiro pro nó da árvore
        No *prox; //ponteiro para o próximo nó da fila

    public:
        No();
        ~No();
        NoArv* getInfo();
        No* getProx();
        void setInfo(NoArv*p);
        void setProx(No*prox);
};