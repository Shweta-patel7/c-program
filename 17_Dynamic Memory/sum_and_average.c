/**
 * @file dynamic_array_sum_average.c
 * @brief Calculates the sum and average of dynamically allocated array elements.
 *
 * This program dynamically allocates memory for an integer array using
 * calloc(). It accepts array elements from the user, calculates their
 * sum and average, displays the results, and finally releases the
 * allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates an integer array using calloc(), reads values
 * from the user, calculates the sum and average, displays the results,
 * and frees the allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if the array size is invalid or memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Number of elements in the array.
     */
    int n;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Pointer to dynamically allocated integer array.
     */
    int *ptr;

    /**
     * @brief Stores the sum of all array elements.
     */
    int sum = 0;

    /**
     * @brief Stores the average of array elements.
     */
    float avg;

    /**
     * Ask the user to enter the number of elements.
     */
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    /**
     * Check whether the number of elements is valid.
     */
    if (n <= 0)
    {
        printf("Invalid number of elements\n");
        return 1;
    }

    /**
     * Allocate memory for n integers and initialize them to zero.
     */
    ptr = calloc(n, sizeof(*ptr));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Read array elements from the user.
     */
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    /**
     * Calculate the sum of all array elements.
     */
    for (i = 0; i < n; i++)
    {
        sum += ptr[i];
    }

    /**
     * Calculate the average using floating-point division.
     */
    avg = (float)sum / n;

    /**
     * Display the sum and average.
     */
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    /**
     * Release the dynamically allocated memory.
     */
    free(ptr);

    /**
     * Set pointer to NULL to avoid a dangling pointer.
     */
    ptr = NULL;

    return 0;
}/**
 * @file dynamic_array_sum_average.c
 * @brief Calculates the sum and average of dynamically allocated array elements.
 *
 * This program dynamically allocates memory for an integer array using
 * calloc(). It accepts array elements from the user, calculates their
 * sum and average, displays the results, and finally releases the
 * allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates an integer array using calloc(), reads values
 * from the user, calculates the sum and average, displays the results,
 * and frees the allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if the array size is invalid or memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Number of elements in the array.
     */
    int n;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Pointer to dynamically allocated integer array.
     */
    int *ptr;

    /**
     * @brief Stores the sum of all array elements.
     */
    int sum = 0;

    /**
     * @brief Stores the average of array elements.
     */
    float avg;

    /**
     * Ask the user to enter the number of elements.
     */
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    /**
     * Check whether the number of elements is valid.
     */
    if (n <= 0)
    {
        printf("Invalid number of elements\n");
        return 1;
    }

    /**
     * Allocate memory for n integers and initialize them to zero.
     */
    ptr = calloc(n, sizeof(*ptr));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Read array elements from the user.
     */
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    /**
     * Calculate the sum of all array elements.
     */
    for (i = 0; i < n; i++)
    {
        sum += ptr[i];
    }

    /**
     * Calculate the average using floating-point division.
     */
    avg = (float)sum / n;

    /**
     * Display the sum and average.
     */
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    /**
     * Release the dynamically allocated memory.
     */
    free(ptr);

    /**
     * Set pointer to NULL to avoid a dangling pointer.
     */
    ptr = NULL;

    return 0;
}