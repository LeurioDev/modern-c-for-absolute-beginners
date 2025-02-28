/*  When we need to cast the pointer to type void* when printing out the pointer's value using a printf function. Example:
 */

#include <stdio.h>

int main(void)
{
    int x = 123;
    int *p = &x;
    printf("The pointer value is: %p\n", (void *)p); // OK
}
