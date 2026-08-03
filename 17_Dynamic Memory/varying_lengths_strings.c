/**
 * @file dynamic_string_array.c
 * @brief Dynamically allocates and manages an array of strings.
 *
 * This program dynamically allocates memory for an array of string
 * pointers. Each string is allocated with space for 50 characters.
 *
 * The program accepts the number of strings from the user, dynamically
 * allocates memory for each string, reads the strings, displays them,
 * and finally releases all dynamically allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for multiple strings, accepts string
 * input from the user, displays the strings, and frees all allocated
 * memory.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main()
{
    /**
     * @brief Number of strings to be stored.
     */
    int n;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Double pointer used to store dynamically allocated strings.
     *
     * Each str[i] points to a dynamically allocated character array.
     */
    char **str;

    /**
     * Read the number of strings from the user.
     */
    printf("enter number of string : ");
    scanf("%d", &n);

    /**
     * Allocate memory for n string pointers.
     */
    str = (char **) malloc(sizeof(*str) * n);

    /**
     * Check whether memory allocation was successful.
     */
    if (str == NULL)
    {
        printf("memory not allocated");
        return 1;
    }

    /**
     * Allocate memory for each individual string.
     *
     * Each string can store a maximum of 49 characters plus
     * the null terminator '\0'.
     */
    for (i = 0; i < n; i++)
    {
        str[i] = (char *)malloc(sizeof(char) * 50);

        /**
         * Check whether memory allocation for the current string
         * was successful.
         */
        if (str[i] == NULL)
        {
            printf("memory not allocated");
            return 1;
        }
    }

    /**
     * Read each string from the user.
     */
    for (i = 0; i < n; i++)
    {
        printf("enter string %d : ", i + 1);
        scanf("%49s", str[i]);
    }

    /**
     * Display all entered strings.
     */
    printf("printing string \n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    /**
     * Free the memory allocated for each individual string.
     */
    for (i = 0; i < n; i++)
    {
        free(str[i]);
    }

    /**
     * Free the memory allocated for the array of string pointers.
     */
    free(str);

    return 0;
}
