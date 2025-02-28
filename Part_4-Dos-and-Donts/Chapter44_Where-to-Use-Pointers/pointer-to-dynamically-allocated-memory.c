/*      Pointers to Dynamically Allocated Memory
 *  Memory obtained through calls to malloc, calloc, and realloc is referred to as dynamically allocated memory. Pointers can point to this newly allocated memory(block). The dynamically allocated memory must be explicitly freed when we no longer need it. The following example dynamically allocates memory block for one integer using malloc.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Allocating memory...\n");
    int *p = malloc(sizeof(int)); // allocate memory
    if (p)
    {
        *p = 123456; // manipulate memory
        printf("The value is: %d\n", *p);
    }
    printf("Deallocating memory...\n");
    free(p); // deallocate the memory
    printf("Done.\n");
}
/*  NOTE:   Dynamically allocated memory obtained through malloc, calloc, or realloc must be explicitly freed/deallocated.
 */
