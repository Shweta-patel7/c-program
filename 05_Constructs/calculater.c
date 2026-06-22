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

    // Check if the operator is add
    if (op == '+')
    {
        printf("Result = %.2f\n", num1 + num2);
    }
    //Check if the operator is sub
    else if (op == '-')
    {
        printf("Result = %.2f\n", num1 - num2);

    }
    //Check if the operator is multiplication
    else if (op == '*')
    {
        printf("Result = %.2f\n", num1 * num2);
    }
    //Check if the operator is division
    else if (op == '/')
    {
        if (num2 != 0)
        {
            printf("Result = %.2f\n", num1 / num2);
        }
        else
            printf("Error \n");
    }        

    else
    {
        printf("Invalid operator.\n");
    }
    return 0;    
        
}