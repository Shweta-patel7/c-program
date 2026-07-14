/**
 * @file string_compare.c
 * @brief Compares two strings to determine whether they are the same.
 *
 * This program accepts two strings from the user and compares them
 * character by character. If all corresponding characters are equal,
 * it prints "string is same"; otherwise, it prints
 * "string is not same".
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads two strings from the user, compares them character by character,
 * and displays whether the strings are the same or different.
 *
 * @return None.
 */
void compare(char s1[], char s2[])
{
    printf("string 1 : %s\n", s1);
    printf("string 2 : %s\n", s2);
    /** Flag to indicate whether the strings are different. */
    int flag;

    /** Loop counter used for string traversal. */
    int i = 0;

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        printf("string is not same\n");
        return;
    }
    
    /**
     * @brief Compare both strings character by character.
     */
   
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }

        i++;
    }

    if (s1[i] != '\0' || s2[i] !='\0')
        {
            flag = 1;
        }

    else
       flag = 0;
   
    /**
     * @brief Display the comparison result.
     */
    if (flag == 1)
    {
        printf("String is not same\n");
    }
    else 
    {
        printf("String is same\n");
    }
}

void main()
{
    char str1[100], str2[100];

    printf("enter string 1");
    gets(str1);
    printf("enter string 2");
    gets(str2);

    compare(str1, str2);


}