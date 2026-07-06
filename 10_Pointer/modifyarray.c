/**
 * @file modify_array_pointer.c
 * @brief Demonstrates array modification using pointers in C.
 *
 * This program passes an array to a function using its base address
 * (pointer) and modifies each element by doubling its value.
 */

#include <stdio.h>

/**
 * @brief Modifies array elements by doubling their values.
 *
 * This function uses pointer arithmetic to access and update each
 * element of the array.
 *
 * @param p Pointer to the array
 * @param size Number of elements in the array
 */
void modifyArray(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(p + i) = *(p + i) * 2;
    }
}

/**
 * @brief Main function of the program.
 *
 * Displays original array, calls modifyArray() to modify elements,
 * and then displays the updated array.
 *
 * @return 0 on successful execution
 */
int main()
{
    /** Integer array */
    int arr[] = {10, 20, 30, 40, 50};

    /** Size of array */
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    /** Function call with array base address */
    modifyArray(arr, size);

    printf("\nModified array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}