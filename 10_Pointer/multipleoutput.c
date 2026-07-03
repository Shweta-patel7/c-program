#include <stdio.h>

void calculate(int a, int b, int *sum, int *product)
{
    *sum = a + b;
    *product = a * b;
}

int main()
{
    int num1, num2;
    int sum, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2, &sum, &product);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}