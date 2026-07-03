#include<stdio.h>
float add(float a, float b)
{
    return a +b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("zero is not divide with any number");
        return 0;
    }

}

int main()
{
    float a, b;
    int choice;
    float (*p [])(float, float) = {add, sub, mul, div};
    printf("enter two number = ");
    scanf("%f %f", &a, &b);

    printf("\n0. Addition");
    printf("\n1. Subtraction");
    printf("\n2. Multiplication");
    printf("\n3. Division");

    printf("enter your choice : ");
    scanf("%d", &choice);

    if (choice >= 0 && choice <= 3)
    {
        printf("result = %.2f\n", p[choice](a, b));
    }
    else
    {
        printf("invalide choice");
    }
    
}