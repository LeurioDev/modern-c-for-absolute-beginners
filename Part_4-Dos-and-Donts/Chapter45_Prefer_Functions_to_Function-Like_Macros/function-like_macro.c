/*  Consider the following function example, which uses a macro-like function to square a given parameter:
 */

#include <stdio.h>

#define SQR(a) ((a) * (a))
int main(void)
{
    int x = 1;
    int result = SQR(++x);
    printf("With the macro: %d\n", result);
}

/* This example defines a function-like macro that squares a value. For illustration purposes, we pass in 
 * a ++x expression as an argument. We get the value of 9 and not 4 as otherwise expected. This is because
 * the SQR macro expands to ((++a) * (++a)), and the value a gets incremented two times. Value a now become
 * 3, and 3 squared is equal to 9.
 */
