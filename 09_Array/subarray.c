/**
 * @file max_subarray_sum.c
 * @brief Finds the maximum subarray sum using brute force method.
 *
 * This program calculates the maximum sum of all possible contiguous
 * subarrays using a nested loop approach.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an array from the user and computes the maximum subarray sum
 * using a brute-force O(n^2) approach.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, j;
    int curresum, maxsum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /** Input array */
    int a[n];

    printf("Enter values of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /** Initialize maximum sum with first element */
    maxsum = a[0];

    /**
     * @brief Brute force subarray sum calculation
     *
     * Generate all subarrays and compute their sums.
     */
    for (i = 0; i < n; i++)
    {
        curresum = 0;

        for (j = i; j < n; j++)
        {
            curresum = curresum + a[j];

            if (curresum > maxsum)
            {
                maxsum = curresum;
            }
        }
    }

    printf("Maximum subarray sum = %d\n", maxsum);

    return 0;
}