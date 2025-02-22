/*  Allocated Storage Duration  -   Objects that are dynamically allocated have a so-called allocated storage duration. This means the storage for these objects dynamically changes throughout the execution of our program. We manually allocate memory for an object, use it, and then manually deallocate it when we no longer need it. It is our responsibility to manually and explicitly free the memory once we no longer need it. Objects with allocated storage duration do not automatically deallocate the memory once they go out of scope. We need to deallocate the memory manually. Example:
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Allocating an object...\n");
    int *p = malloc(sizeof(int));
    *p = 123;
    printf("Object with allocated storage has a value of: %d\n", *p);
    printf("Deallocating an object...\n");
    free(p);
    printf("Done.\n");
}
