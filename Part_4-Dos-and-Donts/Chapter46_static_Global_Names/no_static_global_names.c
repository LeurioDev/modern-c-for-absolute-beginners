/*  Here, both globals globalx and globalfn() are defined inside the source.c file
 *  and can be referred to from other .c files as well:
 */

#include <stdio.h>

// global scope
int globalx = 123;
void globalfn(void)
{
    printf("The value of global var is: %d\n", globalx);
}

int main(void)
{
    // local scope
    int localx = 456;
    globalfn();
    printf("The value of a local var is: %d\n", localx);
}
