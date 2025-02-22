/*  To accept multiple values from the standard input, we can use multiple format specifier separated by spaces and multiple addresses of variables, separated by commas. For example, to accept an int and a double from a keyboard, we write:
 */

#include <stdio.h>

int main(void)
{
    printf("Enter an integer and a double: ");
    int x;
    double d;
    scanf("%d %lf", &x, &d);
    printf("You entered: %d and %lf\n", x, d);
}
