/*  File Output -   To write to a file, we use several functions in a sequence. The workflow when writing to a file is:
 *
 *  @   Open a file for writing using the fopen function.
 *
 *  @   Write to a file using the fprintf function.
 *
 *  @   When done writing, close the file using the fclose function.
 *
 *  The following example creates a file named myfile.txt and writes a single line of text to it:
 */

#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("myfile02.txt", "w"); // open a file for writing
    fprintf(fp, "%s", "my line of text"); // write a line of text
    fclose(fp); // close the file
}
