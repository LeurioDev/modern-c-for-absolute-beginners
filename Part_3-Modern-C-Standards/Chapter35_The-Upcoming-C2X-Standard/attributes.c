/*  Atributes   -   There have been many implementation-defined language extensions throughout the years. Adoption of atributes in C2X is an attempt to presente a uniform, standard syntax for specifying these extensions/attributes. Attributes are mostly used in declarations and definitions, and they can relate to types, variables, declarations, and code. The attributes syntax is:
 *
 *      [[attribute-list]] what_the_attribute_relates_to
 *
 *  Once of the attributes can be [[deprecated]]. It marks the declaration as deprecated/obsolete, causing the compiler to issue a warning. Example:
 */

#include <stdio.h>

//  deprecated definition
[[deprecated]]
void myoldfunction()
{
    printf("This is a deprecated function.\n");
}
int main(void)
{
    myoldfunction();
    printf("Using a deprecated code.\n");
}

/*  Some of the other attributes are:
 *
 * -   [[fallthrough]], where the fallthrough from the previous case is indeed expected
 *
 *  -   [[maybe_unused]], when we want to suppress compiler warnings on unused names
 *
 *  -   [[nodiscard]], where we expect the compiler to issue a warning when the return value is discarded
 */
