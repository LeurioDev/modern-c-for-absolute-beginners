/*  Automatic and Allocated Storage -   Write a program that defines two variables. The first variable will have an automatic storage duration, and the second variable will have an allocated storage duration:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 123;
    printf("The variable with an automatic storage duration: %d\n", x);
    int *p = malloc(sizeof *p);
    printf("The variable with an Allocated Storage Duration: %p\n", (void *)p);
    free(p); // p is manually freed here
} // x is automatically freed here
