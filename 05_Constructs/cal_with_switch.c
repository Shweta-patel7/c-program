#include <stdio.h>
int main()
{
    //Declare two floating-point variables and one character variable
    float num1, num2;
    char op;

    // taking input from user
    printf("Enter the oprater (+,-,*,/):");
    scanf("%c", &op);

    printf("Enter two number");
    scanf("%f %f", &num1, &num2);

    switch (op)
    {
        case '+':
        printf("Result = %.2f\n", num1 + num2);
        break;

        case '-':
        printf("Result = %.2f\n", num1 - num2);
        break;

        case '*':
        printf("Result = %.2f\n", num1 * num2);
        break;

        case '/':
        if (num2 != 0)
        {
            printf("Result = %.2f\n", num1 / num2);
        }
        else
            printf("Error \n");
        break;
        
        default: printf("Invalid operator.\n");
        break;
    
    }

}