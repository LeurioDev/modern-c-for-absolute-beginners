/*  To print out the position at which the substring was found, we subtract the original string's address from the strstr's function return value as in posFund - myString. Remember, array names get converted to pointers when used as function arguments.
 *  Subtracting pointers gives us a position of a substring:
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char myString[] = "Hello World!";
    char mySubstring[] = "World";
    char *posFound = strstr(myString, mySubstring);
    if (posFound)
    {
        printf("Substring found at position: %ld.\n", posFound - myString);
    }
    else
    {
        printf("Substring not found.\n");
    }
}
