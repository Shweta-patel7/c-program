#include <stdio.h>
int add(int b[], int len)
{
    int sum = 0, i;
    for (i = 0; i < len; i++)
    {
        sum = sum + b[i];
    }
}

int main()
{
    int a[] = {56, 23, 85, 87, 96};
    int len = sizeof (a) / sizeof (a[0]);
    printf("sum = %d\n", add (a,len));
    return 0;
}