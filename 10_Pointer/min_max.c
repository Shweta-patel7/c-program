#include <stdio.h>

/**
 * @brief Finds the minimum and maximum values in an integer array.
 *
 * This function traverses the given array and determines the
 * smallest and largest elements. The results are returned
 * through the pointer parameters.
 *
 * @param arr Integer array to be searched.
 * @param len Number of elements in the array.
 * @param min Pointer to store the minimum value.
 * @param max Pointer to store the maximum value.
 *
 * @return void
 */
void minmax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;

    /* Traverse the array to find minimum and maximum values */
    for (i = 1; i < len; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }

        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

/**
 * @brief Entry point of the program.
 *
 * Initializes an integer array, calculates its size,
 * calls the minmax() function to find the minimum and
 * maximum values, and displays the results.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int a[] = {5, 9, 6, 546, 54, 89, 7, 65, 122, 5454, 21, 5435, 543, 54, 67};
    int min, max;

    int len = sizeof(a) / sizeof(a[0]);

    /* Find minimum and maximum values */
    minmax(a, len, &min, &max);

    /* Display the results */
    printf("Minimum value = %d\n", min);
    printf("Maximum value = %d\n", max);

    return 0;
}