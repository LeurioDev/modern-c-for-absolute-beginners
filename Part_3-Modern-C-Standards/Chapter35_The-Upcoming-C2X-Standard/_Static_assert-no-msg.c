/*      _Static_assert Without a Message
 *  The _Static_assert in C2X performs a static assertion without issuing a message.
 */

int main(void)
{
    _Static_assert(sizeof(int) == 8);
}
