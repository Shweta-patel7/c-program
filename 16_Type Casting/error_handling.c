/**
 * @file error_handling.c
 * @brief Demonstrates error handling using errno, strerror(), and perror().
 *
 * This program attempts to open a file in read mode. If the file
 * cannot be opened, it demonstrates three ways to report the error:
 *
 * 1. errno     - Stores the error number.
 * 2. strerror()- Converts the error number into a descriptive string.
 * 3. perror()  - Prints a custom message followed by the error description.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/**
 * @brief Main function of the program.
 *
 * Attempts to open "abc.txt" in read mode and demonstrates
 * different methods of reporting file-opening errors.
 *
 * @return 0 on successful execution.
 * @return 1 if the file cannot be opened.
 */
int main(void)
{
    /**
     * @brief File pointer used to access abc.txt.
     */
    FILE *p;

    /**
     * Attempt to open the file in read mode.
     */
    p = fopen("abc.txt", "r");

    /**
     * Check whether the file was opened successfully.
     */
    if (p == NULL)
    {
        /**
         * Print the error number stored in errno.
         */
        printf("Number of error: %d\n", errno);

        /**
         * Convert errno into a human-readable error message.
         */
        printf("Error print with strerror: %s\n",
               strerror(errno));

        /**
         * Print a custom message followed by the
         * corresponding error description.
         */
        perror("Error with perror");

        return 1;
    }

    /**
     * Close the file if it was successfully opened.
     */
    fclose(p);

    return 0;
}