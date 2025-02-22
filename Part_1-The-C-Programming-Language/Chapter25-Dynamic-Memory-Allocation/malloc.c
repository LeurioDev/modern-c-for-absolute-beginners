/*  The malloc function allocates n bytes of memory from a system and returns a pointer to the newly allocated memory. The function has the following signature:
 *
 *          void* malloc(size_t size_in_bytes);
 *
 *  We need to include the <stdlib.h> header when using this function. To learn how to work with this function, we start with small, incomplete code examples and build in complexity until we have covered all the concepts.
 *
 * To allocate memory for a single integer, we write:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof(int));
    *p = 123;
    printf("The value is: %d\n", *p);
}
