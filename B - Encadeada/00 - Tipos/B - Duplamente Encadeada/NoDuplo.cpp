#include <iostream>
#include "NoDuplo.h"

NoDuplo :: NoDuplo()
{
    info = 0;
    prox = nullptr;
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

void NoDuplo :: setInfo(int val)
{
    info = val;
}
void NoDuplo :: setProx(NoDuplo *p)
{
    prox = p;
}