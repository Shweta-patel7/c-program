/**
 * @file read_file.c
 * @brief Reads and displays the contents of a text file line by line.
 *
 * This program opens "abc.txt" in read mode, reads the file
 * line by line using fgets(), displays each line, and then
 * closes the file.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Opens "abc.txt" in read mode and reads its contents line by line.
 * Each line is stored in a character buffer and printed to the console.
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
     * @brief Buffer used to store each line read from the file.
     *
     * The buffer can store up to 9 characters plus the null
     * terminating character '\0'.
     */
    char str[10];

    /**
     * Open the file in read mode.
     */
    fp = fopen("abc.txt", "r");

    /**
     * Check whether the file was opened successfully.
     */
    if (fp == NULL)
    {
        printf("Error: Unable to open file\n");
        return 1;
    }

    /**
     * Read the file line by line until fgets() reaches EOF
     * or encounters an error.
     */
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        /**
         * Display the string read from the file.
         */
        printf("%s", str);
    }

    /**
     * Close the file after reading is complete.
     */
    fclose(fp);

    return 0;
}