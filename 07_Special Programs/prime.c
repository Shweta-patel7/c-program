#include <stdio.h>
#include <math.h>

int main()
{
    int x, i, count = 0;

    printf("Enter a positive number: ");
    scanf("%d", &x);

    if (x <= 1)
    {
        printf("%d is not a prime number\n", x);
        return 0;
    }

    for (i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            count = 1;
            break;
        }
    }

    if (count == 0)
        printf("%d is a prime number\n", x);
    else
        printf("%d is not a prime number\n", x);

    return 0;
}