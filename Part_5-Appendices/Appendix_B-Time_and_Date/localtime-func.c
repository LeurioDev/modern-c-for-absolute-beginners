/*  There are a number of steps involved when getting and formatting the time.
 *      *   Get the current date-time using a time function.
 *      *   Store/convert the obtained date-time into a tm struct using localtime or gmtime.
 *      *   Format the obtained time using the strftime.
 *
 *  The following example obtains a date-time and stores it into a tm struct using a localtime function:
 */

#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t mytime = time(NULL);
    struct tm *now;
    now = localtime(&mytime);
    printf("Obtained and stored the current time.\n");
}

/*  The localtime function converts obtained local time to a tm calendar time. The
 *  tm structure holds the calendar date and time. The tm structure has the following
 *  predefined member fields of type int:
 *
 *      *   tm_sec    -     seconds from 0 to 60
 *      *   tm_min    -     minutes from 0 to 59
 *      *   tm_hour   -     hour from 0 to 23
 *      *   tm_mday   -     days from 1 to 31
 *      *   tm_mon    -     months from 0 to 11
 *      *   tm_year   -     year since 1900
 *      *   tm_wday   -     day since Sunday from 0 to 6
 *      *   tm_yday   -     day since January the 1st from 0 to 365
 *      *   tm_isdst  -     daytime saving value, positive if active, zero if not
 */
