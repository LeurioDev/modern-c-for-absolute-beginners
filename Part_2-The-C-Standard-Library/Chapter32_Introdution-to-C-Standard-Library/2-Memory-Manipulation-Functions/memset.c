/*  memset  -   The memory obtained through malloc is not initialized. The allocated memory blocks hold no meaningful values. Trying to read uninitialized memory will result in undefined behavior. Earlier, we have used the calloc function to allocate and initialize the memory blocks to zero.
 *  Another way to initialize the memory is through a memset function declared inside the <string.h> header file. The function has the following signature:
 *
 *      void *memset(void *destination, int value, size_t N);
 *
 *      The function acceps a pointer to allocated memory here called destination, the value to fill the allocated bytes, and the memory block's size in bytes, here named N.
 *      To allocate space for five integers and then fill the enteri memory block/all the bytes in the allocated memory with zeros, we write:
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int *p = malloc(5 * sizeof(int));
    if (p)
    {
        memset(p, 0, 5 * sizeof(int));
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", p[i]);
        }
    }
    free(p);
}
