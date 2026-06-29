#include <stdio.h>

/**
 * @brief Calculates the sum of all elements in an integer array.
 *
 * This function iterates through the given array and returns the
 * sum of its elements.
 *
 * @param b Integer array whose elements are to be summed.
 * @param len Number of elements in the array.
 * @return int Sum of all elements in the array.
 */
int add(int b[], int len)
{
    int sum = 0, i;

    for (i = 0; i < len; i++)
    {
        sum = sum + b[i];
    }

    return sum;
}

/**
 * @brief Entry point of the program.
 *
 * Creates an integer array, calculates its length, calls the
 * add() function to find the sum of the array elements, and
 * prints the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int a[] = {56, 23, 85, 87, 96};
    int len = sizeof(a) / sizeof(a[0]);

    printf("sum = %d\n", add(a, len));

    return 0;
}