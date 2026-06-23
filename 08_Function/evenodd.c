#include <stdio.h>
int evenorodd (int);
int main()
{
    int a;
    printf("enter a value ");
    scanf("%d", &a);
    evenorodd (a);

return 0;
}

int evenorodd (int n)
{
    if (n % 2 == 0)
    {
        printf("%d is even \n", n);
    }
    
    else
    printf("%d is odd \n", n);

}