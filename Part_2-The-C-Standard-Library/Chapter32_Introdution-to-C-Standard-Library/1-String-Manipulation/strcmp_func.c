/*  strcmp  -   The strcmp function compares two strings. If strings are equal, the function returns the value of 0. If strings are not equal, the function returns a value of either < 0 or > 0. The function compares string one character at a time. When a character from the left-hand string does not match the character from the right-hand-side string, the function can either:
 *
 *  -   Return a value less than 0 if unmatched left-hand side character comes bfor th right-hand sid charactr in lexocographical order
 *
 *  -   Return a value greater than 0 if unmatched left-hand side character comes after the right-hand side character i lexicographical order
 *
 *  For the most part, we will be checking if two strings are equal. Example:
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *str1 = "Hello World!";
    const char *str2 = "Hello world!";
    if (strcmp(str1, str2) == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }
}
