/*  The _Alignof Operator   -   The _Alignof operator returns the alignment requirements of the type. Let us assume we have two data objects in memory of the same type, positioned in sucessive memory addresses. The alignment requirements is the property of an object that says how many bytes there must be between these two addresses in order to store the objects sucessfully.
 *  The _Alignof operator gets this number for us  and has the following blueprint:
 *      
 *      _Alignof(type_name)
 */

#include <stdio.h>

struct S1
{
    char c;
    char d;
};

struct S2
{
    char c;
    int x;
};

/*struct S3
{
    double d;
};*/

int main(void)
{
    printf("The alignof of char: %zu\n", _Alignof(char));
    printf("The alignof of int: %zu\n", _Alignof(int));
    printf("The alignof of struct S1: %zu\n", _Alignof(struct S1));
    printf("The alignof of struct S2: %zu\n", _Alignof(struct S2));
}

/*  There is also a convenience macro called alignof inside the <stdalign.h> header that expands to our _Alignof operator.
 */
