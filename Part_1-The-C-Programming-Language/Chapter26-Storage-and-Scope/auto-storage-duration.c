/*  Automatic Storage Duration  -   The default storage duration is automatic storage duration. This storage is allocated when the control flow enters the block in which the data object is declared. It is automatically deallocated when the control flow exits the block marked with }. Here we can say the scope determines the lifetime of automatic storage variables. When our program's control flow reaches the function's closing brace (}), the variable goes out of scope. Once it goes out of scope, it gets destroyed, and the previously occupied memory is automatically released. The automatic storage is often referred to as stack memory. Example:
 *  */

#include <stdio.h>

int main(void)
{
    int x = 123; // x is declared here
    printf("Variable x has automatic storage and a value of: %d\n", x);
} // x goes out of scope here

/*  Our variable x is declared inside a function main. This variable's storage is allocated when our program starts when the control flow enters the main's { brace and deallocated when the control flow hits the closing brace }. Here, the x goes out os scope, and the memory it occupied is automatically released. The same applies to user-defined functions:
 */
