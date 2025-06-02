class ListaCont{
    private:
    int max; //valor máximo para tamanho  da lista
    int n; //quantidade de n de nós
    int *vet; //ponteiro que vou usar para alocar um vetor inteiro dinâmico 

    public:
    ListaCont(int val);
    ~ListaCont();

    int getNo(int k); //indice k para identificar qual nó
    void setNo(int k, int val); //indice k para identificar qual nó
    
    void insereFinal(int val);
    void removeFinal();

    void insereK(int k, int val);
    void removeK(int k);

    void imprimirLista();
    int numeroNos();

};