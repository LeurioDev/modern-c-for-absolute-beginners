/*  To write two lines of text, we use the following example:
 */

#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("twolines.txt", "w"); // open a file for writing
    fprintf(fp, "%s\n%s", "Line 1", "Line 2"); // write two lines
    fclose(fp); // close the file
}
