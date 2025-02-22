/*  To check if the file can be opened, we inspect the pointer's value using the if (!fp) expression. If it is NULL, the opening of a file failed, and we exit the program:
 */

#include <stdio.h>

int main(void)
{
    char str[100];
    FILE *fp = fopen("myyfile.txt", "r"); // open a file for reading
    if (!fp)
    {
        printf("Error opening the file. Exiting...\n");
        return 1; // exit the program with an error
    }
    while (fgets(str, 100, fp) != NULL) // read line of text
    {
        printf("%s", str); // print line of text
    }
    fclose(fp); // close the file
}
