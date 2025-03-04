/*  Suppose a function needs to modify the pointer's value (not the pointed-to value).
 *  For example, the function increments the value of a pointer by one. In that case, we use a double pointer for a function parameter and pass in the address of a pointer variable in the main program. Example:
 */

#include <stdio.h>
#include <stdlib.h>

void myfunction(int **arg)
{
    (*arg)++;
}

int main(void)
{
    int arr[] = {10, 20, 30};
    int *p = arr;
    printf("Pointer value before the function call: %p\n", (void *)p);
    printf("Pointed-to value before the function call: %d\n", *p);
    myfunction(&p); // pass in the pointer
    printf("Pointer value after the function call: %p\n", (void *)p);
    printf("Pointed-to value after the function call: %d\n", *p);
}

/*  The function accepts an argument of type int **(a pointer to a pointer type). It dereferences the double-pointer using the *arg expression (to an actual type of the pointer, which is int*) and increments it using the ++ operator. The parentheses inside the (*arg)++ expression ensure the dereferencing occurs before incrementing.
 *  The function increments the value of a pointer itself. In the main program, we have a pointer that points to the first element of an array. After the function call, its value is incremented, and the pointer p now points at the second array element.
