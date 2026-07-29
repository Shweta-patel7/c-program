/**
 * @file even_odd.c
 * @brief Counts the number of even and odd integers using variadic arguments.
 *
 * This program demonstrates the use of a variadic function in C.
 * The evenodd() function accepts a specified number of integers,
 * counts how many are even and how many are odd, and displays
 * the results.
 */

#include <stdio.h>
#include <stdarg.h>

/**
 * @brief Counts and displays even and odd numbers.
 *
 * The function accepts a variable number of integer arguments.
 * The first parameter specifies how many integer values follow.
 *
 * @param num Number of integer values to process.
 * @param ... Variable number of integer arguments.
 *
 * @return Nothing.
 */
void evenodd(int num, ...)
{
    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Stores the number of even integers.
     */
    int even = 0;

    /**
     * @brief Stores the number of odd integers.
     */
    int odd = 0;

    /**
     * @brief Variable argument list.
     */
    va_list vlist;

    /**
     * Initialize the variable argument list.
     *
     * The last named parameter is 'num'.
     */
    va_start(vlist, num);

    /**
     * Process each integer passed through the variable argument list.
     */
    for (i = 0; i < num; i++)
    {
        /**
         * Retrieve the next integer argument and check
         * whether it is even or odd.
         */
        if (va_arg(vlist, int) % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    /**
     * Clean up the variable argument list.
     */
    va_end(vlist);

    /**
     * Display the number of even integers.
     */
    printf("No. of even numbers: %d\n", even);

    /**
     * Display the number of odd integers.
     */
    printf("No. of odd numbers: %d\n", odd);
}

/**
 * @brief Main function of the program.
 *
 * Calls the evenodd() function with seven integer values
 * and displays the number of even and odd values.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
    /**
     * Process seven integer values.
     */
    evenodd(7, 67, 9, 2, 1, 7, 46, 12);

    return 0;
}