/*  The function simply writes a string and a newline character to the standard output (a console window). The function is defined inside the <stdio.h> header and has the following syntax:
 *
 *      int puts(const char *message);
 *
 *  To use this function, we type:
*/
#include <stdio.h>

int main(void)
{
    puts("This is a puts() message.");
}

/*  The function outputs a simple message to the standard output. It also adds an extra newline character to the output string. This saves us from having to explicitly type the \n character at the end of our message.
 */
