/*  Furthermore, we could also replace the sizeof(int) expression with the sizeof *p expression, to not depend on the type name. Example:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Allocating memory without casting.\n");
    int *p = malloc(sizeof *p);
    *p = 123;
    printf("The result is: %d\n", *p);
    free(p);
}

/*  This casting habit probably stems from the world of C++, where the cast is needed. The rule of thumb is as follows: in C, we do not need to cast the result of malloc, while in C++, we should. C and C++ are two completely different programming languages with different sets of rules.
 */
