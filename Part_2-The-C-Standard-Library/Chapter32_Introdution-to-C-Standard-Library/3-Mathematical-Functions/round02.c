/*  To have a rounding function that will return an integer type, we use the lround function. Example:
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double d = 1.5;
    printf("The result of rounding the %f is: %ld\n", d, lround(d));
    d = 1.49;
    printf("The result of rounding the %f is: %ld\n", d, lround(d));
}
