#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    /* Pointer to a constant */
    const int *ptr1 = &a;

    printf("Pointer to a constant:\n");
    printf("Value = %d\n", *ptr1);

    // *ptr1 = 15;    // Error: Cannot modify the value through ptr1
    ptr1 = &b;        // Allowed: Pointer can point to another variable
    printf("After changing pointer, Value = %d\n", *ptr1);

    /* Constant pointer */
    int *const ptr2 = &a;

    printf("\nConstant pointer:\n");
    printf("Value = %d\n", *ptr2);

    *ptr2 = 15;       // Allowed: Value can be modified
    printf("Modified value of a = %d\n", a);

    // ptr2 = &b;     // Error: Constant pointer cannot point to another variable

    return 0;
}