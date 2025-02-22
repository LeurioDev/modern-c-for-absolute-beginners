/*  Local Scope -   A function body starting with the { and ending with a } can be seen as a local scope. It is local to a function. Variables declared inside a function are visible and accessible only there. They are not accessible outside the function scope. We say those variables have a local scope. Example:
 */

#include <stdio.h>

void myFunction(void)
{
    int x = 10; // x is a local variable, local to myFunction
    printf("Local scope variable x value: %d\n", x);
}
int main(void)
{
    myFunction();
    int y = 20; // y is a local variable, local to main
    printf("Local scope variable y value: %d\n", y);
}
