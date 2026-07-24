/**
 * @file sensor_driver.c
 * @brief Demonstrates a sensor driver interface using function pointers.
 *
 * This program demonstrates how a structure containing function pointers
 * can be used to implement a sensor driver interface.
 *
 * The sensor driver provides the following operations:
 *  - Sensor initialization
 *  - Reading sensor data
 *  - Getting the sensor status
 *
 * @author
 * @date 2026-07-24
 */

#include <stdio.h>


/**
 * @brief Generic function pointer type for sensor operations.
 *
 * This function pointer represents a function that:
 *  - Takes no arguments.
 *  - Returns no value.
 */
typedef void (*op_t)(void);


/**
 * @brief Sensor driver interface.
 *
 * This structure contains function pointers for sensor operations.
 * It acts as a driver table or dispatch table.
 */
typedef struct
{
    /** Function pointer for initializing the sensor. */
    op_t Init;

    /** Function pointer for reading data from the sensor. */
    op_t ReadData;

    /** Function pointer for getting the sensor status. */
    op_t GetStatus;

} sensor_t;


/**
 * @brief Initializes the sensor.
 *
 * This function performs the sensor initialization operation.
 *
 * @return void
 */
void Init_sensor(void)
{
    printf("Init of sensor\n");
}


/**
 * @brief Reads data from the sensor.
 *
 * This function performs the sensor data read operation.
 *
 * @return void
 */
void ReadData_sensor(void)
{
    printf("read data from sensor\n");
}


/**
 * @brief Gets the current status of the sensor.
 *
 * This function performs the sensor status operation.
 *
 * @return void
 */
void GetStatus_sensor(void)
{
    printf("get status of sensor\n");
}


/**
 * @brief Main function of the program.
 *
 * Creates and initializes a sensor driver structure with function pointers.
 * The sensor operations are then called through the function pointers
 * stored in the structure.
 *
 * @return 0 on successful program termination.
 */
int main(void)
{
    /**
     * @brief Sensor driver instance.
     *
     * The function pointers are initialized with their corresponding
     * sensor operation functions.
     */
    sensor_t sensor =
    {
        .Init     = Init_sensor,
        .ReadData = ReadData_sensor,
        .GetStatus = GetStatus_sensor
    };

    /* Initialize the sensor. */
    sensor.Init();

    /* Read data from the sensor. */
    sensor.ReadData();

    /* Get the sensor status. */
    sensor.GetStatus();

    return 0;
}