/*  snprintf    -   The snprintf function allows us to convert a number to a formatted string. Whereas the printf writes to standard output, the snprintf writes to a character array. The function is declared inside the <stdio.h> header and has the following syntax:
 *
 *  int snprintf(char *restrict str_buffer, size_t buffer_size, const char *restrict format, ... );
 *
 *  The function writes the result into a string buffer pointed to a by str_buffer. The buffer_size is the maximum number of characters to be written. The function writes at most buffer-size - 1 characters, plus the automatically added null-terminating character. To convert a single integer x to a string buffer pointed to by strbuffer, without checking for the return value, we write:
 */

#include <stdio.h>
//#include <stdlib.h>
//
int main(void)
{
    int x = 123;
    char strbuffer [100];
    snprintf(strbuffer, sizeof strbuffer, "%d", x);
    printf("The result is: %s\n", strbuffer);
}
