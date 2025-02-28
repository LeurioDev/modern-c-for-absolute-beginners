/*  Since the string constant itself is read-only and cannot be modified, we should also add the const qualifier:
 */

#include <stdio.h>

int main(void)
{
    const char *str = "This string can not be modified!";
    printf("The value is: %s\n", str);
}

/*  NOTE:   We do not free the pointers to existing variables, arrays, and string constants. We only free the pointers to dynamically allocated memory
 */
