/*  Dynamic Memory Resizing -   Write a program that dynamically allocates memory for an array of five integers and then resizes the allocated block so that it can now hold an array of ten integers. Free the memory afterward:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(5 * sizeof *p);
    if (p)
    {
        printf("Allocated %zu bytes.\n", 5 * sizeof(int));
    }
    int *pnew = realloc(p, 10 * sizeof(int));
    if (pnew)
    {
        printf("Resizing allocated memory...\n");
        printf("The memory block is now %zu bytes long.\n", 10 * sizeof(int));
        free(pnew);
    }
    else
    {
        free(p);
    }
}
