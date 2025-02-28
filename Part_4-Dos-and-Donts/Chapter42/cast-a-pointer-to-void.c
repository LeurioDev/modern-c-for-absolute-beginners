/*  Cast a Pointer to void* When Printing Through printf
 *
 *  When printing out a pointer's value (the memory address it points to) using a printf function and a %p format specifier, we need to cast that pointer to type void* first.
 *  Simply trying to print out the pointer value through printf causes undefined behavior.
 *  Example:
 */

#include <stdio.h>

int main(void)
{
    int x = 123;
    int *p = &x;
    printf("The pointer value is: %p\n", p); // undefined behavior
}

/*  This example causes undefined behavior because the %p format specifier expects a type void*, and we are passing in int*. The same applies when trying to prit out any other pointer type.
 */
