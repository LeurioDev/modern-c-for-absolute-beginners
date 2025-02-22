/*  strlen  -   The strlen function returns the number of characters inside a null-terminate character array, excluding the null-terminating character. The function is of the following signature:
 *
 *      size_t strlen (const char* str);
 *
 *  To use this function, we include the <string.h> header and supply a character array as an argument. Example:
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    const char str[] = "How many characters here?";
    size_t myStrLength = strlen(str);
    printf("The string contains %zu characters.\n", myStrLength);
}
