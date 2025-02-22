/*  memcpy  -   The memory function copies N bytes/characters from a memory location/block pointed to by source, to a memory area pointed to by destination. The function is of the following signature:
 *
 *      void* memcpy( void *destination, const void *source, size_t N );
 *
 *  The function interprets memory bytes as unsigned char, The function is defined inside the <string.h> header. For example, to copy 5 bytes from one string array to another string array, we write:
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "Hello World.";
    char destination[5];
    memcpy(destination, source, sizeof destination);
    printf("The source is: %s\n", source);
    printf("The destination after copying 5 characters is:\n");
    // write a character, one by one using putchar() function
    for (size_t i = 0; i < sizeof destination; i++)
    {
        putchar(destination[i]);
    }
}
/*  This example copies five characters from a source array to a destination array and uses the putchar() function to print out the destination characters one by one.
 */
