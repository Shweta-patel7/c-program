#include<stdio.h>
typedef struct 
{
    void (*Init)(void);
    void (*SetHigh)(void);
    void (*SetLow)(void);
    void (*Toggle)(void);
} GPIO_Driver_t;

void Init_driver (void)
{
    printf("Init of GPIO\n");
}
void SetHigh_driver (void)
{
    printf("GPIO set to high\n");
}
void SetLow_driver (void)
{
    printf("GPIO set to low\n");
}
void Toggle_driver (void)
{
    printf("GPIO toggle\n");
}

int main()
{
    GPIO_Driver_t GPIO_drv =
    {
        .Init = Init_driver,
        .SetHigh = SetHigh_driver,
        .SetLow = SetLow_driver,
        .Toggle = Toggle_driver
    };

    GPIO_drv.Init();
    GPIO_drv.SetHigh();
    GPIO_drv.SetLow();
    GPIO_drv.Toggle();
}