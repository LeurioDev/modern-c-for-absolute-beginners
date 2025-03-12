/*  When we populate the tm structure, we can access its individual fields.
 *  For example, if we need to access and display minutes and second as
 *  integers, we write:
 */

#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t mytime = time(NULL);
    struct tm *nowtm;
    nowtm = localtime(&mytime);
    printf("Minutes and seconds are %d:%d\n", nowtm->tm_min, nowtm->tm_sec);
}

/*  In this example, we do not convert the obtained date-time to a string strftime
 *  function. We simply use the tm structure's fields representing minutes and
 *  numbers, called tm_min and tm_sec, and print them out using the printf function.
 */
