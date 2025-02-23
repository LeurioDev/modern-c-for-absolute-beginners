/*  strtol  -   The strtol function allows us to convert a string to a long int number. The function is defined inside the <stdlib.h> header and has the following syntax:
 *
 *  long strtol(const char *restrict str, char **restrict str_end, int base);
 *
 *  <   Note:   The restrict keyword was introduced in C99. It helps the compiler to optimize the code. It also says no other parameter in the function list will point to this address/object  >
 *
 *  The strtol function takes as many characters as possible from str to form an integer number of a base base. The base represents the base of the interpreted integer and can have values from 2 to 36.
 *  The function can also set the pointer pointed to by str_end to point at the one past the last character interpreted. We can also ignore this pointer by passing it a null pointer.
 *  To convert a string to a base 10 integer, where we ignore the str_end pointer, we write:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char * str = "123 to a number.";
    long result = strtol(str, NULL, 10);
    printf("The result is: %ld\n", result);
}
