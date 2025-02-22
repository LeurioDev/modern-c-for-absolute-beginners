/*  Dynamic Memory Allocation   -   Write a program that dynamically allocates space for a single double using the size of a type and space for a single int using a dereferenced pointer size. Free the memory blocks afterward:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *d = malloc(sizeof(double));
    *d = 123.456;
    if (d)
    {
        printf("Allocating double space.\n");
        printf("The double value is: %f\n", *d);
    }
    free(d);
    int *x = malloc(sizeof(int));
    *x = 789;
    if (x)
    {
        printf("Allocating a integer space.\n");
        printf("The int value is: %d\n", *x);
    }
    free(x);
}

