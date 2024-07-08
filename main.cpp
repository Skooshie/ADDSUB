#include "stdio.h"
#include "mbed.h"

int main()
    // Set up integers a,b,c,d,e 
{
    int a = 10, b = 20, c = 30, d, e;

    //Do the Addition and the subtraction.

    d = a + b;
    e = c - d;

    // Send the results to the screen

    printf("Addition a + b = d = %d\n",d);
    printf("Subtraction c - d = e = %d\n",e);
    return 0;
}
