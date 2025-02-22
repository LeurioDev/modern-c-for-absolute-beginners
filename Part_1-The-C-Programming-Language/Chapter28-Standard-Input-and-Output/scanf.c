/*  The scanf function allows us to accept the formatted data from the standard input and store it into a variable(s). The function is declared inside the <stdio.h> header and has the following signature:
 *
 *      int scanf(const char* format, ...)
 *
 *  The function accepts the following arguments: format specifier and addresses of variables that will store/hold the input data. The format specifier interprets/formats the data from the standard input. The addresses of variables are used for storing the read data. The function returns the number of sucessfully assigned variables or EOF on error.
 *  To accept a single character from a keyboard and store it into our char variable, we would use the %c format specifier and an address of a char variable:
 */

#include <stdio.h>

int main(void)
{
    printf("Enter a single character: ");
    char mychar;
    scanf("%c", &mychar);
    printf("You entered: %c\n", mychar);
}
