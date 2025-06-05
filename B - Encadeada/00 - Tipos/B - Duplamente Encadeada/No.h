class No{
    private:

    int info; 
    No *prox; 

    public:
    No();
    ~No();
     
    int getInfo(); 
    No *getProx(); 

    void setInfo(int val); 
    void setProx(No *p);

};