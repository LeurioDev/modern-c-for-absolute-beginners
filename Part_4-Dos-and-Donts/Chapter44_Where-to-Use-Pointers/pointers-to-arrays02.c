/*  To print out the next array element, we can use pointer arithmetics. By adding 1 to our pointer, we increase the address it points to by 1 (1 times the size of the pointed-to element), which is the second array element with a value of 20.
 *  Example:
 */

#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("The first array element is: %d\n", *p);
    p++;
    printf("The next array element is: %d\n", *p);
}
