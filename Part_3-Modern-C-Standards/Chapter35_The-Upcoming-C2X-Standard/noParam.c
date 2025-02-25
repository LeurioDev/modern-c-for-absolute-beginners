/*  No Parameters Function Declaration  -   We can now declare a function that accepts no parameters without the need for the inclusion of a void text inside parentheses. We can now ensure the function's behavior will be as intended. Example:
 */

#include <stdio.h>

void noparamsfn()
{
    printf("This function does not accept parameters.\n");
}

int main(void)
{
    noparamsfn();
//    printf("The c standard is: %ld\n", __STDC_VERSION__);
}
