/**
 * @file display_driver.c
 * @brief Demonstrates a display driver interface using function pointers.
 *
 * This program demonstrates how a structure containing function pointers
 * can be used to implement a display driver interface.
 *
 * The display driver provides the following operations:
 *  - Initialize the display
 *  - Clear the display
 *  - Print a character
 *  - Print a string
 *
 * The Display_Drv_t structure acts as a driver table or dispatch table.
 * Each function pointer is assigned to its corresponding display operation.
 *
 * @author
 * @date 2026-07-25
 */

#include <stdio.h>


/**
 * @brief Display driver interface.
 *
 * This structure contains function pointers for display operations.
 * It acts as a driver table or dispatch table.
 */
typedef struct
{
    /** Function pointer for initializing the display. */
    void (*init)(void);

    /** Function pointer for clearing the display. */
    void (*clear)(void);

    /** Function pointer for printing a character. */
    void (*printchar)(void);

    /** Function pointer for printing a string. */
    void (*printstring)(void);

} Display_Drv_t;


/**
 * @brief Initializes the display device.
 *
 * This function performs the initialization operation
 * of the display device.
 *
 * @return void
 */
void init_drv(void)
{
    printf("init of device\n");
}


/**
 * @brief Clears the display.
 *
 * This function performs the clear operation of the display.
 *
 * @return void
 */
void clear_drv(void)
{
    printf("clear\n");
}


/**
 * @brief Reads and prints a character.
 *
 * This function asks the user to enter a character,
 * reads the character, and prints it.
 *
 * @return void
 */
void printchar_drv(void)
{
    char c;

    printf("enter char : ");
    scanf(" %c", &c);

    printf("char : %c\n", c);
}


/**
 * @brief Reads and prints a string.
 *
 * This function asks the user to enter a string,
 * reads the string, and prints it.
 *
 * @return void
 */
void printstring_drv(void)
{
    char s[20];

    printf("enter string : ");
    scanf("%19s", s);

    printf("string : %s\n", s);
}


/**
 * @brief Main function of the program.
 *
 * Creates and initializes a display driver table with function pointers.
 * The display operations are then called through the function pointers
 * stored in the Display_Drv_t structure.
 *
 * @return 0 on successful program termination.
 */
int main(void)
{
    /**
     * @brief Display driver instance.
     *
     * The function pointers are initialized with their corresponding
     * display driver operation functions.
     */
    Display_Drv_t display =
    {
        .init       = init_drv,
        .clear      = clear_drv,
        .printchar  = printchar_drv,
        .printstring = printstring_drv
    };

    /* Initialize the display. */
    display.init();

    /* Clear the display. */
    display.clear();

    /* Read and print a character. */
    display.printchar();

    /* Read and print a string. */
    display.printstring();

    return 0;
}