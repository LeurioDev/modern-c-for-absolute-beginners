/*  To print out a character array, one character at a time, without error checking, we write:
 */

#include <stdio.h>

int main(void)
{
    char arr[] = "Hello!";
    for (size_t i = 0; i < 7; i++)
    {
        putchar(arr[i]);
    }
}
