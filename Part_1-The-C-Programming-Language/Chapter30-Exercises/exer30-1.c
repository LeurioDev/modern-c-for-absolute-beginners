/*  Standard Input  -   Write a program that accepts two variables of type int and double from the standard input. Use the fgets function to store the input into a buffer. Use the sscanf function to extract the buffer into variables:
 */

#include <stdio.h>

int main(void)
{
    printf("Enter a integer and a double and press <enter>: ");
    char buffer[20];
    if (fgets(buffer, 20, stdin) != NULL)
    {
        printf("The values are storage in a buffer!\n");
        int x;
        double d;
        printf("Storage values in independent variables...\n");
        sscanf(buffer, "%d %lf", &x, &d);
        printf("X value is: %d, and D value is %lf\n", x, d);
    }
    else
    {
        printf("ERROR: No character read!\n");
        return 1;
    }
}
