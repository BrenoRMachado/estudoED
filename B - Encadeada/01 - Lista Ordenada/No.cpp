#include <iostream>
#include "No.h"

No :: No()
{
    info = 0;
    prox = nullptr; 
}

No :: ~No()
{}

int No :: getInfo()
{
    return info;
}
No* No :: getProx()
{
    return prox;
}

void No :: setInfo(int val)
{
    info = val;
}
void No :: setProx(No *p)
{
    prox = p;
}