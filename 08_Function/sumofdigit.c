#include <stdio.h>
int sumofdigit (int);
int main ()
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    printf("Sum of digits = %d\n", sumofdigit(a));

}
int sumofdigit (int n)
{
    int rem, result = 0;
    while (n !=0)
    {
        rem = n % 10;
        result = result +rem;
        n = n / 10;
    }
    
return result;
}