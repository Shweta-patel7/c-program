/**
 * @file string_tokenization.c
 * @brief Splits a string into tokens using strtok().
 *
 * This program reads a string from the user and separates it into
 * individual words (tokens) using the strtok() function. The space
 * character is used as the delimiter.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads a string, tokenizes it using spaces as delimiters, and prints
 * each token separately.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char str[200];
    char *token;

    /**
     * @brief Read string input from the user.
     */
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    /**
     * @brief Get the first token.
     *
     * strtok() modifies the original string by replacing delimiters
     * with the null character ('\0').
     */
    token = strtok(str, " ");

    printf("Tokens of string:\n");

    /**
     * @brief Print all tokens.
     *
     * Subsequent calls to strtok() use NULL to continue tokenizing
     * the same string.
     */
    while (token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL, " ");
    }

    return 0;
}