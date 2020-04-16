#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *a;
    return *b;
}

int main()
{
    int tab[] = {3,-3,5,2,9,8};
    int *wsk=tab-2;
    int b = *(wsk+=4); //b=
    int c = b+2; // b=  , c=
    int d = foo(&b,&c); // b=  , c=  , d=
    int e = (wsk+=-1)[2]; // b=  , c=  , d=  , e=
    e = (d *= 8) + (c /= 3); // b=  , c=  , d=  , e=
    c = d - (b+=8); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    return 0;
}
