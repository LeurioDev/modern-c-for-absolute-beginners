/*      Do Not Use the gets Function
 *  The gets function is declared inside the <stdio.h> header, reads the input into a character array pointed to by str, and has the following syntax:
 *
 *      char *gets (char* str);
 *
 *  This function is extremely dangerous as it can cause a buffer overflow and allows for potential buffer-overflow attacks. The function is deprecated in the C99 standard and removed in the C11 standard. Do not use this function!
 *  The workaround is to use the fgets alternative. Unlike gets, the fgets function performs bounds checking and is safe from buffer overflow scenario.
 *  To use the fgets, we simply pass in the pointer to a buffer buff, the maximum number of characters that can be read, and stdio representing our standard input/keyboard. A simple example:
 */

#include <stdio.h>

int main(void)
{
    char buff[100];
    printf("Please enter a string:\n");
    fgets(buff, 100, stdin);
    printf("The result is: %s\n", buff);
}

/*  Alternatively, opt for a gets_s function, which might be avaliable on our computer as part of the optional, bounds-checking interfaces extension.
 */
