/**
 * @file bubble_sort_function_pointer.c
 * @brief Bubble sort implementation using function pointers.
 *
 * This program sorts an array in ascending or descending order
 * based on user choice. The comparison logic is passed as a
 * function pointer, making the sorting function reusable.
 */

#include <stdio.h>

/**
 * @brief Comparison function for ascending order.
 *
 * @param a First element
 * @param b Second element
 * @return 1 if a > b (swap needed), otherwise 0
 */
int ascending(int a, int b)
{
    return a > b;
}

/**
 * @brief Comparison function for descending order.
 *
 * @param a First element
 * @param b Second element
 * @return 1 if a < b (swap needed), otherwise 0
 */
int descending(int a, int b)
{
    return a < b;
}

/**
 * @brief Bubble sort function using function pointer.
 *
 * This function sorts the array based on the comparison logic
 * provided by the function pointer.
 *
 * @param arr Array to be sorted
 * @param n Number of elements in the array
 * @param compare Function pointer used for comparison
 */
void sort(int arr[], int n, int (*compare)(int, int))
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * @brief Main function of the program.
 *
 * Takes input array from the user, asks sorting order,
 * and sorts the array using function pointers.
 *
 * @return 0 on successful execution
 */
int main()
{
    int arr[10], n, i, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Ascending Order");
    printf("\n2. Descending Order");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        sort(arr, n, ascending);
    }
    else if (choice == 2)
    {
        sort(arr, n, descending);
    }
    else
    {
        printf("Invalid choice\n");
        return 0;
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}