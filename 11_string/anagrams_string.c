/**
 * @file anagram.c
 * @brief Checks whether two strings are anagrams.
 *
 * This program reads two strings from the user and determines
 * whether they are anagrams by comparing the frequency of each
 * character. Two strings are anagrams if they contain the same
 * characters with the same frequency, regardless of their order.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads two strings, compares their character frequencies,
 * and prints whether they are anagrams.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char s1[100], s2[100];
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    printf("Enter string 1: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter string 2: ");
    fgets(s2, sizeof(s2), stdin);

    /* Remove newline characters added by fgets() */
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    /* If lengths differ, they cannot be anagrams */
    if (strlen(s1) != strlen(s2))
    {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    /**
     * Count the frequency of every character
     * in both strings.
     */
    for (i = 0; s1[i] != '\0'; i++)
    {
        count1[(unsigned char)s1[i]]++;
        count2[(unsigned char)s2[i]]++;
    }

    /**
     * Compare character frequencies.
     */
    for (i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");

    return 0;
}