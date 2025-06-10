class NoDuplo{
    private:
    // Na duplamente encadeada, ao invés de cada nó ter 1 ponteiro para o próximo nó os nós possuem 2 ponteiros.
    // Um ponteiro aponta para o próximo e outro para o anterior
    int info; 
    NoDuplo *prox; 
    NoDuplo *ant;

    public:
    NoDuplo();
    ~NoDuplo();
     
    //teremos gets e sets para os dois ponteiros:
    NoDuplo *getProx(); 
    NoDuplo *getAnt();

    void setProx(NoDuplo *p);
    void setAnt(NoDuplo *p);
    // ------------------------------------------
    
    void setInfo(int val); 
    int getInfo(); 
};