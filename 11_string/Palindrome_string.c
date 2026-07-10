/**
 * @file string_palindrome.c
 * @brief Checks whether a string is a palindrome.
 *
 * This program removes non-alphanumeric characters from a string,
 * converts the remaining characters to lowercase, and checks whether
 * the resulting string reads the same forward and backward.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * @brief Main function.
 *
 * Reads a string from the user, creates a cleaned version containing
 * only alphanumeric characters, converts it to lowercase, and checks
 * whether it is a palindrome.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char str[100];
    char clear[100];
    int i;
    int j = 0;

    /**
     * @brief Read input string.
     */
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /**
     * @brief Remove non-alphanumeric characters and convert to lowercase.
     *
     * Only letters and numbers are copied into the clear array.
     */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalnum((unsigned char)str[i]))
        {
            clear[j] = tolower((unsigned char)str[i]);
            j++;
        }
    }

    /* Add null terminator to the cleaned string */
    clear[j] = '\0';

    /**
     * @brief Check palindrome using two-pointer technique.
     */
    int left = 0;
    int right = j - 1;
    int palindrome = 1;

    while (left < right)
    {
        if (clear[left] != clear[right])
        {
            palindrome = 0;
            break;
        }

        left++;
        right--;
    }

    /**
     * @brief Display palindrome result.
     */
    if (palindrome)
    {
        printf("%s is a palindrome\n", str);
    }
    else
    {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}