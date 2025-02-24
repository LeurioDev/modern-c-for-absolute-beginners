/*  The _Alignas Specifier  -   The _Alignas specifier modifies the alignment requirement when declaring an object. The _Alignas specifier has two syntaxes, one in which it accepts an expression that evaluates to the number of bytes and one in which it accepts a type name.
 *
 *      _Alignas (constant_int_expression)
 *      _Alignas (type_name)
 *
 *  The alignment expression must be a positive power of 2. For example, if we want to enforce a specific alignment of our structure, we write:
 */

#include <stdio.h>

struct MyStruct
{
    _Alignas(16) int x[4];
};

int main(void)
{
    printf("The alignment of MyStruct is: %zu bytes\n", _Alignof(struct MyStruct));
}

/*  In this example, every object of type struct MyStruct will be aligned to a 16-byte boundary. We can also use the alignas macro defined inside the <stdalign.h> header.
 *  The compiler will issue an error if:
 *
 *      -   The values is not 0 or a positive power of 0
 *      -   The value exceeds the maximum allowed alignment
 *      -   The values is less than physically possible minimum alignment
 */
