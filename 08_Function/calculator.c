#include <stdio.h>
float add (float a, float b)
{
    return(a + b);
}
float sub (float c, float d)
{
    return(c - d);
}
float mul (float e, float f)
{
    return(e * f);
}
float div (float g, float h)
{
    if (h != 0)
    {
        return(g / h);
    }
    else
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    
}
int main()
{
    float x, y;
    printf("Enter two number ");
    scanf("%f %f", &x, &y);
    char op;
    printf("enter operater (+, -, *, / )");
    scanf(" %c", &op);

    if (op == '+')
    {
        printf("sum of %.2f + %.2f = %.2f", x, y, add(x, y));
    }
    else if (op == '-')
    {
        printf("sub of %.2f - %.2f = %.2f", x, y, sub(x, y));
    }

    else if (op == '*')
    {
        printf("mul of %.2f * %.2f = %.2f", x, y, mul(x, y));
    }
    
    else if (op == '/')
    {
        printf("div of %.2f / %.2f = %.2f", x, y, div(x, y));
    }
    
    else
    {
        printf("Invalid operator.\n");
    }
    return 0;

}