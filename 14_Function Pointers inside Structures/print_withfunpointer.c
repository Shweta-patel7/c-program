/**
 * @file main.c
 * @brief Demonstrates a function pointer stored inside a structure.
 *
 * This program demonstrates how a structure can contain a function
 * pointer member. The function pointer is initialized with the address
 * of a function and then used to call that function.
 */

#include <stdio.h>

/**
 * @struct print
 * @brief Structure containing a function pointer.
 *
 * The display member is a function pointer that can point to a function
 * which takes no arguments and returns void.
 */
struct print
{
    /**
     * @brief Function pointer used to display a message.
     *
     * This function pointer can point to any function with the
     * following signature:
     *
     * void function_name(void);
     */
    void (*display)(void);
};

/**
 * @brief Prints a message to the console.
 *
 * This function is assigned to the display function pointer
 * in the print structure.
 */
void input(void)
{
    printf("Hello from Driver!\n");
}

/**
 * @brief Main function of the program.
 *
 * Creates a print structure, initializes its function pointer
 * with the input() function, and calls the function through
 * the function pointer.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
    printf("Printing with function pointer\n");

    /**
     * @brief Structure object containing a function pointer.
     *
     * The display function pointer is initialized with the
     * address of the input() function.
     */
    struct print p =
    {
        .display = input
    };

    /* Call the input() function through the function pointer. */
    p.display();

    return 0;
}