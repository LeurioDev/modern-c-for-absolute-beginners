/*  To accept an integer number from a keyboard and store it into our int variable, we use the %d format specifier and an address of an int variable. Example:
 */

#include <stdio.h>

int main(void)
{
    printf("Enter an integer number: ");
    int x;
    scanf("%d", &x);
    printf("You entered: %d\n", x);
}
