#include <stdio.h>
int reverse (int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    
    printf("reverse number = %d\n", reverse(n));

}    

int reverse (int a)
{
    int q, rem, result = 0;
    q = a;
    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }
    return result;

}