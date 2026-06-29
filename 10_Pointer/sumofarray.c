#include <stdio.h>

/**
 * @brief Calculates the sum of array elements using pointers.
 *
 * This program initializes an integer array, uses a pointer to
 * traverse the array, calculates the sum of all elements, and
 * displays the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int a[] = {56, 63, 78, 23, 45};
    int sum = 0, *p;

    /* Traverse the array using a pointer and calculate the sum */
    for (p = &a[0]; p <= &a[4]; p++)
    {
        sum = sum + *p;
    }

    /* Display the sum of the array elements */
    printf("sum = %d\n", sum);

    return 0;
}