/*  To format the obtained date/time as a date only, we can use the %D
 *  format specifier. 
 */

#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t mytime = time(NULL);
    struct tm *nowtm;
    char str[70];
    nowtm = localtime(&mytime);
    strftime(str, sizeof str, "%D", nowtm);
    printf("The date is %s\n", str);
}

/*  This example uses the %D format specifier inside the strftime function
 *  to output only the date part of the obtained date-time. The %D format
 *  specifier is equivalent to %m/%d/%y format.
 */
