/**
 * @file uart_driver.c
 * @brief Demonstrates a UART driver interface using function pointers.
 *
 * This program demonstrates how a structure containing function pointers
 * can be used to create a UART driver interface.
 *
 * The UART driver provides the following operations:
 *  - Initialization
 *  - Data transmission
 *  - Data reception
 *  - De-initialization
 *
 * Each operation is represented by a function pointer in the
 * UART_Driver_t structure.
 *
 * @author
 * @date 2026-07-24
 */

#include <stdio.h>

/**
 * @brief Defines a generic function pointer type.
 *
 * This function pointer represents a function that:
 *  - Takes no arguments.
 *  - Returns no value.
 */
typedef void (*operation_t)(void);


/**
 * @brief UART driver interface.
 *
 * This structure contains function pointers for all UART operations.
 * It acts as a driver table or dispatch table.
 */
typedef struct
{
    /** Function pointer for initializing the UART. */
    operation_t Init;

    /** Function pointer for sending data through UART. */
    operation_t Send;

    /** Function pointer for receiving data through UART. */
    operation_t Receive;

    /** Function pointer for de-initializing the UART. */
    operation_t DeInit;

} UART_Driver_t;


/**
 * @brief Initializes the UART driver.
 *
 * This function performs the UART initialization operation.
 *
 * @return void
 */
void Init_driver(void)
{
    printf("UART Init\n");
}


/**
 * @brief Sends data through the UART.
 *
 * This function represents the UART transmit operation.
 *
 * @return void
 */
void Send_driver(void)
{
    printf("SEND\n");
}


/**
 * @brief Receives data through the UART.
 *
 * This function represents the UART receive operation.
 *
 * @return void
 */
void Receive_driver(void)
{
    printf("RECEIVE\n");
}


/**
 * @brief De-initializes the UART driver.
 *
 * This function performs the UART de-initialization operation.
 *
 * @return void
 */
void DeInit_driver(void)
{
    printf("UART DeInit\n");
}


/**
 * @brief Main function of the program.
 *
 * Creates and initializes a UART driver table with function pointers.
 * The UART operations are then executed through the function pointers.
 *
 * @return 0 on successful program termination.
 */
int main(void)
{
    /**
     * @brief UART driver instance.
     *
     * The function pointers are initialized with their corresponding
     * UART operation functions.
     */
    UART_Driver_t UART =
    {
        .Init    = Init_driver,
        .Send    = Send_driver,
        .Receive = Receive_driver,
        .DeInit  = DeInit_driver
    };

    /* Initialize UART. */
    UART.Init();

    /* Send data through UART. */
    UART.Send();

    /* Receive data from UART. */
    UART.Receive();

    /* De-initialize UART. */
    UART.DeInit();

    return 0;
}