class NoArv {
    private:
        int info; //informação de cada nó
        NoArv* esq; //ponteiro para o filho da esqueda
        NoArv* dir; //ponteiro para o filho da direita

    public:

        NoArv();
        ~NoArv();

        int getInfo();
        NoArv* getEsq();
        NoArv* getDir();

        void setInfo(int val);
        void setEsq( NoArv* p);
        void setDir( NoArv* p);
};