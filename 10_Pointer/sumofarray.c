#include<stdio.h>
int main()
{
    int a[] = {56, 63, 78, 23, 45};
    int sum = 0, *p;
    for (p = &a[0]; p <= &a[4]; p++)
    {
        sum = sum + *p;
    }
    printf("sum = %d\n", sum);
}