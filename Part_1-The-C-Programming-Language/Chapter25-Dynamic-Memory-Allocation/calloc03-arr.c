/*  To allocate a space for an array of five, initially zeroed-out integers, we write:
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = calloc(5, sizeof *p);
    if (p)
    {
        printf("Initial values:\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", p[i]);
        }
        //  set some values and print them out
        printf("\nNew values:\n");
        for (int i = 0; i < 5; i++)
        {
            p[i] = (i + 1) * 10;
            printf("%d ", p[i]);
        }
    }
    free(p);
    p = NULL;
    printf("\n");
}
