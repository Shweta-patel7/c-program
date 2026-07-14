/**
 * @file string_reverse.c
 * @brief Reverses a given string.
 *
 * This program reads a string, calculates its length, and reverses it
 * in-place using the swapping technique.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string from the user, computes its length, reverses it using
 * swapping, and displays both original and reversed strings.
 *
 * @return 0 on successful execution
 */
void reverse(char *s)
{
    int i, l = 0;
    char temp;

    
    /**
     * @brief Calculate length of string
     */
    for (i = 0; s[i] != '\0'; i++)
    {
        l++;
    }

    /**
     * @brief Reverse string using swapping
     */
    for (i = 0; i < l / 2; i++)
    {
        temp = s[i];
        s[i] = s[l - 1 - i];
        s[l - 1 - i] = temp;
    }

    
}

int main()
{
    char s1[10];
    printf("Enter a string: ");
    gets(s1);

    printf("Before reversing string: %s\n", s1);

    reverse(s1);
    printf("Reverse of string: %s\n", s1);

    return 0;
}