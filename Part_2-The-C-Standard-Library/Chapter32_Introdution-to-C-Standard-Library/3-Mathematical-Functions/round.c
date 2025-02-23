/*  round   -   The round returns the result of rounding the floating-point argument to the nearest integer, rounding halfway away from 0. The function is declared inside the <math.h> header file and has the following syntax:
 *
 *      double round(double argument);
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
    double d = 1.5;
    printf("The result of rounding the %f is: %f\n", d, round(d));
    d = 1.49;
    printf("The result of rounding the %f is: %f\n", d, round(d));
}
/*  To run this example on Linux, we also need to link with the math library by supplying the -lm flag to our compilation string.
 *  There are also roundf and roundl version that accept float and long double arguments.
 */
