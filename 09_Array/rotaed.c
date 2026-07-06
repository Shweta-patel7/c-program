/**
 * @file array_rotation.c
 * @brief Performs left or right rotation on an array.
 *
 * This program rotates the elements of an array either to the left
 * or to the right based on user input.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an array and performs left or right rotation depending on
 * user choice, then displays the rotated array.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, first, last;
    char y;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /** Input array */
    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Left or Right rotation (l / r): ");
    scanf(" %c", &y);

    /**
     * @brief Left rotation
     *
     * Moves all elements one position to the left.
     */
    if (y == 'l')
    {
        first = a[0];

        for (i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        a[n - 1] = first;

        printf("Array after left rotation:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    /**
     * @brief Right rotation
     *
     * Moves all elements one position to the right.
     */
    else if (y == 'r')
    {
        last = a[n - 1];

        for (i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = last;

        printf("Array after right rotation:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Invalid input");
    }

    printf("\n");
    return 0;
}