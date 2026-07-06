/**
 * @file even_odd_array.c
 * @brief Determines whether each element in an array is even or odd.
 *
 * This program reads an array from the user and checks each element
 * to determine whether it is even or odd using the modulus operator.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer array from the user and prints whether each element
 * is even or odd.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /** Integer array */
    int a[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /**
     * @brief Check each element for even or odd.
     */
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is even\n", a[i]);
        }
        else
        {
            printf("%d is odd\n", a[i]);
        }
    }

    return 0;
}