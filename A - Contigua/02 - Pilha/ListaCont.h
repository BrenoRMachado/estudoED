class ListaCont{
    private:
    int max;
    int n; 
    int *vet; 

    public:
    ListaCont(int val); 
    ~ListaCont(); 

    int getNo(int k);
    void setNo(int k, int val); 
    
    void insereFinal(int val);
    void removeFinal();

    void insereK(int k, int val);
    void removeK(int k);

    void imprimirLista(); 
    int numeroNos(); 

};