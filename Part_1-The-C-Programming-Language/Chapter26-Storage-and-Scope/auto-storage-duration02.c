#include <stdio.h>

void myFunction(void)
{
    int x = 123; // x is declared here;
    printf("Variable x has an automatic storae and a value of: %d\n", x);
} // x goes out of scope here

int main(void)
{
    myFunction();
}
