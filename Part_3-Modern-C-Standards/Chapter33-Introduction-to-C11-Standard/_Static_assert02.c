/*  If we used long instead of int, changes are there will be no error message, and the compilation will continue. Example:
 */

int main(void)
{
    _Static_assert(sizeof(long) == 8, "The size of long is not 8.\n");
}
