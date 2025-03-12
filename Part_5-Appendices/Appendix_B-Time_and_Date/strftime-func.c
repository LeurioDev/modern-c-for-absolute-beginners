/*  The final thing left to do is to convert the tm time to a string using a strftime
 *  function and appropriate format specifiers:
 */

#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t mytime = time(NULL);
    struct tm *nowtm;
    char str[70];
    nowtm = localtime(&mytime);
    strftime(str, sizeof str, "%T", nowtm);
    printf("The time is: %s\n", str);
}

/*  The strftime function converts the calendar date/time stored inside the tm structure
 *  to a string according to format specifiers used. Here we used the %T format specifier,
 *  which is the same as the %H:%M:%S format.
 */  
