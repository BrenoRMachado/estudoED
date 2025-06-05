class FilaCont{
    private:
    int max;
    int inicio; //vai receber o indice do primeiro nó da lista
    int fim; //vai receber o indice do último nó do Índice
    int n; //usado para implementar a ideia de um vetor circular sem causar erro de inicio == fim
    int *vet; 

    int inc(int val); //método que incrementa o índice

    public:
    FilaCont(int val); 
    ~FilaCont(); 

    /*
    int getNo(int k); 
    void setNo(int k, int val); 
    
    void insereFinal(int val);
    void removeFinal();

    void insereK(int k, int val);
    void removeK(int k);
    */

    int getInicio(); 
    void enfileira(int val);
    int desenfileira();
    bool vazia();

    void imprimirLista();
    int numeroNos(); 

};