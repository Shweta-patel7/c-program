#include <stdio.h>

/**
 * Finds the largest of three integers.
 *
 * Compares three integer values and returns the
 * maximum value among them.
 *
 * @param a First integer.
 * @param b Second integer.
 * @param c Third integer.
 * @return int The largest of the three integers.
 */
int max(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

/**
 * @brief Entry point of the program.
 *
 * Reads three integers from the user, determines
 * the maximum value using the max() function,
 * and displays the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int x, y, z;

    printf("Enter 3 numbers for finding maximum: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Maximum number = %d\n", max(x, y, z));

    return 0;
}