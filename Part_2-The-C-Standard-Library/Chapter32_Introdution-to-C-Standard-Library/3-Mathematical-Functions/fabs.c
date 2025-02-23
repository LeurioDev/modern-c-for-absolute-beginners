/*  fabs    -   The fabs function returns an absolute value of a double argument. The function is defined inside the <math.h> header. Example:
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
    double x = -123.456;
    double y = 789.101;
    printf("The absolute value of x is: %f\n", fabs(x));
    printf("The absolute value of y is: %f\n", fabs(y));
}

/*  There are also fabsf and fabsl versions that return absolute values of float and long double arguments, respectively.
 */
