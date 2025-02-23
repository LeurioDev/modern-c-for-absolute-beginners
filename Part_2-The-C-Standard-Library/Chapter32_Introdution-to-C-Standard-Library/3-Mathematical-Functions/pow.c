/*  pow -   The pow function returns the value of base raised to the power of the exponent. The function has the following syntax:
 *
 *      double pow(double base, doube exponent);
 *
 *  The function is declared inside the <math.h> header file. Example:
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("The value of 2 to the power of 10 is: %f\n", pow(2, 10));
    printf("The value of 2 to the power of 20 is: %f\n", pow(2, 20));
}

/*  There are also powf and powl variants that accept float and long double arguments.
 */
