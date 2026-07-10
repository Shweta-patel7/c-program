/**
 * @file reverse_words.c
 * @brief Reverses each word of a string.
 *
 * This program reads a string from the user and reverses each individual
 * word while keeping the word order unchanged.
 *
 * Example:
 * Input  : Hello World
 * Output : olleH dlroW
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads a string, identifies each word using spaces as separators,
 * and reverses the characters of every word using swapping.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char str[100];
    int start = 0;
    int end;
    int i;
    int len;

    /**
     * @brief Read string input from the user.
     */
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Remove newline character added by fgets() */
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    /**
     * @brief Reverse each word in the string.
     *
     * When a space or end of string is found, the current word
     * boundaries are identified and characters are swapped to reverse it.
     */
    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            /* Move start index to the next word */
            start = i + 1;
        }
    }

    printf("Reversed string: %s\n", str);

    return 0;
}