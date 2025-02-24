/*  Anonymous Structures and Unions -   Structures (or unions) without a name are called anonymous structures. They come in handy when we want to nest a structure (or a union) inside another structure (or a union)
 * Example:
 **/

#include <stdio.h>

struct MyStruct
{
    int a;
    struct // anonymous structure
    {
        int b;
        int c;
    };
};

int main(void)
{
    struct MyStruct s;
    s.a = 123;
    s.b = 456;
    s.c = 789;
    printf("Field a: %d\n", s.a);
    printf("Inner field b: %d\n", s.b);
    printf("Inner field c: %d\n", s.c);
}

/*  In this example, we used a structure and called it MyStruct. Inside that structure, there is one integer field called a, and a nested, anonymous structure having two fields, b and c. To access these fields, we simply use the s.b and s.c syntax as anonymous struct members are members of the enclosing struct.
 */
