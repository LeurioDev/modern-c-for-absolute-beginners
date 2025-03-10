/*  And we include the same header file in our source2.c file:
 */

#include "myheaderfile.h"
#include <stdio.h>

void myfunction(void)
{
    printf("Calling macro from a function inside a source2.c: %d\n", MYMACRO);
}

/*  We compile both source files using the following syntax:
 *
 *  gcc -Wall source.c source2.c -std=c11 -pedantic && ./a.out
 */
