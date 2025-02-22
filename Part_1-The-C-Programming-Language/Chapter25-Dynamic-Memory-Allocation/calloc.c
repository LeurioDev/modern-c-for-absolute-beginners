/*  calloc  -   The memory block allocated with malloc is uninitialized. Bytes inside this block o not hold any meaningful values. If  we need to allocate space that will be initialized with zeros, we use the calloc function instead. Unlike malloc, this function accepts two parameters and has the following signature:
 *
 *          void* calloc(size_t number_of_objects, size_t size_of_the_object)
 *
 *  To allocate space for a single integer and fill the allocated memory with zero(s), we write:
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = calloc(1, sizeof(int));
    if (p)
    {
        printf("The initial value is: %d\n", *p);
    }
    free(p);
    p = NULL;
}
