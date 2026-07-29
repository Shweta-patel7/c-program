/**
 * @file write_string.c
 * @brief Writes a user-provided string to a text file.
 *
 * This program opens "user.txt" in write mode, reads a string
 * from the user, writes the string to the file using fputs(),
 * and then closes the file.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Opens "user.txt" in write mode and writes the string entered
 * by the user into the file.
 *
 * @return 0 on successful execution.
 * @return 1 if the file cannot be opened.
 */
int main(void)
{
    /**
     * @brief File pointer used to access the output file.
     */
    FILE *fp;

    /**
     * @brief Buffer used to store the string entered by the user.
     */
    char str[50];

    /**
     * Open the file in write mode.
     *
     * If the file does not exist, it will be created.
     * If the file already exists, its previous contents will be erased.
     */
    fp = fopen("user.txt", "w");

    /**
     * Check whether the file was opened successfully.
     */
    if (fp == NULL)
    {
        printf("Error: Unable to open file\n");
        return 1;
    }

    /**
     * Read a string from the user.
     *
     * fgets() is used instead of gets() because gets() is unsafe
     * and can cause a buffer overflow.
     */
    printf("Enter string to file: ");
    fgets(str, sizeof(str), stdin);

    /**
     * Write the string to the file.
     */
    fputs(str, fp);

    /**
     * Close the file after writing.
     */
    fclose(fp);

    return 0;
}