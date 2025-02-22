/*  Static Storage Duration -   When we apply a static specifier to our variable declaration, our data object then has a static storage duration. It remains in memory throughout the execution of our program. Objects marked with static and objects declared in global/file scope have this duration. The static storage duration object is initialized only once and preserves its (last) value across multiple function calls. Example:
 */

#include <stdio.h>

void myCounter(void)
{
    static int x = 10; // initialized only once
    x++;
    printf("Static Variable value: %d\n", x);
}

int main(void)
{
    myCounter(); // x == 11
    myCounter(); // x == 12
    myCounter(); // x == 13
}
