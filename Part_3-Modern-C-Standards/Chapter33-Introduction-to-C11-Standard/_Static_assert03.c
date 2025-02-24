/*  The _Static_assert keyword can be replaced by a static_assert macro declared inside the <assert.h> header. Example:
 */

#include <assert.h>

int main(void)
{
    static_assert(sizeof(int) == 8, "The size of int is not 8.\n");
}

/*  In short, static assertions are a convenient way to enforce assertions and  catch errors during compile time.
 */
