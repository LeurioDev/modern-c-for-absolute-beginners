/*  abs -   The abs function returns an absolute value of an integer argument. The function is defined inside the <stdlib.h> header. Example:
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x = -123;
    int y = 456;
    printf("The absolute value of x is: %d\n", abs(x));
    printf("The absolute value of y is: %d\n", abs(y));
}

/*  In arithmetic, the absolute value of any number refers to its magnitude and not to the sigh it can have, whether positive or negative.
 *  So the absolute value of -2 or +2 is the same as the number 2. It's worth noting that all numbers except 0 (zero) are positive or negative, but the absolute value of a number is always positive. In mathematical terms, the absolute value is an operation that allows any number to become positive.
 */
