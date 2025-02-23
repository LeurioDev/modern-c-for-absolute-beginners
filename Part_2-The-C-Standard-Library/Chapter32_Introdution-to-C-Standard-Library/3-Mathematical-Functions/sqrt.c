/*  sqrt    -   The sqrt function returns the square root of an argument. This function is declared inside the <math.h> header and has the following syntax:
 *
 *      double sqrt(double argument);
 *  Ex:
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double d = 64.;
    printf("The square root of %f is: %f\n", d, sqrt(d));
    d = 256.00;
    printf("The square root of %f is: %f\n", d, sqrt(d));
}
/*  We use the sqrtf variant for the type float and sqrtl for type long double. */
