#include <stdio.h>

int main()
{
    int n, i, j;
    char x, a;

    
    
    //infinity loop 
    while (1)
    {
         printf("Enter how many rows you want in pyramid: ");
         scanf("%d", &n);
         printf("how pyramid you want ('u / d') :");
         scanf(" %c", &x);
        switch (x)
    {
    case 'u':
    // j is for row i is for column n is total no. of row
         for (j = 1; j <= n; j++)
         {
            for (i = 1; i <= 2 * n - 1; i++)
            {
                // * will print no. of row - (at which row you are at - 1)
                 if (i >= n - (j - 1) && i <= n + (j - 1))
                      printf("*");
                else
                    printf(" ");
            }

             printf("\n");
         }
        break;

    case 'd':
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= 2 * n - 1; i++)
        {
            //* will print when no. of row -(no. of row - at which row)
            if (i >= n - (n - j) && i <= n + (n - j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    break;

    
    default: printf("not");
        break;
    }
    // loop end when user write 'n'
    printf("want to contnew (y/n):");
    scanf(" %c", &a);

    if (a == 'n')
        break;


    }
    

    return 0;
}