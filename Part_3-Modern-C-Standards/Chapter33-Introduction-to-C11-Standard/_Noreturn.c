/*  The _Noreturn Function Specifier    -   The _Noreturn function specifier, when applied to a function declaration, specifies that the function does not return. More precisely, it specifies that the function does not return by:
 *      -   Executing a return statement
 *      -   Hitting the end of the function block marked by the closing brace (})
 *  Having the _Noreturn specifier suppresses some of the spurious warnings and further optimizes the code. Example:
 */

#include <stdlib.h>
#include <stdio.h>

_Noreturn void justExit()
{
    printf("This function does not return. Exiting...\n");
    exit(0);
}

int main(void)
{
    justExit();
}
