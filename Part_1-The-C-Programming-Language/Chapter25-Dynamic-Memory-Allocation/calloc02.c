/*  The calloc function allocates the memory space needed and initializes all the allocated bytes with zeros:
 *
 *  To allocate space for a single integer, fill the memory with zeros, and then change the value of the pointed-to data object in memory, we write:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = calloc(1, sizeof *p);
    if (p)
    {
        printf("The initial value is: %d\n", *p);
        *p = 123;
        printf("The new value is: %d\n", *p);
    }
    free(p);
    p = NULL;
}
