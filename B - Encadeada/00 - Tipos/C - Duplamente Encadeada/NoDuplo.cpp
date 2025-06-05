#include <iostream>
#include "NoDuplo.h"

NoDuplo :: NoDuplo()
{
    info = 0;
    prox = nullptr;
    ant = nullptr;
}

NoDuplo :: ~NoDuplo()
{}

int NoDuplo :: getInfo()
{
    return info;
}
NoDuplo* NoDuplo :: getProx()
{
    return prox;
}

NoDuplo* NoDuplo :: getAnt()
{
    return ant;
}

void NoDuplo :: setInfo(int val)
{
    info = val;
}
void NoDuplo :: setProx(NoDuplo *p)
{
    prox = p;
}

void NoDuplo :: setAnt(NoDuplo *p)
{
    ant = p;
}