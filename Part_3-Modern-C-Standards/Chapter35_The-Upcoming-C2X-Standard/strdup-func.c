/*  The strdup Function -   The strdup function returns a pointer to a copy of  a string. It does so as if though the place for a copy was allocated using malloc. The function is declared inside the <string.h> header and has the following syntax:
 *
 *      char *strdup(const char* arg);
 *
 * The pointer obtained through strdup must be freed afterward. Example:
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    const char *s1 = "This will be duplicated.";
    char *s2 = strdup(s1);
    printf("The result is: %s\n", s2);
    free(s2);
}
