/*  _Static_assert  -   The _static_assert performs assertion during compile time, before our program starts. The static has the following syntax:
 *
 *      _Static_assert(expression, message);
 *
 *  The staic assertion evaluates the constant expression during compile time. If the expression is evaluted to 0(false), a message is displayed, and the compilation fails. If the expression does not evaluete to 0, no message is displayed, and nothing happens. For example, lets us check if the size of type int is equal to 8 using static assertion. Chances are the size of our int is equal to 4, and the  assertion will fail. Example:
 */

int main(void)
{
    _Static_assert(sizeof(int) == 8, "The size of int is not 8.\n");
}
