class ListaCont
{
    public:
        ListaCont(int tam); //na hora de criarmos a lista, passamos o tamanho dela
        ~ListaCont();

        int get(int k); //get que recebe o valor k do nó
        void set(int k, int val); //set que recebe o valor k do nó e ?

        void insereFinal(int val);
        void removeFinal();
        void insereK(int k, int val);
        void removeK(int k);

    private:
        int max; //capacidade máxima de elementos   
        int n;  //quantidade de nós
        int *vet; //vetor que armazena lista
        
}