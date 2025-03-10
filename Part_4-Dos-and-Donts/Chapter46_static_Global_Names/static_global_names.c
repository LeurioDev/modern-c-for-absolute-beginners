/*  We can opt for static globals declaration instead, rendering our globalx 
 *  and globalfn() globals visible only to our source.c file/translation unit:
 */

#include <stdio.h>

// global scope
static int globalx = 123;
static void globalfn(void)
{
    printf("The value of a global var is: %d\n", globalx);
}

int main(void)
{
    // local scope
    int localx = 456;
    globalfn();
    printf("The value of a local var is: %d\n", localx);
}

/*  The static specifier is now applied to our globals, making them invisible to other
 *  translation units. We say the names now have internal linkage, making them visible
 *  to the current translation unit/source file only.
 */
