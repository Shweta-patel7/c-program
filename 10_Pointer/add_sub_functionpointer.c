#include<stdio.h>
int add (int a, int b)
{
    return a + b;
}

int sub (int a, int b)
{
    return a - b;
}

int main()
{
    int x, y, choice;
    int (*op)(int, int);
    printf("Enter two number\n");
    scanf("%d %d", &x, &y);

    printf("\n1. Add\n");
    printf("2. Subtract\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        op = add;
    }

    else if (choice == 2)
    {
        op = sub;
    }

    
    else
    {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Result = %d\n", op(x, y));

    return 0;

    

}
