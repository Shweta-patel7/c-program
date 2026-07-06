/**
 * @file swap_using_pointers.c
 * @brief Demonstrates swapping of two numbers using pointers.
 *
 * This program swaps the values of two integers using a function
 * with pointer parameters, showing pass-by-reference in C.
 */

#include <stdio.h>

/**
 * @brief Swaps two integer values using pointers.
 *
 * This function exchanges the values of two integers by accessing
 * their memory addresses.
 *
 * @param a Pointer to first integer
 * @param b Pointer to second integer
 */
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief Main function of the program.
 *
 * Initializes two variables, displays them before and after swapping
 * using the swap() function.
 *
 * @return 0 on successful execution
 */
int main()
{
    int x = 67, y = 45;

    printf("Before swapping = %d %d\n", x, y);

    /** Function call with addresses */
    swap(&x, &y);

    printf("After swapping = %d %d\n", x, y);

    return 0;
}