/**
 * @file integer_range.c
 * @brief Displays the range of a signed integer data type.
 *
 * This program uses the limits.h header file to access the minimum
 * and maximum values that can be stored in a signed integer variable.
 */

#include <stdio.h>
#include <limits.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Stores the minimum possible integer value using INT_MIN.
 * - Stores the maximum possible integer value using INT_MAX.
 * - Prints the range of signed integers supported by the system.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Minimum value of a signed integer */
    int var1 = INT_MIN;

    /** Maximum value of a signed integer */
    int var2 = INT_MAX;

    /* Display integer range */
    printf("Range of signed integer: %d to %d", var1, var2);

    return 0;
}