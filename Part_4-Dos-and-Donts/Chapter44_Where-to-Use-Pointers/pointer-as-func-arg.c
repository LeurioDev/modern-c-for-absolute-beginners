/*  Pointers as Function Arguments  -   Functions can have parameters of pointer types. We pass pointers to these functions as arguments. The following example defines a function that expects an integer pointer as an argument and modifies the pointed-to value. Example:
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
    int *p = &x;
    printf("The pointed-to value before the function call: %d\n", *p);
    myfunction(p);
    printf("The pointed-to value after the function call: %d\n", *p);
}
/*  This example defines a function that accepts a pointer as an argument. The function then modifies the pinted-to value by dereferencing an argument. In the main function, we have one pointer p that points to an int variable called x. We pass that pointer to our function, and the function modifies the pointed-to value.
 */
