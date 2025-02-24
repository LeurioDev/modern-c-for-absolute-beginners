/*  Unicode Support for UTF-16 and UTF-32   -   The C11 standard provides types for storing UTF-16 and UTF-32 encoded strings. They are char16_t and char32_t. Both types and the Unicode conversion functions are declared in a <uchar.h> header file. Example:
 */

#include <uchar.h>

int main(void)
{
    char16_t arr16[] = u"Our 16-bit wide characters here.\n";
    char32_t arr32[] = U"Our 32-bit wide characters here.\n";
}

/*  We use the u prefix for the char16_t character array and U prefix for the char32_t character array.
 *  The width of the type char16_t can be larger than 16 bits, but the size of the value stored will be exactly 16 bits wide. Similarly, for a char32_t type, the size of the char32_t type itself can be larger than 32 bits, but the value stored inside this type will be exactly 32 bits wide.
 */
