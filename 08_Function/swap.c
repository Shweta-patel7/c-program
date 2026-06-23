#include <stdio.h>
int swap (int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a, b;
    printf("enter two value ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("swap number %d %d\n", a, b);
    
}