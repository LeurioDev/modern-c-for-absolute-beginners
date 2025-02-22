/*  memcmp  -   The memcmp function compares the first N bytes from the memory block pointed by p1 to the first N bytes pointed to by p2. The function returns 0 if the byte values match. The function has the following signature:
 *
 *      int memcmp( const void* p1, const void* p2, size_t N );
 *
 *  To compare two arrays byte by byte using memcmp, we write:
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {10, 20, 40, 40, 50};

    int myResult = memcmp(arr1, arr2, 5 * sizeof(int));
    if (myResult == 0)
    {
        printf("The arrays values match.\n");
    }
    if (myResult < 0)
    {
        printf("The arrays value do not match.\n");
        printf("The arr1 values is lower than arr2\n");
    }
    if (myResult > 0)
    {
        printf("The arr1 values is greater than arr2\n");
    }
}


/*  This example compares the individual bytes of arr1 and arr2. It compares the first 20 bytes of both arrays. Remember, the size of int is 4, times 5 elements, equal 20 bytes in total, the number calculated using the 5 * sizeof(int) expression. Since the arrays are not equal, the function returns a value other than 0.
 *  If the bytes do not match, the mamcmp function can returns one of the followinf:
 *
 *  a.  <0, if the byte that does not match has a lower value in p1 than in p2
 *  b.  >0, if the byte than does not match has a higher value in p1 than in p2
 *
 *  The memcmp function is a convenient way to compare two data objects in memory, byte by byte.
 */
