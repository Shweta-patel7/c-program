#include <stdio.h>
int palindrome (int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    palindrome(n);
}

int palindrome (int a)
{
    int q, rem, result = 0;
    q = a;
    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }
    
    if (result == a)
    {
        printf("it is palindrome\n");
    }
    else
    printf("it is not a palindrome\n");

}
