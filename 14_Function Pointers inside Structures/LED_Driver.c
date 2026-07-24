/**
 * @file led_driver.c
 * @brief Demonstrates an LED driver interface using function pointers.
 *
 * This program demonstrates how a structure containing function pointers
 * can be used to implement an LED driver interface.
 *
 * The LED driver provides the following operations:
 *  - Initialize the LED
 *  - Turn the LED ON
 *  - Turn the LED OFF
 *  - Toggle the LED state
 *
 * @author
 * @date 2026-07-24
 */

#include <stdio.h>


/**
 * @brief Generic function pointer type for LED operations.
 *
 * This function pointer represents a function that:
 *  - Takes no arguments.
 *  - Returns no value.
 */
typedef void (*operation_t)(void);


/**
 * @brief LED driver interface.
 *
 * This structure contains function pointers for all LED operations.
 * It acts as a driver table or dispatch table.
 */
typedef struct
{
    /** Function pointer for initializing the LED. */
    operation_t Init;

    /** Function pointer for turning the LED ON. */
    operation_t On;

    /** Function pointer for turning the LED OFF. */
    operation_t Off;

    /** Function pointer for toggling the LED state. */
    operation_t Toggle;

} LED_Driver_t;


/**
 * @brief Initializes the LED driver.
 *
 * This function performs the LED initialization operation.
 *
 * @return void
 */
void Init_driver(void)
{
    printf("LED init\n");
}


/**
 * @brief Turns the LED ON.
 *
 * This function performs the LED ON operation.
 *
 * @return void
 */
void On_driver(void)
{
    printf("LED On\n");
}


/**
 * @brief Turns the LED OFF.
 *
 * This function performs the LED OFF operation.
 *
 * @return void
 */
void Off_driver(void)
{
    printf("LED Off\n");
}


/**
 * @brief Toggles the LED state.
 *
 * This function changes the LED state from ON to OFF
 * or from OFF to ON.
 *
 * @return void
 */
void Toggle_driver(void)
{
    printf("LED Toggle\n");
}


/**
 * @brief Main function of the program.
 *
 * Creates an LED driver instance and initializes its function
 * pointers with the corresponding LED operation functions.
 *
 * The LED operations are then called through the function pointers.
 *
 * @return 0 on successful program termination.
 */
int main(void)
{
    /**
     * @brief LED driver instance.
     *
     * This structure acts as a dispatch table for LED operations.
     */
    LED_Driver_t LED =
    {
        .Init   = Init_driver,
        .On     = On_driver,
        .Off    = Off_driver,
        .Toggle = Toggle_driver
    };

    /* Initialize the LED driver. */
    LED.Init();

    /* Turn the LED ON. */
    LED.On();

    /* Turn the LED OFF. */
    LED.Off();

    /* Toggle the LED state. */
    LED.Toggle();

    return 0;
}