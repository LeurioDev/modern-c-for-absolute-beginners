/*  To access all array elements using a pointer, we can dereference a pointer using a subscript operator [] in combination with an index/counter to iterate through all array elements:
 */

#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("Printing array elements using a pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
}
