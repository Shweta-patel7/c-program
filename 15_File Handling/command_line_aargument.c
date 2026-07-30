/**
 * @file command_line_sum.c
 * @brief Calculates the sum of integer command-line arguments.
 *
 * This program demonstrates how to use command-line arguments
 * in C. It displays each argument, converts the arguments from
 * strings to integers using atoi(), and calculates their sum.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Displays the number of command-line arguments, prints each
 * argument, converts the numeric arguments to integers, and
 * calculates their sum.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of strings containing the command-line arguments.
 *
 * @return 0 on successful execution.
 */
int main(int argc, const char *argv[])
{
    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Array used to store converted integer arguments.
     */
    int a[10];

    /**
     * @brief Stores the sum of all command-line integer arguments.
     */
    int sum = 0;

    /**
     * Display the total number of command-line arguments.
     *
     * argc includes the program name stored in argv[0].
     */
    printf("The value of argc is %d\n", argc);

    /**
     * Display each command-line argument.
     *
     * argv[0] contains the program name.
     * argv[1] onwards contain the user-provided arguments.
     */
    for (i = 0; i < argc; i++)
    {
        printf("Argument index %d, having argument %s\n",
               i, argv[i]);
    }

    /**
     * Convert command-line arguments from strings to integers
     * and calculate their sum.
     *
     * Start from index 1 because argv[0] contains the program name.
     */
    for (i = 1; i < argc; i++)
    {
        /**
         * Check that the array does not exceed its capacity.
         */
        if (i >= 10)
        {
            printf("Error: Maximum 9 numbers can be entered.\n");
            break;
        }

        /**
         * Convert the command-line argument from string to integer.
         */
        a[i] = atoi(argv[i]);

        /**
         * Add the converted integer to the total sum.
         */
        sum += a[i];

        /*
         * Alternative method using sscanf():
         *
         * sscanf(argv[i], "%d", &a[i]);
         */
    }

    /**
     * Display the calculated sum.
     */
    printf("Sum = %d\n", sum);

    return 0;
}