/*  The format specifier can also include the lenght/the number of characters needed to output our value. For example, to output a double value of 123.456 using three character spaces for an integral part and two spaces for the fractional part, we  use the %3.2f format specifier:
 */

#include <stdio.h>

int main(void)
{
    double d = 123.456;
    printf("%3.2lf\n", d);
}
/*  This example displays a rounded second decimal. The value of the variable remains unchanged.
 *  The following list includes some of the most used format specifiers:
 *
 *  %c - writes one character, used for type char
 *
 *  %s - writes a string, used for char arrays
 *
 *  %d or %i - writes (converts) an integer, used for types char, short, or int
 *
 *  %u - used for unsigned char, unsigned short, or unsigned int
 *
 *  %ld - outputs a long int
 *
 *  %f - outputs a float or a double value into a decimal representation
 *
 *  %lf - outputs a double value into a decimal representation
 *
 *  x - writes a hexadecimal representation of char, short, or int
 */
