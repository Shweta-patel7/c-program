#include<stdio.h>

typedef void (*callback) (int, int);
int myfunction(callback a)
{
    a (10, 20);
}
void mycallback (int a, int b)
{
    printf("sum (a + b) : %d\n", a + b);
}
int main()
{
    printf("example 4 : callback function\n");
    myfunction(mycallback);
}