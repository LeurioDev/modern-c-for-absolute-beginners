/*  Do Not Cast the Result of malloc    -   In C, we do not need to cast the result of malloc. The following example wrongly performs the cast:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Casting the result of malloc. Not needed!\n");
    int *p = (int *)malloc(sizeof(int));
    *p = 123;
    printf("The result is: %d\n", *p);
    free(p);
}

/*  This example casts the result of malloc to type int*. This is not needed as the malloc's return value type is void*. And void* is safely and implicitly convertible to the correct pointer type. The cast also adds unneeded code clutter.
 */
