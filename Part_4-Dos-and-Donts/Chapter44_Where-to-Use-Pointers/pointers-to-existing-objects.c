/*  Pointers to Existing Objects    -   Pointers can point to a existing data objects using address-of operator (&). Example:
 */

#include <stdio.h>

int main(void)
{
    char mychar = 'A';
    char *p = &mychar;
    printf("The pointed-to value is: %c\n", *p);
}

/* This example defines a variable of type char and makes the pointer point at that variable/data object using the & operator. The variable's type char is matched by pointers char *type. If we want to have a pointer that points to an existing int object, we will use the int *type for a pointer. Example:
 */

#include <stdio.h>

int main(void)
{
    int myvar = 123;
    int *p = &myvar;
    printf("The pointed-to value is: %d\n", *p);
}
