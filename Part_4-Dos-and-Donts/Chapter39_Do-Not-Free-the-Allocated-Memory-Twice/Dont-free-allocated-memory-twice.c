/*  Do Not Free the Allocated Memory Twice  -   Trying to free the allocated memory two times causes undefined bahavior. The following example shows the wrong usage of two free statements:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Allocating memory...\n");
    int *p = malloc(sizeof(int));
    *p = 123;
    printf("The value is: %d\n", *p);
    printf("Freeing twice - undefined bahavior.\n");
    free(p);
    free(p); // undefined bahavior;
}

/*  In this example, we wrongly tried to free the already freed memory by invoking a second free(p)l statement.
 */
