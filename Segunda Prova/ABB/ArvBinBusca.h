#include "NoArv.h"
class ArvBinBusca {

    private: 

    NoArv* raiz;

    bool auxBusca(No *p, int val);
    void insere(int x);
    int min();

    void remove(int x);

    public:

    ArvBinBusca();
    ~ArvBinBusca();

    int getRaiz();

    bool vazia();

    bool busca(int val);

    void remove(int val);

    No* auxInsere(No *p, int x);

    int auxMin(No *p);

    void removeMin();
    No* auxRemoveMin(No * p);


    No* auxRemove(No *p, int x);

    No * removeFolha(No * p);

    No* remove1Filho(No *p);

    No* menorSubArvDireita(No *p);

};