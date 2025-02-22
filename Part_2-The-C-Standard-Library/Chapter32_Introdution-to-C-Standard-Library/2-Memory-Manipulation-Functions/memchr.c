/*  memchr  -   The memchr function searches for a particular byte c in the initial N characters within a memory block pointed to by p. The function is declared inside the <string.h> header and is of the following signature:
 *
 *      void* memchr( const void* p, int c, size_t N );
 *
 *  The function searches for the first occurrence of c, and if the byte/char is found, the function returns a pointer to the location of c. If the byte value is not found, the functin returns a NULL. Internally, the c byte is interpreted as unsigned char. The following example searches for a byte with a value of 'W' inside a "Hello World!" character array:
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char mystr[] = "Hello World! from Angola";
    char  *pfound = memchr(mystr, 'W', strlen(mystr));
    if (pfound != NULL)
    {
        /*for (int i = 0; i < 6; i++)
        {
            putchar(pfound[i]);
        }*/
        printf("Character/byte found at: %s\n", pfound);
    }
    else
    {
        printf("Character/byte not found: %s\n", pfound);
    }
}
