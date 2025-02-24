/*  Aligned Memory Allocation: aligned_alloc    -   The C11 standard introduces an aligned_alloc function, which allocates a memory block with a specified alignment. The syntax is:
 *
 *      void *aligned_alloc(size_t alignment_in_bytes, size_t size_in_bytes);
 *
 * The function is defined inside the <stdlib.h> header. The memory is not initialized and must be freed with free or deallocated with realloc. The size in bytes must be a multiple of alignment. Example:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = aligned_alloc(512, 512 * sizeof *p);
    printf("Allocated a 512-byte aligned memory block.\n");
    printf("The address is: %p\n", (void *)p);
    free(p);
}
