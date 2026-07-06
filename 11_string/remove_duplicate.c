/**
 * @file remove_duplicates.c
 * @brief Removes duplicate characters from a string.
 *
 * This program reads a string from the user and removes all duplicate
 * characters by shifting elements to the left when duplicates are found.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string, removes duplicate characters using nested loops,
 * and prints the modified string.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int i, j, k;
    char s[100];

    printf("Enter string: ");
    gets(s);

    printf("Before removing duplicates: %s\n", s);

    /**
     * @brief Loop through each character
     */
    for (i = 0; s[i] != '\0'; i++)
    {
        /**
         * @brief Compare with remaining characters
         */
        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] == s[j])
            {
                /**
                 * @brief Shift characters left to remove duplicate
                 */
                for (k = j; s[k] != '\0'; k++)
                {
                    s[k] = s[k + 1];
                }

                /**
                 * @brief Recheck current index after shifting
                 */
                j--;
            }
        }
    }

    printf("After removing duplicates: %s\n", s);

    return 0;
}