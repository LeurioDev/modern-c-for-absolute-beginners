/*  strcat  -   The strcat function concatenates two strings. It appends the source_str string to the destination_str string. The function is of the following signature:
 *
 *      char *strcat(char *destination_str, const char *source_str);
 *
 *  To concatenate two strings, we write:
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char destination_str[30] = "Hello ";
    char source_str[30] = "World!";
    strcat(destination_str, source_str);
    printf("The concatenated string is: %s\n", destination_str);
}
/*  The destination string array must be large enough to accept the concatenated string.
 *  */
