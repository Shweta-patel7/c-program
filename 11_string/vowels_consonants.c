/**
 * @file vowel_consonant_digit_space.c
 * @brief Counts vowels, consonants, digits, and spaces in a string.
 *
 * This program reads a string and analyzes each character to count:
 * vowels, consonants, digits, and spaces.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string from the user and counts vowels, consonants, digits,
 * and spaces using character-wise traversal.
 *
 * @return void
 */
void main()
{
    int i, vowel = 0, conson = 0, space = 0, dig = 0;
    char s[100], c;

    printf("Enter a string: ");
    gets(s);

    /**
     * @brief Traverse each character of the string
     */
    for (i = 0; s[i] != '\0'; i++)
    {
        c = s[i];

        /**
         * @brief Check for digits
         */
        if (c >= '0' && c <= '9')
        {
            dig++;
        }

        /**
         * @brief Check for spaces
         */
        else if (c == ' ')
        {
            space++;
        }

        /**
         * @brief Check for alphabets
         */
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            /**
             * @brief Check vowels
             */
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                vowel++;
            }
            else
            {
                conson++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d\n", conson);
    printf("Number of spaces: %d\n", space);
    printf("Number of digits: %d\n", dig);
}