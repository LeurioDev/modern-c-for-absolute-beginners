/*  Pointers to String Constants    -   A string constant is an array of characters enclosed in double quotes. The following is a string constant:
 *
 *      "Hello World!"
 *
 *  The string constant is a character array made up of visible characters plus one invisible,null terminating \0 character at the end. The type of string constant/character array is char[]. We can directly assign this string constant to our pointer of type char*. Example:
 */

#include <stdio.h>

int main(void)
{
    char *str = "Hello World!";
    printf("The value is: %s\n", str);
}
