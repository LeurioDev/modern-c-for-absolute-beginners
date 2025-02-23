/*  If sucessful, the snprintf function returns a number of characters written minus the null terminator. If the conversion was unsucessful, the function returns a negative number. To convert a single integer to a string and check how many character were written, we use:
 */

#include <stdio.h>
//#include <stdlib.h>

int main(void)
{
    int x = 123;
    char strbuffer [100];
    int nc = snprintf(strbuffer, sizeof strbuffer, "%d", x);
    printf("The result is: %s\n", strbuffer);
    printf("The number of characters written is: %d\n", nc);
}
