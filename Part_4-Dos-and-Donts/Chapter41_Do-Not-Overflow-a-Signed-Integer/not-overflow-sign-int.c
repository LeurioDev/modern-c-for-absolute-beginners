/*  Do Not Overflow a Signed Integer    -   There are lower and upper limits to values a signed integer can hold. The maximum signed integer value is represented by an INT_MAX macro, and the minimum signed integer value is represented by the INT_MIN macro. These macros are declared inside the <limits.h> header.
 *  Trying to store the value that is higher than the allowable maximum or lower than the allowable minimum causes undefined behavior. Example:
 */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int x = INT_MAX;
    printf("The maximum integer value is: %d\n", x);
    printf("Trying to store a value higher than the maximum...\n");
    x = INT_MAX + 1; // undefined behavior
    printf("The variable value is now: %d\n", x);
}

/*  This example tries to store the number that is higher than the allowable maximum for type int. This causes undefined behavior and the so-called integer overflow, resulting in strange negative value output. We should make sure we do not try to store signed integer values outside the allowwable range.
 *  Note:   Overflowing an unsigned integer is well defined, but it should also be avoided.
 */
