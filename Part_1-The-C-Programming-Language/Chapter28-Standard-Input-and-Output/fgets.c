/*  When accepting a string, it is better to use a fgets function instead of scanf. The scanf can cause the so-called buffer overflow. A buffer overflow occurs when the number of characters read is greater than the buffer size. It occurs when trying to accept a string larger than the buffer size. The fgets function is safe in that regard and does not cause the mentioned error. The fgets function is defined inside the <stdio.h> header, accepts three parameters, and has the following signature:
 *
 *      char *fgets(char *str, int how_many_characters, FILE *stream_name);
 *
 *      The fgets function reads the input/characters from the given stream and stores the read characters into a character array/buffer pointed to by str. The function stops reading the input when we press ENTER, that is, when a newline character is encountered in a stream. To read (accept an input) from a keyboard, we pass in the stdin parameter representing our keyboard.
 *      The following example reads the input from the keyboard and stores it into our character array. A simple example with error checking omitted:
 */

#include <stdio.h>

int main(void)
{
    // error checking omitted
    printf("Enter a string: ");
    char str[10];
    fgets(str, 10, stdin);
    printf("You entered: %s\n", str);
}
