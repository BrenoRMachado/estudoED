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


NoDuplo* NoDuplo :: getProx()
{
    return prox;
}

NoDuplo* NoDuplo :: getAnt()
{
    return ant;
}


void NoDuplo :: setProx(NoDuplo *p)
{
    prox = p;
}

void NoDuplo :: setAnt(NoDuplo *p)
{
    ant = p;
}

int NoDuplo :: getInfo()
{
    return info;
}

void NoDuplo :: setInfo(int val)
{
    info = val;
}