class NoDuplo{
    private:

    int info; 
    NoDuplo *prox; 
    NoDuplo *ant;

    public:
    NoDuplo();
    ~NoDuplo();
     
    NoDuplo *getProx(); 
    NoDuplo *getAnt();

    void setProx(NoDuplo *p);
    void setAnt(NoDuplo *p);
    
    void setInfo(int val); 
    int getInfo(); 
};