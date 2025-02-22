/*  Global Scope    -   When we look at the source file as a whole, we are looking at the file scope or a global scope. Everything declered inside a file scope is accessible and visible to everything else in the file scope that follows its declaration. Example:
 */

#include <stdio.h>

int x = 123; // x has a global scope

int main(void)
{
    printf("X has a global scope and a value of: %d\n", x);
}
