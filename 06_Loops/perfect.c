#include <stdio.h>

int main()
{
    int a, i, rem, sum = 0;

    printf("enter number: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        rem = a % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == a)
    {
        printf("%d is perfect number\n", a);
    }
    else
    {
        printf("%d is not a perfect number\n", a);
    }

    return 0;
}