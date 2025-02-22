/*  Dynamic Memory Allocation: Array    -   Write a program that dynamically allocates space for an array of five doubles. Using a for loop, set and print out all the array elements. Free the memory afterward:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *p = malloc(5 * sizeof *p);
    if (p)
    {
        printf("Allocation sucessfull\n");
        printf("Printing the all five double values\n");
        for (int i = 0; i < 5; i++)
        {
           // p[i] = (i + 1) * 2.5;
           p[i] = i;
            printf("%.2f ", p[i]);
        }
    }
    free(p);
}
