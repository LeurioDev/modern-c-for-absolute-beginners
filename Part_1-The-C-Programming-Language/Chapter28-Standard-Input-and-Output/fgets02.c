/*  If the function suceeds, it returns the pointer to the buffer we provided, str in our case. If it fails, the function returns NULL. Here is a full example with the error checking:
 */

#include <stdio.h>

int main(void)
{
    printf("Enter a string: ");
    char str[10];
    if (fgets(str, 10, stdin) != NULL)
    {
        printf("You entered: %s\n", str);
    }
    else
    {
        printf("Failure. No characters are read.\n");
    }
}
