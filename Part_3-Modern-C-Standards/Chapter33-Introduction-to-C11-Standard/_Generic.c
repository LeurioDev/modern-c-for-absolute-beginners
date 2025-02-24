/*  Type Generic Macros Using _Generic  -   The use of _Generic provides a way to select one of several expressions during compile time, based on type of a given controlling expression. The blueprint for a generic expression/macro is:
 *
 *      _Generic ( controlling_expression, list_of_associations)
 *
 *  The controlling expression is an expression whose type will be compared to types listed in the association list. The association list is a comma-separated list of the following content:
 *       
 *          type1 : expression1,
 *          type2 : expression2,
 *          default : default_expression
 *
 *  The type of the controlling expression is compared to the types in the list. If it matches one of them, the generic selection becomes the expression after the colon.
 *  Let us assume we had several functions that accept different types of parameters.
 *  We then want to choose the appropriate function based on a type of argument while using a single generic macro name. In that case, we utilize the _Generic selection in the following way:
 */

#include <stdio.h>

#define myfn(X) _Generic((X), \
                                int : myfn_i, \
                                float : myfn_f, \
                                double : myfn_d, \
                                default : myfn_ld \
                                )(X)

void myfn_i(int x)
{
    printf("Printing int: %d\n", x);
}

void myfn_f(float x)
{
    printf("Printing a float: %f\n", x);
}

void myfn_d(double x)
{
    printf("Printing a double: %f\n", x);
}

void myfn_ld(long double x)
{
    printf("Printing long double: %Lf\n", x);
}

int main(void)
{
    int x = 123;
    float f = 456.789f;
    double d = 101.112;
    long double ld = 134.456l;

    myfn(x);
    myfn(f);
    myfn(d);
    myfn(ld);
}
