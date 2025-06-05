#include <iostream>
#include "No.h"

No :: No()
{
    info = 0;
    prox = nullptr; //lista vazia, então prox aponta pra nada
}

No :: ~No()
{
    //como não vamos lidar com nada dinâmico, não precisamos de deletes
}

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