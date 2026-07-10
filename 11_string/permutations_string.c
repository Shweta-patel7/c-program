/**
 * @file string_permutation.c
 * @brief Generates all permutations of a string.
 *
 * This program generates all possible arrangements of characters
 * in a given string using recursion and swapping technique.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Swaps two characters.
 *
 * @param a Pointer to the first character.
 * @param b Pointer to the second character.
 */
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief Generates permutations of a string recursively.
 *
 * The function fixes one character at a time and swaps the remaining
 * characters to generate different arrangements.
 *
 * @param str String whose permutations are generated.
 * @param left Starting index of the current position.
 * @param right Ending index of the string.
 */
void permute(char str[], int left, int right)
{
    int i;

    /**
     * @brief Base condition.
     *
     * When left reaches right, one complete permutation is formed.
     */
    if (left == right)
    {
        printf("%s\n", str);
    }
    else
    {
        /**
         * @brief Swap each character with the current position
         * and generate permutations recursively.
         */
        for (i = left; i <= right; i++)
        {
            swap(&str[left], &str[i]);

            permute(str, left + 1, right);

            /* Restore original string after recursive call */
            swap(&str[left], &str[i]);
        }
    }
}

/**
 * @brief Main function.
 *
 * Reads a string from the user and displays all possible permutations
 * of that string.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Remove newline character added by fgets() */
    str[strcspn(str, "\n")] = '\0';

    printf("Permutations are:\n");

    permute(str, 0, strlen(str) - 1);

    return 0;
}