/*  File Input  -   To be able to read from a file, we need to utilize a couple of functions. The workflow is as follows:
 *
 *      $   Open a file for reading using the fopen function.
 *
 *      $   Read a line of text from a file using the fgets function.
 *
 *      $   Close the file using the fclose function when done.
 *
 *  Let us first creat a text file called myfile.txt and fill it with arbitrary text. We then place the text file in the same folder as our executable. A simple example with error checking omitted:
 *
 */

#include <stdio.h>

int main(void)
{
    char str[100];
    FILE *fp = fopen("myfile.txt", "r"); // open a file
    while (fgets(str, 100, fp) != NULL) // read line of text
    {
        printf("%s", str); // print the line of text
    }
    fclose(fp); // close the file
}
