/**

* @file sensor_driver.c
* @brief Demonstrates passing a structure of function pointers to a function.
*
* This program demonstrates how a structure containing function pointers
* can be used as a sensor interface.
*
* The sensor_t structure contains function pointers for:
* * Sensor initialization
* * Sensor data reading
*
* The sensor_t object is initialized with the corresponding sensor
* operation functions and then passed to the display() function.
*
* @author
* @date 2026-07-25
  */

#include <stdio.h>

/**

* @brief Sensor driver interface.
*
* This structure contains function pointers that represent
* the operations supported by the sensor.
  */
  typedef struct
  {
  /** Function pointer for initializing the sensor. */
  void (*init)(void);

  /** Function pointer for reading data from the sensor. */
  void (*read)(void);

} sensor_t;

/**

* @brief Initializes the sensor.
*
* This function performs the initialization operation
* for the sensor.
*
* @return void
  */
  void init_sensor(void)
  {
  printf("Init of sensor\n");
  }

/**

* @brief Reads data from the sensor.
*
* This function performs the sensor read operation.
*
* @return void
  */
  void read_sensor(void)
  {
  printf("Read from sensor\n");
  }

/**

* @brief Executes sensor operations.
*
* This function receives a sensor_t structure by value
* and calls the sensor operations through its function pointers.
*
* @param obj Sensor driver structure containing function pointers.
*
* @return void
  */
  void display(sensor_t obj)
  {
  /**

  * @brief Initialize the sensor.
  *
  * Calls the function assigned to the init function pointer.
    */
    obj.init();

  /**

  * @brief Read data from the sensor.
  *
  * Calls the function assigned to the read function pointer.
    */
    obj.read();
    }

/**

* @brief Main function of the program.
*
* Creates and initializes a sensor_t object with function pointers
* to the sensor initialization and read functions.
*
* The sensor_t object is then passed to the display() function,
* which executes the operations through the function pointers.
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
    sensor_t dis =
    {
     dis.init = init_sensor,
     dis.read = read_sensor
    };

  /**

  * @brief Pass the sensor driver structure to display().
    */
    display(dis);

  return 0;
  }
