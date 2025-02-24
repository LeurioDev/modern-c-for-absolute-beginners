/*  Threads support -   The C11 standard offers an optional thread support library. The functions are defined inside the <threads.h> header. These functions bring the native thread support to the C language. They allow for creating and joining threads, creating mutexes, synchronizing access, working with conditional variable, and more.
 *  The following example creates a thread that executes a code from a function which accepts one argument:
 */

#include <threads.h>
#include <stdio.h>

int dowork(void *arg)
{
    thrd_t mythreadid = thrd_current();
    for (int i = 0; i < 5; i++)
    {
        printf("Thread id: %lu, counter: %d, code: %s\n", mythreadid, i, (char *)arg);
    }
    return 0;
}
int main(void)
{
    thrd_t mythread;
    // create a thread that executes a function code
    if (thrd_success != thrd_create(&mythread, dowork, "Hello from a thread!"))
    {
        printf("Could not create a thread.\n");
        return 1;
    }
    // join a thread to the main thread
    thrd_join(mythread, NULL);
}

/*  This example defines a function that will be executed by our thread. In the main program, we create/spawn the thread by calling the thrd_create function to which we pass the address of our local mythread variable, the name of the function to be executed, dowork, and a string representing the function argument. Inside the user-defined function dowork, we also print out the current thread id obtained through a thrd_current() function call.
 *  When compiling a multithreaded application on Linux, we need to add the -pthread flag to the  compilation string:
 *
 *      gcc -Wall source.c -std=c11 -pedantic -pthread
 *
 *  Note that <threads.h> support is optional, and might not be fully implemented in GCC.
 */
