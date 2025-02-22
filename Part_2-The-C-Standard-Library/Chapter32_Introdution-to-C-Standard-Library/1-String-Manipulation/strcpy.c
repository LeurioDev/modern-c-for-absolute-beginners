/*  strcpy  -   The strcpy function copies one string to another. It copies the characters from the source_str string to the destination_str string. The function signature is:
 *
 *      char *strcpy(char *destination_str, const char *source_str);
 *
 *      To copy one string to another, we write:
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char destination_str[30];
    char source_str[30] = "Hello World!";
    strcpy(destination_str, source_str);
    printf("The copied string is: %s\n", destination_str);
}
