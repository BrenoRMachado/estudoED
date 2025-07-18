#include <iostream>
#include "No.h"


No :: No()
{

}
No :: ~No()
{

}
NoArv* No :: getInfo()
{
    return info;
}
No* No :: getProx()
{
    return prox;
}
void No :: setInfo(NoArv*p)
{
    info = p;
}
void No :: setProx(No*p)
{
    prox = p;
}