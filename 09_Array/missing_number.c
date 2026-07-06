/**
 * @file missing_number.c
 * @brief Finds the missing number in a sequence from 1 to n.
 *
 * This program assumes an array containing numbers from 1 to n
 * with one number missing. It finds the missing number using
 * the mathematical sum formula.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads n-1 elements from the user, calculates the expected sum
 * from 1 to n, and finds the missing number by subtraction.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i;
    int sum = 0, total, missing;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    /** Array contains n-1 elements */
    int a[n - 1];

    printf("Enter %d elements:\n", n - 1);

    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    /**
     * @brief Expected sum from 1 to n using formula
     * S = n(n+1)/2
     */
    total = n * (n + 1) / 2;

    /** Missing number calculation */
    missing = total - sum;

    printf("Missing value is: %d\n", missing);

    return 0;
}