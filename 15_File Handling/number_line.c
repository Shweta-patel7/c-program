/**
 * @file line_count.c
 * @brief Counts the number of lines in a text file.
 *
 * This program opens a text file in read mode and counts the number
 * of newline characters ('\n') to determine the number of lines
 * present in the file.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Opens "write.txt" in read mode and counts the number of lines
 * by counting newline characters in the file.
 *
 * @return 0 on successful execution.
 * @return 1 if the file cannot be opened.
 */
int main(void)
{
    /**
     * @brief File pointer used to access the input file.
     */
    FILE *fp = NULL;

    /**
     * @brief Stores the number of lines in the file.
     */
    int count = 1;

    /**
     * @brief Stores the character read from the file.
     *
     * An int is used instead of char because fgetc() returns
     * an int so that it can represent the special EOF value.
     */
    int c;

    /**
     * Open the file in read mode.
     */
    fp = fopen("write.txt", "r");

    /**
     * Check whether the file was opened successfully.
     */
    if (fp == NULL)
    {
        printf("Error: Unable to open file\n");
        return 1;
    }

    /**
     * Read the file character by character until EOF is reached.
     */
    while ((c = fgetc(fp)) != EOF)
    {
        /**
         * Increment the line count whenever a newline
         * character is encountered.
         */
        if (c == '\n')
        {
            count++;
        }
    }

    /**
     * Display the total number of lines.
     */
    printf("Number of lines in file: %d\n", count);

    /**
     * Close the file.
     */
    fclose(fp);

    return 0;
}