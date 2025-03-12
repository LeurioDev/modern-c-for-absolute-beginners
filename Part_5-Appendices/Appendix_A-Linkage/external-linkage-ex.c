/*  Names(variables) declared inside a global/file scope have external linkage by default.
 */

#include <stdio.h>

//  global scope

int x = 123; // external linkage
void myfunction() // external linkage
{
    printf("The value is: %d\n", x);
}

int main(void)
{
    printf("Calling a global function with external linkage.\n");
    myfunction();
}
