/**
 * @file reverse_dynamic_string.c
 * @brief Dynamically allocates memory and reverses a string in place.
 *
 * This program reads a string from the user, dynamically allocates
 * memory for the string using malloc(), copies the string into the
 * allocated memory, and reverses the string in place.
 *
 * The reversed string is then displayed and the dynamically allocated
 * memory is released using free().
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string from the user, dynamically allocates memory for it,
 * copies the string into the allocated memory, reverses the string
 * in place, prints the reversed string, and releases the memory.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Length of the input string.
     */
    int len;

    /**
     * @brief Character array used to store user input.
     */
    char str[50];

    /**
     * @brief Temporary character used during swapping.
     */
    char temp;

    /**
     * @brief Pointer to dynamically allocated string memory.
     */
    char *ptr;

    /**
     * Read a string from the user.
     *
     * The width specifier 49 prevents the input buffer from overflowing.
     */
    printf("Enter word: ");
    scanf(" %49[^\n]", str);

    /**
     * Calculate the length of the input string.
     */
    len = strlen(str);

    /**
     * Allocate memory for the string.
     *
     * One additional byte is required for the null terminator '\0'.
     */
    ptr = malloc((len + 1) * sizeof(char));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Copy the input string into dynamically allocated memory.
     */
    strcpy(ptr, str);

    /**
     * Reverse the string in place.
     *
     * The first character is swapped with the last character,
     * the second character with the second-last character, and so on.
     */
    for (i = 0; i < len / 2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[len - 1 - i];
        ptr[len - 1 - i] = temp;
    }

    /**
     * Print the reversed string.
     */
    printf("\nPrinting reversed string: %s\n", ptr);

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