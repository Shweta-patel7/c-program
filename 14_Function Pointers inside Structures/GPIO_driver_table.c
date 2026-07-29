/**
 * @file gpio_driver.c
 * @brief Demonstrates a GPIO driver table using function pointers.
 *
 * This program demonstrates how a structure containing function pointers
 * can be used to implement a GPIO driver interface.
 *
 * The GPIO driver provides the following operations:
 *  - GPIO initialization
 *  - Set GPIO pin HIGH
 *  - Set GPIO pin LOW
 *  - Toggle GPIO pin
 *
 * The GPIO_Driver_t structure acts as a driver table or dispatch table.
 * Each function pointer is assigned to its corresponding GPIO operation.
 *
 * The GPIO_t structure contains a pointer to the GPIO driver table.
 * This provides an additional level of indirection similar to the way
 * a virtual function table (vtable) is accessed in object-oriented
 * programming.
 *
 * @author
 * @date 2026-07-25
 */

#include <stdio.h>


/**
 * @brief GPIO driver interface.
 *
 * This structure contains function pointers for GPIO operations.
 * It acts as a driver table or dispatch table that provides a
 * common interface for controlling a GPIO device.
 *
 * Each function pointer can be assigned to a different implementation
 * of the corresponding GPIO operation.
 */
typedef struct
{
    /** Function pointer for initializing the GPIO. */
    void (*Init)(void);

    /** Function pointer for setting the GPIO pin HIGH. */
    void (*SetHigh)(void);

    /** Function pointer for setting the GPIO pin LOW. */
    void (*SetLow)(void);

    /** Function pointer for toggling the GPIO pin state. */
    void (*Toggle)(void);

} GPIO_Driver_t;


/**
 * @brief GPIO device object.
 *
 * This structure contains a pointer to a GPIO_Driver_t driver table.
 * The driver table provides the actual implementation of GPIO operations.
 *
 * This design separates the GPIO object from the implementation of
 * the GPIO operations.
 */
typedef struct
{
    /** Pointer to the GPIO driver operation table. */
    GPIO_Driver_t *op;

} GPIO_t;


/**
 * @brief Initializes the GPIO driver.
 *
 * This function performs the initialization operation
 * for the GPIO device.
 *
 * @return void
 */
void Init_driver(void)
{
    printf("Init of GPIO\n");
}


/**
 * @brief Sets the GPIO pin HIGH.
 *
 * This function sets the GPIO output state to HIGH.
 *
 * @return void
 */
void SetHigh_driver(void)
{
    printf("GPIO set to high\n");
}


/**
 * @brief Sets the GPIO pin LOW.
 *
 * This function sets the GPIO output state to LOW.
 *
 * @return void
 */
void SetLow_driver(void)
{
    printf("GPIO set to low\n");
}


/**
 * @brief Toggles the GPIO pin state.
 *
 * This function changes the GPIO state from HIGH to LOW
 * or from LOW to HIGH.
 *
 * @return void
 */
void Toggle_driver(void)
{
    printf("GPIO toggle\n");
}


/**
 * @brief Main function of the program.
 *
 * Creates a GPIO driver table and initializes its function pointers
 * with the corresponding GPIO driver operation functions.
 *
 * A GPIO_t object is then created with a pointer to the driver table.
 * GPIO operations are performed through the GPIO_t object's driver
 * table pointer.
 *
 * The call:
 *
 * @code
 * GPIO_drv_ptr.op->Init();
 * @endcode
 *
 * accesses the driver table through the GPIO_t object and then calls
 * the Init function through the function pointer.
 *
 * @return 0 on successful program termination.
 */
int main(void)
{
    /**
     * @brief GPIO driver table instance.
     *
     * The function pointers are initialized with their corresponding
     * GPIO driver operation functions.
     */
    GPIO_Driver_t GPIO_drv =
    {
        .Init    = Init_driver,
        .SetHigh = SetHigh_driver,
        .SetLow  = SetLow_driver,
        .Toggle  = Toggle_driver
    };


    /**
     * @brief GPIO device instance.
     *
     * The op member points to the GPIO driver table.
     */
    GPIO_t GPIO_drv_ptr =
    {
        .op = &GPIO_drv
    };


    /**
     * @brief Perform GPIO initialization.
     */
    GPIO_drv_ptr.op->Init();

    /**
     * @brief Set GPIO pin HIGH.
     */
    GPIO_drv_ptr.op->SetHigh();

    /**
     * @brief Set GPIO pin LOW.
     */
    GPIO_drv_ptr.op->SetLow();

    /**
     * @brief Toggle GPIO pin state.
     */
    GPIO_drv_ptr.op->Toggle();


    return 0;
}