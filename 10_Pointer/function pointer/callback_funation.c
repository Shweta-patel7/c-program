#include<stdio.h>
int sum (int a, int b)
{
    printf("sum = %d\n", a + b);
}

int sub (int a, int b)
{
    printf("sub = %d\n", a - b);
}

void call (int x, int y, int(*fun)(int, int))
{
    fun(x, y);
}

int main()
{
    int x, y;
    printf("enter two number = ");
    scanf("%d %d", &x, &y);

    call(x, y, sum);
    call(x, y, sub);

}