/**
 * @file file_operation.c
 * @brief Demonstrates file reading, repositioning, writing, and file position.
 *
 * This program opens a file in read/write mode, reads and displays
 * its contents character by character, moves the file position to
 * the beginning using fseek(), writes new data, and displays the
 * current file position using ftell().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Opens "user.txt" in read/write mode, reads the file contents,
 * moves the file pointer to the beginning of the file, writes
 * new content, and displays the current file position.
 *
 * @return 0 on successful execution.
 * @return 1 if the file cannot be opened.
 */
int main(void)
{
    /**
     * @brief Stores the character read from the file.
     *
     * An int is used because fgetc() returns an int so that
     * it can represent every character and the special EOF value.
     */
    int c;

    /**
     * @brief File pointer used to access user.txt.
     */
    FILE *fp = NULL;

    /**
     * Open the file in read/write mode.
     *
     * The "r+" mode opens an existing file for both reading
     * and writing. The existing contents are preserved.
     */
    fp = fopen("user.txt", "r+");

    /**
     * Check whether the file was opened successfully.
     */
    if (fp == NULL)
    {
        printf("Error: Unable to open file\n");
        return 1;
    }

    /**
     * Read and display the file contents character by character.
     *
     * The loop continues until fgetc() returns EOF.
     */
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }

    /**
     * Move the file position indicator to the beginning of the file.
     */
    fseek(fp, 0, SEEK_SET);

    /**
     * Write "arirang" at the beginning of the file.
     *
     * This overwrites existing characters from the beginning
     * of the file.
     */
    fputs("arirang", fp);

    /**
     * Display the current file position.
     */
    printf("%ld\n", ftell(fp));

    /**
     * Close the file.
     */
    fclose(fp);

    return 0;
}