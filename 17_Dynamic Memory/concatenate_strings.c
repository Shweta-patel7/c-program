/**
 * @file dynamic_string_concatenation.c
 * @brief Dynamically concatenates two strings using malloc().
 *
 * This program reads two strings from the user, dynamically allocates
 * enough memory to store both strings separated by a space, concatenates
 * them, displays the resulting string, and finally releases the allocated
 * memory using free().
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Main function of the program.
 *
 * Reads two strings, dynamically allocates memory for their concatenation,
 * copies the first string, adds a space, copies the second string, and
 * displays the concatenated result.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Length of the first string.
     */
    int l1;

    /**
     * @brief Length of the second string.
     */
    int l2;

    /**
     * @brief Total length of both strings.
     */
    int tl;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Pointer to dynamically allocated memory.
     */
    char *ptr;

    /**
     * @brief Buffer for the first input string.
     */
    char str1[50];

    /**
     * @brief Buffer for the second input string.
     */
    char str2[50];

    /**
     * Read the first string from the user.
     */
    printf("Enter string 1: ");
    scanf(" %49[^\n]", str1);

    /**
     * Calculate the length of the first string.
     */
    l1 = strlen(str1);

    /**
     * Read the second string from the user.
     */
    printf("Enter string 2: ");
    scanf(" %49[^\n]", str2);

    /**
     * Calculate the length of the second string.
     */
    l2 = strlen(str2);

    /**
     * Calculate the total length of both strings.
     */
    tl = l1 + l2;

    /**
     * Allocate memory for:
     * - First string: l1 characters
     * - Space: 1 character
     * - Second string: l2 characters
     * - Null terminator: 1 character
     */
    ptr = malloc((tl + 2) * sizeof(char));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Copy the first string into dynamically allocated memory.
     */
    strcpy(ptr, str1);

    /**
     * Add a space after the first string.
     */
    ptr[l1] = ' ';

    /**
     * Copy the second string after the space.
     */
    for (i = l1 + 1; i < tl + 1; i++)
    {
        ptr[i] = str2[i - l1 - 1];
    }

    /**
     * Add the null terminator at the end of the concatenated string.
     */
    ptr[tl + 1] = '\0';

    /**
     * Print the concatenated string.
     */
    printf("Concatenated string: %s\n", ptr);

    /**
     * Release the dynamically allocated memory.
     */
    free(ptr);

    /**
     * Set the pointer to NULL to avoid a dangling pointer.
     */
    ptr = NULL;

    return 0;
}