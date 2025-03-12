## Time and Date

The <time.h> header declares functions that allow us to work with date/time. In this appendix, we explain how to obtain and format the current time and date.
    The time function is declared inside the <time.h> header and returns the current date-time (date-time since epoch) as an object of type time_t. The function has the following signature:
    
    timet_ time(time_t *arg);
    
    The type time_t is a type capable of storing times. The time function can return the calendar time when arg is NULL:
