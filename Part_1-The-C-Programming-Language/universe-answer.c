/*  Print in a file, the universe answer!
 */
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("the-answer-is.42", "w");
    fputs("42", fp);
    fclose(fp);
}
