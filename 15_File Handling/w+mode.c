/**
 * @file file_read_write.c
 * @brief Demonstrates writing to and reading from a file using w+ mode.
 *
 * This program opens "write.txt" in read/write mode, writes a string
 * to the file using fputs(), moves the file position back to the
 * beginning using rewind(), and then reads and displays the file
 * contents character by character using fgetc().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Opens "write.txt" in w+ mode, writes a string to the file,
 * rewinds the file position to the beginning, reads the file
 * character by character, and displays the contents.
 *
 * @return 0 on successful execution.
 * @return 1 if the file cannot be opened.
 */
int main(void)
{
    /**
     * @brief String to be written to the file.
     */
    char str[50] = "hello hi anong";

    /**
     * @brief Stores the character read from the file.
     *
     * An int is used instead of char because fgetc() returns
     * an int so that it can represent all character values
     * and the special EOF value.
     */
    int c;

    /**
     * @brief File pointer used to access the file.
     */
    FILE *fp = NULL;

    /**
     * Open the file in read/write mode.
     *
     * The "w+" mode creates the file if it does not exist.
     * If the file already exists, its previous contents are erased.
     */
    fp = fopen("write.txt", "w+");

    /**
     * Check whether the file was opened successfully.
     */
    if (fp == NULL)
    {
        printf("Error: Unable to open file\n");
        return 1;
    }

    /**
     * Write the string to the file.
     */
    fputs(str, fp);

    /**
     * Move the file position indicator to the beginning
     * of the file.
     */
    rewind(fp);

    /**
     * Read the file character by character until EOF is reached.
     */
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }

    printf("\n");

    /**
     * Close the file.
     */
    fclose(fp);

    return 0;
}