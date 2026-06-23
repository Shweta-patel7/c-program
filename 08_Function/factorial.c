#include <stdio.h>

long long factorial(int n)
{
    long long f = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Factorial of a negative number is not possible\n");
    }
    else
    {
        printf("%d factorial is %lld\n", a, factorial(a));
    }

    return 0;
}