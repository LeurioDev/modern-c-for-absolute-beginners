/*  Do Not Divide by Zero   -   Trying to divide by zero (0) causes a undefined behavior, as shown in the following example:
 */

#include <stdio.h>

int main(void)
{
    printf("Trying to divide with zero...\n");
    int x = 123;
    int y = x / 0; // undefined behavior
    printf("The result is: %d\n", y);
}

/*  Similar to math rules, we should not divide by zero in C either. The above example causes undefined behavior. We should replace the zero with any other value.
 */
