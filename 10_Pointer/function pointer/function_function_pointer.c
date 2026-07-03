#include<stdio.h>
int add (int a, int b)
{
    return a + b;
}

void cal (int x, int y, int (*ptr)(int, int))
{
    printf("result = %d\n", ptr(x, y));
}

int main()
{
    int x, y;
    printf("enter value : ");
    scanf("%d %d", &x, &y);
    cal(x, y, add);
}  