/*  The specifier can be replaced by the equivalent noreturn macro declared inside the <stdnoreturn.h> header. Example:
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdnoreturn.h>

noreturn void justExit()
{
    printf("This function does not return. Exiting...\n");
    exit(0);
}

int main(void)
{
    justExit();
}
