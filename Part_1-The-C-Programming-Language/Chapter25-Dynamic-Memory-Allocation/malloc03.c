/*  If we want to check if the result of memory allocation is NULL, we could write:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof(int));
    //p = NULL;
    if (p == NULL)
    {
        printf("Error allocating the memory. Exiting. \n");
        return -1;
    }
    *p = 123;
}
