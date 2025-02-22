/*  fputs   -   Another function for writing to the output stream is fputs. The function writes the null-terminated string to the chosen output stream. This function is defined inside the <stdio.h> header and has the following signature:
 *
 *      int fputs(const char *message, FILE *stream_name);
 *
 * To write to the standard output, we supply the message string and the stdout parameter for the standard output. Example:
 */

#include <stdio.h>

int main(void)
{
    fputs("This is a fputs() message.\n", stdout);
}
