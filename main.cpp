#include "stdio.h"
#include "mbed.h"

int main()
{
    int a = 10, b = 20, c = 30, d,e;
    
    d = a + b;
    e = c - d;
    printf("Numbers a + b = d = %d\n",d);
    printf("Numbers c - d = e = %d",e);
    return 0;
}
