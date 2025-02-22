/*  printf  -   The printf function sends/outputs a formatted string to standard output. It can read our variables, format them according to the format specifier, and place them in an output string. The function has the following signature:
 *
 *      int printf(const char *message, optional_var1, optional_var2...);
 *
 *  To output a simple string to our console window, we write:
 */

#include <stdio.h>

int main(void)
{
    printf("This message ends with a new-line character.\n");
}
