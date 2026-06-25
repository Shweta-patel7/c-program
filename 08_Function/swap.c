#include <stdio.h>

/**
 * @brief Swaps the values of two integers using pointers.
 *
 * This function exchanges the values stored at the memory
 * locations pointed to by ptr1 and ptr2.
 *
 * @param ptr1 Pointer to the first integer.
 * @param ptr2 Pointer to the second integer.
 * @return int No meaningful value is returned.
 */
int swap(int *ptr1, int *ptr2);

/**
 * @brief Entry point of the program.
 *
 * Reads two integers from the user, swaps their values
 * using the swap() function, and displays the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int a, b;

    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("Swapped numbers: %d %d\n", a, b);

    return 0;
}

/**
 * @brief Swaps two integers using pointers.
 *
 * @param ptr1 Pointer to the first integer.
 * @param ptr2 Pointer to the second integer.
 * @return int No meaningful value is returned.
 */
int swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    return 0;
}