class ListaCont{
    private:

    int max;    //vai ser a capacidade máxima de elementos, limite da lista
    int n;      //vai ser a quantidade de nós na lista
    int *vet;   //vai ser o ponteiro pra nossa lista
    
    public:

    ListaCont(int tam);
    ~ListaCont();
    int get(int k);
    void set(int k, int valor);

    void insereFinal();
    void removeFinal();
    void insereK();
    void removeK();



};