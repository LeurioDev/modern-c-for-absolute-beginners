/*  Once allocated, we must manually release (free) the memory when we are done using it. We do so by using a free() function to which  we pass the pointer returned by malloc as in free(p),. If we left out the free part, we would cause the so-called memory leak. This means that the dynamically allocated memory (using malloc) is never freed. We are leaking away avaliable memory. It cannot be allocated again. So, the situation where we fail to release the dynamically allocated memory is called a memory leak. with that in mind, let us now write a complete example:
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof(int)); /*    or sizeof(p);*/
    if (p)
    {
        *p = 123;
        printf("The value is: %d\n", *p);
    }
    free(p);
}
