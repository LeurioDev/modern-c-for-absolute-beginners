/*  Variables and functions (names) inside a global scope are visible to names in a local scope. Example:
 */

#include <stdio.h>

int x = 123; // x has a global scope

void printX(void)
{
    // x is visible here because it has a global scope
    printf("X has a global scope and a value of: %d\n", x);
}

int main(void)
{
    printX();
}
