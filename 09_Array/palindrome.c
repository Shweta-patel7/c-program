/**
 * @file array_palindrome.c
 * @brief Checks whether an array is a palindrome.
 *
 * This program reads an integer array and checks if it reads the same
 * forward and backward (palindrome condition).
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an array from the user and checks whether it is a palindrome
 * by comparing elements from both ends.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, flag = 1;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    /** Input array */
    int a[n];

    printf("Enter %d elements of array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /**
     * @brief Palindrome checking logic
     *
     * Compare elements from start and end moving toward center.
     */
    for (i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Array is Palindrome\n");
    else
        printf("Array is Not Palindrome\n");

    return 0;
}