/*  There is also a strdup variant that copies N bytes form the source string and has the following syntax:
 *
 *      char *strndup(const char* arg, size_t N);
 *
 * Example:
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    const char *s1 = "This will be duplicated.";
    char *s2 = strndup(s1, 17);
    printf("The result is: %s\n", s2);
    free(s2);
}
