class ListaCont{
    private:
    int max;
    int topo; //topo é usado para sabermos onde é o topo da lista. Afinal, só empilhamos e desempilhamos no topo 
    int *vet; 

    public:
    ListaCont(int val); 
    ~ListaCont(); 

    int getTopo(); //getNo virou getTopo, para recebermos onde está o topo.  
    //void setNo(int k, int val); 
    
    /*
    
    void insereFinal(int val);
    void removeFinal();

    void insereK(int k, int val);
    void removeK(int k);
    
    */

    //no lugar dos insere e remove, teremos empilha e desempilha
    void empilha(int val);
    int desempilha();

    //TODO: Novo método
    bool vazia();


    void imprimirLista(); 
    int numeroNos(); 

};