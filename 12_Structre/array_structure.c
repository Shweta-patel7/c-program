/**
 * @file car_details.c
 * @brief Program to store and display details of multiple cars using structures.
 *
 * This program accepts details of 'n' cars from the user and displays
 * the entered information.
 */

#include <stdio.h>

/**
 * @struct car
 * @brief Stores information about a car.
 */
struct car
{
    char name[50];         /**< Name of the car */
    char fuel_type[50];    /**< Fuel type (Petrol, Diesel, CNG, Electric, etc.) */
    int seating;           /**< Seating capacity */
    float city_mileage;    /**< Mileage in the city (km/l or km/kWh) */
};

/**
 * @brief Main function of the program.
 *
 * The function:
 * - Reads the number of cars.
 * - Accepts details for each car.
 * - Displays all entered car details.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int n;

    printf("Enter number of cars: ");
    scanf("%d", &n);

    struct car c[n];
    int i;

    /* Input car details */
    for (i = 0; i < n; i++)
    {
        printf("\nCar %d\n", i + 1);

        printf("Enter name of car: ");
        scanf("%49s", c[i].name);

        printf("Enter fuel type of car: ");
        scanf("%49s", c[i].fuel_type);

        printf("Enter seating capacity: ");
        scanf("%d", &c[i].seating);

        printf("Enter city mileage: ");
        scanf("%f", &c[i].city_mileage);
    }

    /* Display car details */
    printf("\n--- Car Details ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nCar %d\n", i + 1);
        printf("Name     : %s\n", c[i].name);
        printf("Fuel     : %s\n", c[i].fuel_type);
        printf("Seating  : %d\n", c[i].seating);
        printf("Mileage  : %.2f\n", c[i].city_mileage);
    }

    return 0;
}