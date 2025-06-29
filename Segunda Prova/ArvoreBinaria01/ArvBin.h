#include "NoArv.h"

class ArvBin {
    private:

        NoArv* raiz; // Ponteiro para a Raiz da árvore

    public:

        ArvBin();
        ~ArvBin();

        int getRaiz();

        void cria(int val, ArvBin *sae, ArvBin *sad);

        bool vazia();

        void imprime();

        bool busca(int val);
};