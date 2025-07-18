#include <iostream>
#include "NoArv.h"
using namespace std;

NoArv :: NoArv()
{
    info = 0;
    esq = nullptr;
    dir = nullptr;
}
NoArv ::  ~NoArv()
{

}

int NoArv :: getInfo()
{
    return info;
}
NoArv * NoArv :: getEsq()
{
    return esq;
}
NoArv * NoArv :: getDir()
{
    return dir;
}

void NoArv :: setInfo( int val)
{
    info = val;
}
void NoArv :: setEsq( NoArv* p )
{
    esq = p;
}
void NoArv :: setDir( NoArv* p )
{
    dir = p; 
}