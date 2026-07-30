/**
 * @file dynamic_string.c
 * @brief Demonstrates dynamic memory allocation for a string using malloc().
 *
 * This program dynamically allocates enough memory to store a string,
 * copies the string into the allocated memory using strcpy(), prints
 * the string, and finally releases the allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Main function of the program.
 *
 * Creates a source string, dynamically allocates memory based on the
 * length of the string, copies the string into the dynamically
 * allocated memory, prints the copied string, and releases the
 * allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Pointer to dynamically allocated memory for the string.
     */
    char *ptr;

    /**
     * @brief Source string to be copied into dynamically allocated memory.
     */
    char str[] = "hello hi i am malloc";

    /**
     * Allocate enough memory to store the string and the
     * terminating null character '\0'.
     *
     * strlen(str) gives the number of characters excluding '\0',
     * so 1 is added to allocate space for the null terminator.
     */
    ptr = malloc((strlen(str) + 1) * sizeof(char));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Copy the source string into dynamically allocated memory.
     */
    strcpy(ptr, str);

    /**
     * Display the dynamically allocated string.
     */
    printf("String: %s\n", ptr);

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