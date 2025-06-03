class ListaCont{
    private:
    int max; // O max é o atributo que representa o valor máximo que o vetor vai comportar. Ele é definido pelo usuário
    int n; //O n é o atributo que representa a quantidade de nós que a Lista possui. Ele começa nulo e é incrementado ou decrementado de acordo com as operações feitas na lista
    int *vet; // O vet é o ponteiro que usamos para alocar um vetor inteiro dinâmico. Damos vida à lista Contigua usando um vetor dinâmico. 
    //nós são os elementos da lista

    public:
    ListaCont(int val); //o construtor vai receber um valor do usuário para settar qual é o tamanho max
    ~ListaCont(); 

    int getNo(int k); //O usuário passa o indice do nó que ele quer receber
    void setNo(int k, int val); //O usuário passa o índice do nó que que ele quer mudar o valor e qual o valor ele quer que seja atribuido
    
    void insereFinal(int val);//O usuário passa o valor que ele quer que seja inserido
    void removeFinal();

    void insereK(int k, int val);//O usuário passa o valor que ele quer que seja inserido e em qual índice quer inserir
    void removeK(int k);//O usuário passa em qual índice está o valor que ele quer remover

    void imprimirLista(); //Não é pre-requisito (apenas ilustrativo)
    int numeroNos(); //Não é pre-requisito (apenas ilustrativo)


    //Dica: Para executar + de um arquivo por vez no VScode, use:
    // g++ (nome dos arquivos) -o ouput.exe 
    // .\output.exe

    //Ex: g++ main.cpp ListaCont.cpp -o output.exe
    // .\output.exe
};