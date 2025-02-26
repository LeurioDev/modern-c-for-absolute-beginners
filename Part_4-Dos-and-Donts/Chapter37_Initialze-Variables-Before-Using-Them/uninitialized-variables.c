/*  Initialize Variables Before Using Them  -   When we declare local variabl, they are not initialized. Their values are undetermined. Trying to access uninitialized variables causes undefined behavior. One use case would be trying to print local, uninitialized variables. The following example demonstrates what should be avoided:
 */

#include <stdio.h>

int main(void)
{
    char c;
    int x;
    double d;

    printf("Accessing uninitialized variables...\n");
    printf("%c, %d, %f\n", c, x, d); // undefined behavior
}

/* In this example, we are trying to access/print out uninitialized local variables. This leads to undefined behavior and, consequently, the strange output.
