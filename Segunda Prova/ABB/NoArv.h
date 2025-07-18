class NoArv {

    private:

        int info;
        NoArv *esq;
        NoArv *dir;

    public:

        NoArv();
        ~NoArv();

        int getInfo();
        NoArv * getEsq();
        NoArv * getDir();

        void setInfo( int val);
        void setEsq( NoArv* p );
        void setDir( NoArv* p );

};