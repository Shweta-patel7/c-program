/**
 * @file write_file.c
 * @brief Writes a string and an integer to a text file.
 *
 * This program opens a file named "abc.txt" in write mode,
 * writes a string and an integer to the file using fprintf(),
 * and then closes the file.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Opens "abc.txt" in write mode and writes the contents of
 * a character array and an integer to the file.
 *
 * @return 0 on successful execution.
 * @return 1 if the file cannot be opened.
 */
int main(void)
{
    /**
     * @brief File pointer used to access the output file.
     */
    FILE *fp = NULL;

    /**
     * @brief Character array containing the string to be written.
     */
    char c[20] = "shweta";

    /**
     * @brief Integer value to be written to the file.
     */
    int i = 758768;

    /**
     * Open abc.txt in write mode.
     *
     * If the file does not exist, it will be created.
     * If the file already exists, its previous contents will be erased.
     */
    fp = fopen("abc.txt", "w");

    /**
     * Check whether the file was opened successfully.
     */
    if (fp == NULL)
    {
        printf("Error: Unable to open file\n");
        return 1;
    }

    /**
     * Write the string and integer to the file.
     */
    fprintf(fp, "%s, %d", c, i);

    /**
     * Close the file after completing the write operation.
     */
    fclose(fp);

    return 0;
}