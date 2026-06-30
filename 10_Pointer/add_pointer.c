#include<stdio.h>
int main()
{
    int *a, *b;
    int x = 32, y = 54, sum = 0;
    a = &x, b = &y;
    sum = *a + *b;
    printf("sum of two number = %d\n", sum);


}