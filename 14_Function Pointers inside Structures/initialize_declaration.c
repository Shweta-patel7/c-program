/**
 * @file main.c
 * @brief Demonstrates a driver table using function pointers.
 *
 * This program demonstrates how a structure can contain multiple
 * function pointer members. Each function pointer is initialized
 * with a different function and then called through the structure.
 */

#include <stdio.h>

/**
 * @struct driver
 * @brief Driver table containing function pointers.
 *
 * This structure acts as a dispatch table. Each member points to
 * a function that takes no arguments and returns void.
 */
struct driver
{
    /**
     * @brief Function pointer to the name driver function.
     */
    void (*name)(void);

    /**
     * @brief Function pointer to the place driver function.
     */
    void (*place)(void);

    /**
     * @brief Function pointer to the standard driver function.
     */
    void (*std)(void);
};

/**
 * @brief Prints the driver name.
 *
 * This function is assigned to the name function pointer
 * in the driver structure.
 */
void name_drive(void)
{
    printf("driver\n");
}

/**
 * @brief Prints the driver place information.
 *
 * This function is assigned to the place function pointer
 * in the driver structure.
 */
void place_driver(void)
{
    printf("dkfhiouf\n");
}

/**
 * @brief Prints the standard information.
 *
 * This function is assigned to the std function pointer
 * in the driver structure.
 */
void std_driver(void)
{
    printf("12\n");
}

/**
 * @brief Main function.
 *
 * Creates and initializes a driver structure with function pointers.
 * Each function pointer is then called through the structure.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
    /**
     * @brief Driver structure instance.
     *
     * The function pointers are initialized at declaration time.
     */
    struct driver d =
    {
        .name = name_drive,
        .place = place_driver,
        .std = std_driver
    };

    /* Call the function through the name function pointer. */
    d.name();

    /* Call the function through the place function pointer. */
    d.place();

    /* Call the function through the std function pointer. */
    d.std();

    return 0;
}