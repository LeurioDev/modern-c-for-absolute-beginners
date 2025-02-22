/*  One school of thought says it is good practice to set the pointer to NULL after we have freed the memory. While this might not be the case in modern C, we will provide a simple example:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof(*p));
    if (p)
    {
        *p = 123;
        printf("The value is: %d\n", *p);
    }
    free(p);
    p = NULL;
}
