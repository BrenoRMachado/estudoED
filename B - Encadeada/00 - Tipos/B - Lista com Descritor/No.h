class No{
    private:
    //começamos definindo o nó
    //cada nó possui um valor e um ponteiro
    int info; //valor
    No *prox; //ponteiro. No caso ele vai apontar para outro nó, que é um objeto. Por isso é um ponteiro do tipo do objeto que vai apontar

    public:
    No();
    ~No();
     
    int getInfo(); //get para retornar o valor
    No *getProx(); //get para retornar a informação

    void setInfo(int val); //set para mudar o valor
    void setProx(No *p); //set para mudar o ponteiro. O parâmetro segue o mesmo raciocínio do atributo

};