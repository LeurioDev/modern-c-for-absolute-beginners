/* To pass a regular variable to our function accepting a pointer, we pass in the address of a variable/object. Example:
 */

#include <stdio.h>
#include <stdlib.h>

void myfunction(int *arg)
{
    *arg = 456;
}

int main(void)
{
    int x = 123;
    printf("The value before the function call: %d\n", x);
    myfunction(&x); // pass in the address of x
    printf("The value after the function call: %d\n", x);
}

/*  This example uses the address of x (&x) expression as an argument for our function accepting a pointer type. We say we pass the argument by address/reference.
 */
