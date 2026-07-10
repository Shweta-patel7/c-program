/**
 * @file string_replace.c
 * @brief Replaces a word in a string with another word.
 *
 * This program reads a string from the user, searches for a given word,
 * and replaces every occurrence of that word with a new word.
 * It performs the replacement without using any built-in replace function.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * The function accepts a string, a word to find, and a replacement word.
 * It searches the string character by character using strncmp() and
 * creates a modified string with the replaced words.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char str[200], oldWord[50], newWord[50];
    char result[300];
    int i = 0;
    int j = 0;
    int k;
    int oldLen;
    int newLen;

    /**
     * @brief Read input string from the user.
     */
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    /* Remove newline character added by fgets() */
    str[strcspn(str, "\n")] = '\0';

    /**
     * @brief Read the word to search and replacement word.
     */
    printf("Enter the word to find: ");
    scanf("%49s", oldWord);

    printf("Enter the replacement word: ");
    scanf("%49s", newWord);

    /* Calculate lengths of old and new words */
    oldLen = strlen(oldWord);
    newLen = strlen(newWord);

    /**
     * @brief Replace occurrences of oldWord with newWord.
     *
     * The loop checks each position in the original string.
     * If oldWord is found, characters of newWord are copied
     * into result. Otherwise, the current character is copied.
     */
    while (str[i] != '\0')
    {
        if (strncmp(&str[i], oldWord, oldLen) == 0)
        {
            for (k = 0; k < newLen; k++)
            {
                result[j++] = newWord[k];
            }

            i += oldLen;
        }
        else
        {
            result[j++] = str[i++];
        }
    }

    /* Add null terminator to complete the result string */
    result[j] = '\0';

    printf("Modified string: %s\n", result);

    return 0;
}