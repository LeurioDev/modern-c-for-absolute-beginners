/*  The memccpy Function    -   The memccpy functions copies characters from a data object pointed to by source to a memory/object pointed to by destination. The function stops copying after any of the two conditions are met:
 *      -   N characters were copied.
 *      -   The character c is found.
 *
 *  The function is declared inside the <string.h> header and has the following syntax:
 *
 *  void *memccpy(void *restrict destination, const void *restrict source, int c, size_t N);
 *
 *  Example:
 */

#include <string.h>
#include <stdio.h>

int main(void)
{
    const char source[] = "Copy this until ~ is found.";
    char destination[sizeof source];
    const char stopchar = '~';
    void *p = memccpy(destination, source, stopchar, sizeof destination);
    if (p)
    {
        printf("Terminating character found. The result is:\n");
        printf("%s\n", destination);
    }
    else
    {
        printf("Terminating character not found. The result is:\n");
        printf("%s\n", destination);
    }
}

/*  If the terminating character stopchar is found, the function returns a pointer to the next character in the detination string after the stopchar. If the terminating character is not found, the function returns a null pointer.
