/*  Do Not Read Out of Bounds   -   Trying to access an array element that is not there invokes undefined behavior. We say we are reading out of bounds. The following example demonstrates a common scenario of trying to access a nonexistent, out of bounds array element:
 */

#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Trying to read out of bounds...\n");
    printf("The non-existent array element is: %d\n", arr[5]);
}

/*  In this example, we declared an array of five integers. We then try to access a sixth array element using a[5]. But since there is no element a[5], we are invoking undefined behavior. This might cause our program to do anything, including the strange output result above. The same effect would be if we tried to access a[10], a[256], and so on.
 *  We can only access elements a[0] through a[4]. If we want to access only the last array element, we can rewrite the above example to be:
 */

#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Accessing the existent array element...\n");
    printf("The exitent array element is %d\n", arr[4]);
}
