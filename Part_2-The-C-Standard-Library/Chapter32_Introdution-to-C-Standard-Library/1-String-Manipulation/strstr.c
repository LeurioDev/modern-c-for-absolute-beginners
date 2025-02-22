/*  strstr  -   The strstr function searches for a substring insid a string. It return the first position at which th substring is found. The function is of the following signature:
 *
 *      char *strstr(const char* string, const char* substring);
 *
 *      To search for a substring within a string, we write:
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char myString[] = "Hello World!";
    char mySubstring[] = "Ginguba";

    if (strstr(myString, mySubstring))
    {
        printf("Substring found.\n");
    }
    else
    {
        printf("Substring not found.\n");
    }
}
