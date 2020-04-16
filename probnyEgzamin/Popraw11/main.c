#include <stdio.h>
#include <stdlib.h>

double funkcja(int*const a)
{
    *a=10;
    a+=1;
    return *a;
}

int main()
{
    int x=3,y=4;
    double c=funkcja(&x);
    return 0;
}
