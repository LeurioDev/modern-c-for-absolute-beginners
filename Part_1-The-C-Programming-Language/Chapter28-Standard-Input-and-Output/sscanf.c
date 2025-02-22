/*  sscanf  -   The sscanf function reads from a character array buffer instead of a standard input. It stores the read data into a comma-separated list of variables based on the provided format specifier. The function has the following syntax:
 *
 *      int sscanf ( const char * buffer, const char * format, ...);
 *
 *  To extract a character array buffer into separate variables, we write:
 */

#include <stdio.h>

int main(void)
{
    char buff[50] = "A 123 456.789";
    char c;
    int x;
    double d;
    sscanf(buff, "%c %d %lf", &c, &x, &d);
    printf("The values are: %c, %d, %lf\n", c, x, d);
}

