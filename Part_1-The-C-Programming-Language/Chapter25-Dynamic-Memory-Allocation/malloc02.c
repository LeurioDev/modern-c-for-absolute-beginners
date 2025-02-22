/*  If the allocation fails, the function returns NULL. It is good practice to check for the malloc's return result using an if statement:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof(int));
    if (p)
    {
        *p = 123;
        printf("The value is: %d\n", *p);
    }
}
