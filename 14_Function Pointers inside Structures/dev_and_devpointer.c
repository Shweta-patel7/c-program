#include<stdio.h>
typedef struct
{
    void (*init)(int *);
} driver_t;

void driver_init(int *obj)
{
    printf("working\n");
}
int main()
{
    int obj = 15;
    driver_t dev =
    {
        .init = driver_init,
    };

    printf("dev.init(&obj) = ");
    dev.init(&obj);
    printf("(*dev.init)(&obj) = ");
    (*dev.init)(&obj);
}