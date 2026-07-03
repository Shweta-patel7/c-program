#include<stdio.h>
int squ (int a)
{
    return a * a;
}

int main()
{
    int x; 
    printf("enter number for square : ");
    scanf("%d", &x);
    int (*ptr)(int) = squ;
    printf("square = %d\n", ptr(x));
}