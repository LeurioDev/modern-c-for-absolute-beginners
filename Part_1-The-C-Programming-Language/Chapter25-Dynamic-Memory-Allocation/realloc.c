/*  Once we allocate space using malloc or calloc, we can grow or shirnk that memory space using realloc. The realloc function has the following signature:
 *
 *      void *realloc(void *pointer_to_a_previously_allocated_memory, size_t new_size_in_bytes)
 *
 *  The function takes two parameters. The first is the original pointer, and the second is the new memory size. The function returns a pointer to the newly allocated/reallocated memory block. For now, let us start with a simple yet incomplete example with error checking omitted:
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof *p);
    printf("Allocated %zu bytes.\n", sizeof *p);
    printf("Resizing allocated memory...\n");
    int *pnew = realloc(p, 10 * sizeof(int));
    printf("The memory block is now %zu bytes long.\n", 10 * sizeof(int));
}
