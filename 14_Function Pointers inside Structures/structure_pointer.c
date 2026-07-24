/**
 * @file driver.c
 * @brief Demonstrates passing a driver structure by pointer.
 *
 * This program demonstrates how a structure containing function pointers
 * can be passed by pointer to another function.
 *
 * The run_driver() function receives a pointer to the Driver_t structure
 * and calls the Init() and Read() operations through the structure pointer.
 *
 * This is a simple example of a driver interface or dispatch table
 * implemented using function pointers in C.
 *
 * @author
 * @date 2026-07-24
 */

#include <stdio.h>


/**
 * @brief Driver interface containing function pointers.
 *
 * This structure represents a generic driver interface.
 * Each member is a function pointer that points to a specific
 * driver operation.
 */
typedef struct
{
    /** Function pointer for driver initialization. */
    void (*Init)(void);

    /** Function pointer for reading data from the driver. */
    void (*Read)(void);

} Driver_t;


/**
 * @brief Initializes the driver.
 *
 * This function performs the initialization operation of the driver.
 *
 * @return void
 */
void Init_driver(void)
{
    printf("Init of driver\n");
}


/**
 * @brief Reads data from the driver.
 *
 * This function performs the read operation of the driver.
 *
 * @return void
 */
void Read_driver(void)
{
    printf("Read from driver\n");
}


/**
 * @brief Runs the driver operations.
 *
 * This function receives a pointer to a Driver_t structure and
 * calls the Init() function followed by the Read() function
 * through the structure pointer.
 *
 * @param driver Pointer to the driver structure.
 *
 * @return void
 */
void run_driver(Driver_t *driver)
{
    /* Call the initialization function through the structure pointer. */
    driver->Init();

    /* Call the read function through the structure pointer. */
    driver->Read();
}


/**
 * @brief Main function of the program.
 *
 * Creates and initializes a Driver_t structure with function pointers.
 * The address of the driver structure is then passed to run_driver().
 *
 * @return 0 on successful program termination.
 */
int main(void)
{
    /**
     * @brief Driver instance.
     *
     * The function pointers are initialized with their
     * corresponding driver operation functions.
     */
    Driver_t Driver =
    {
        .Init = Init_driver,
        .Read = Read_driver
    };

    /* Pass the address of the driver structure to run_driver(). */
    run_driver(&Driver);

    return 0;
}