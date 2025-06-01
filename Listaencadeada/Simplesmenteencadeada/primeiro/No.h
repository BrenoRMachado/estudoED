class No
{
    private:
    int info; //informação (valor do nó)
    No *prox; //ponteiro para o próximo nó

    public:
    No();
    ~No();

    int getInfo();
    No* getProx();
    void setInfo();
    void setProx();



};