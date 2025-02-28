/*  Pointers To Arrays  -   A pointer can point to an array. We can simply assign the array name to a pointer name without using the & operator. The pointer then points at the first element of the array.
 *  Example:
 */

#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("The first element is: %d\n", *p);
}
