/**
 * @file append.c
 * @brief Appends user-provided content to a text file.
 *
 * This program opens a file named "append.txt" in append mode,
 * reads a line of text from the user, and appends the entered
 * content to the file.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Opens "append.txt" in append mode, accepts content from the user,
 * and appends the content to the end of the file.
 *
 * @return 0 on successful execution.
 * @return 1 if the file cannot be opened.
 */
int main(void)
{
    /**
     * @brief Buffer used to store user input.
     */
    char str[20];

    /**
     * @brief File pointer used to access the append.txt file.
     */
    FILE *fp = NULL;

    /**
     * Open the file in append mode.
     *
     * If the file does not exist, it will be created.
     * New content is added at the end of the file.
     */
    fp = fopen("append.txt", "a");

    /**
     * Check whether the file was opened successfully.
     */
    if (fp == NULL)
    {
        printf("Error: Unable to open file\n");
        return 1;
    }

    /**
     * Read content from the user.
     */
    printf("Enter the content: ");
    gets(str);

    /**
     * Append the user-provided content to the file.
     */
    fprintf(fp, "%s", str);

    printf("Successfully appended\n");

    /**
     * Close the file after completing the write operation.
     */
    fclose(fp);

    return 0;
}