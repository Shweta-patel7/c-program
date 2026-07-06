/**
 * @file bubble_sort_pointer.c
 * @brief Bubble sort implementation using pointers.
 *
 * This program sorts an integer array in ascending order using
 * bubble sort algorithm with pointer arithmetic instead of array indexing.
 */

#include <stdio.h>

/**
 * @brief Sorts an array using bubble sort (pointer-based).
 *
 * This function performs bubble sort on an integer array using
 * pointer arithmetic to access and swap elements.
 *
 * @param a Pointer to the array
 * @param n Number of elements in the array
 */
void bubblesort(int *a, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}

/**
 * @brief Main function of the program.
 *
 * Takes input from the user, calls bubble sort function,
 * and displays the sorted array.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubblesort(a, n);

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }

    printf("\n");

    return 0;
}