/**
 * @file function_counter.c
 * @brief Demonstrates a function using a global counter variable.
 *
 * This program uses a global variable to count the number of times
 * a function is called. Each call to value() increments the counter
 * and returns the updated value.
 */

#include <stdio.h>

/**
 * @brief Global counter variable.
 *
 * This variable stores the number of times the value() function
 * has been called. Since it is global, its value persists between
 * function calls.
 */
int count = 0;

/**
 * @brief Increments and returns the counter value.
 *
 * Each time this function is called, the global variable `count`
 * is increased by 1 and the updated value is returned.
 *
 * @return int The updated counter value.
 */
int value(void)
{
    count = count + 1;
    return count;
}

/**
 * @brief Entry point of the program.
 *
 * The program calls the value() function three times. Each call
 * increases the global counter, and the final returned value is
 * displayed.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the value returned by the function */
    int varable;

    varable = value();
    varable = value();
    varable = value();

    printf("%d", varable);

    return 0;
}