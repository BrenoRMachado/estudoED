#include "NoArv.h"
class ArvBin {

    private: 

    NoArv* raiz;

    public:

    ArvBin();
    ~ArvBin();

    int getRaiz();

    void cria(int val, ArvBin *sae, ArvBin *sad);

    bool vazia();

    void imprime();
    void auxImprime(NoArv* p);

    bool busca(int val);

};