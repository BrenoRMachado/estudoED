class ListaCont{
    private:
    int max; 
    int n; 
    int *vet;
    
    int buscaBinaria(int val); //Adiciona um método privado que vamos usar para achar valores(não usaremos indices)

    public:
    ListaCont(int val); 
    ~ListaCont(); 

    int getNo(int k); 
    //void setNo(int k, int val);  //Não temos mais o set
    
    void insere(int val); //agora só temos 1 método para inserir. Ele insere de forma a manter a fila ordenada
    void remove(); //Agora só temos 1 método para remover. Ele remove de forma a manter a fila ordenada

    //void insereK(int k, int val);
    //void removeK(int k);

    void imprimirLista();
    int numeroNos(); 

    // TODO: Novo método:
    
    bool busca(int val); //vai utilizar a busca binária para encontrar o índice do valor desejado

};