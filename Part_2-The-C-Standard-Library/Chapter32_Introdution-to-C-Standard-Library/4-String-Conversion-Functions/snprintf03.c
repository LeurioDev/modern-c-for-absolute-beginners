/*  To form a more descriptive string out of int and double values, we use the string constant with format specifier. We also pass in the comma-separated list of numbers.
 *  Example:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 123;
    double d = 456.789;
    char strbuffer [100];
    int nc = snprintf(strbuffer, sizeof strbuffer, "int: %d, double: %g", x, d);
    printf("%s\n", strbuffer);
    printf("The number of characters written is: %d\n", nc);
}
