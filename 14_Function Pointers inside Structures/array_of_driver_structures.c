#include<stdio.h>
typedef struct 
{
    void (*init) (void);
    int (*read) (int);
} sensor_t;
void init_sensor (void)
{
    printf("init of sensor\n");
}
int read_sensor (int a)
{
    printf("read from sensor\n");
    printf("%d\n", a);
}

int main()
{
    sensor_t sensor[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        sensor[i].init = init_sensor;
        sensor[i].read = read_sensor;
    }

    for (i = 0; i < 2; i++)
    {
        printf("for sensor %d\n", i + 1);
        sensor[i].init();
        sensor[i].read(3);
    }
    
    
}