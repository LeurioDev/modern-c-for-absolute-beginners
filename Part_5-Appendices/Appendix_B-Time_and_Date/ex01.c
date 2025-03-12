/* The type time_t is a type capable of storing times. The time function can return the calendar time when arg is NULL.
 */

#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t mytime = time(NULL);
    printf("Obtained the current time to a mytime variable.\n");
}
/*
 * or store it inside an object pointed to by arg:
 */
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t mytime;
    time(&mytime);
    printf("Obtained the current time to a mytime variable.\n");
}
