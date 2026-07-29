/**
 * @file average.c
 * @brief Calculates the average of a variable number of integers.
 *
 * This program demonstrates the use of variadic functions in C
 * using the stdarg.h header file.
 *
 * The avg() function accepts the number of integer arguments followed
 * by the integer values and calculates their average.
 */

#include <stdio.h>
#include <stdarg.h>

/**
 * @brief Calculates the average of a variable number of integers.
 *
 * The function uses a variable argument list to accept a specified
 * number of integer values and calculates their arithmetic average.
 *
 * @param num Number of integer values passed to the function.
 * @param ... Variable number of integer arguments.
 *
 * @return The arithmetic average of the supplied integer values.
 */
double avg(int num, ...)
{
    /**
     * @brief Stores the sum of all input values.
     */
    double sum = 0.0;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Variable argument list.
     */
    va_list valist;

    /**
     * Initialize the variable argument list.
     *
     * The last named parameter is 'num'.
     */
    va_start(valist, num);

    /**
     * Read each integer argument and add it to the sum.
     */
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }

    /**
     * Clean up the variable argument list.
     */
    va_end(valist);

    /**
     * Return the calculated average.
     */
    return sum / num;
}

/**
 * @brief Main function of the program.
 *
 * Calls the avg() function with different numbers of integer
 * arguments and displays the calculated averages.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
    /**
     * Calculate and display the average of 7 integers.
     */
    printf("Average: %f\n",
           avg(7, 67, 98, 52, 32, 21, 5, 96));

    /**
     * Calculate and display the average of 5 integers.
     */
    printf("Average: %f\n",
           avg(5, 1, 2, 3, 4, 5));

    return 0;
}