/*  This program prints the result of two integer in a file text.
 */

#include <stdio.h>

int main(void)
{
    int x = 28;
    int y = 14;
    FILE *fp = fopen("Result02.txt", "w");
    int result = x + y;
    fprintf(fp, "%d + %d = %d", x, y, result);
    fclose(fp);
} 
