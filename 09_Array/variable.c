/**
 * @file reverse_array.c
 * @brief Program to display the elements of an array in reverse order.
 *
 * This program reads an array of integers from the user and
 * prints the elements in reverse order without modifying the array.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads the number of elements and the array values from the user,
 * then displays the array elements in reverse order.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int n;
    printf("Enter number of elements you want to reverse: ");
    scanf("%d", &n);

    int a[n];
    int i;

    printf("Enter all %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}