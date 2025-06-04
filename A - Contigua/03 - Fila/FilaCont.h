class FilaCont{
    private:
    int max;
    int n; 
    int *vet; 

    public:
    FilaCont(int val); 
    ~FilaCont(); 

    int getNo(int k); 
    void setNo(int k, int val); 
    
    void insereFinal(int val);
    void removeFinal();

    void insereK(int k, int val);
    void removeK(int k);

    void imprimirLista();
    int numeroNos(); 

};