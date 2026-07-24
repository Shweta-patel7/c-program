/**
 * @file driver.c
 * @brief Demonstrates a driver interface using a structure of function pointers.
 *
 * This program demonstrates how a structure containing function pointers
 * can be used as a simple driver table (dispatch table).
 *
 * The user can select between two drivers. Each driver provides three
 * operations:
 *  - Init
 *  - Read
 *  - Write
 *
 * @author
 * @date 2026-07-24
 */

#include <stdio.h>

/**
 * @brief Driver interface containing function pointers.
 *
 * This structure represents a generic driver interface. Each function
 * pointer points to an implementation of the corresponding driver operation.
 */
typedef struct
{
    /** Function pointer for initializing the device. */
    void (*Init)(void);

    /** Function pointer for reading data from the device. */
    void (*Read)(void);

    /** Function pointer for writing data to the device. */
    void (*Write)(void);

} Driver_t;


/**
 * @brief Initializes the device.
 *
 * This function represents the initialization operation of the driver.
 *
 * @return void
 */
void Init_driver(void)
{
    printf("Init of device\n");
}


/**
 * @brief Reads data from the device.
 *
 * This function represents the read operation of the driver.
 *
 * @return void
 */
void Read_driver(void)
{
    printf("Read from device\n");
}


/**
 * @brief Writes data to the device.
 *
 * This function represents the write operation of the driver.
 *
 * @return void
 */
void Write_driver(void)
{
    printf("Write on device\n");
}


/**
 * @brief Main function of the program.
 *
 * The user selects a driver using the menu. Based on the selected option,
 * the corresponding driver structure is initialized with function pointers
 * and its Init, Read, and Write operations are called.
 *
 * @return 0 on successful program termination.
 */
int main(void)
{
    /**
     * @brief Enumeration representing the available drivers.
     */
    enum dev
    {
        DRIVERONE = 1,
        DRIVERTWO = 2
    };

    /** Stores the driver selected by the user. */
    enum dev d;

    printf("Enter 1 for driver 1\n");
    printf("Enter 2 for driver 2\n");
    printf("Which driver you want to work: ");

    scanf("%d", (int *)&d);

    switch (d)
    {
        case DRIVERONE:
        {
            /**
             * @brief Driver 1 function table.
             *
             * Initializes Driver 1 with the available driver operations.
             */
            Driver_t Driver_1 =
            {
                .Init  = Init_driver,
                .Read  = Read_driver,
                .Write = Write_driver
            };

            printf("Driver 1 output\n");

            Driver_1.Init();
            Driver_1.Read();
            Driver_1.Write();

            break;
        }

        case DRIVERTWO:
        {
            /**
             * @brief Driver 2 function table.
             *
             * Initializes Driver 2 with the available driver operations.
             */
            Driver_t Driver_2 =
            {
                .Init  = Init_driver,
                .Read  = Read_driver,
                .Write = Write_driver
            };

            printf("Driver 2 output\n");

            Driver_2.Init();
            Driver_2.Read();
            Driver_2.Write();

            break;
        }

        default:
        {
            printf("Invalid input\n");
            break;
        }
    }

}