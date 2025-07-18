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
    bool auxBusca(NoArv *p , int val);


    //mais opções de montar árvore

    void montaArvore();
    NoArv * auxMontaArvore(); //monta de forma recursiva, permite criar tudo de uma vez. 
    //a cria() criava apenas um pedaço. permitia unir árvores já existentes, criando cada uma.

    void insere(int val);
    NoArv * auxInsere(NoArv* p, int val);
    // monta arvore inserindo nó, a ordem acaba ficando na conta do usuário. usamos a insere várias vezes para cada nó
};