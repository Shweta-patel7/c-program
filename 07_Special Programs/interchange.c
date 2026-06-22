#include <stdio.h>
int main()
{
    // infinity for loop
    for ( ; ; )
    
    {
        int n, result = 0, q, rem;
        char a;
        printf("enter the number :");
        scanf("%d", &n);
    
        
    // q is a number which user enter for interchange
    q = n;
    // loop will stop when q become zero
    while (q != 0)
    {
    //number is divide by 10. by divide number by 10 last number will be left as remender and it store in result 
    rem = q % 10;
    // result is multiply with 10 and other remender is add to it so now number is interchange
    result = result * 10 + rem;
    q = q / 10;
    }
    printf("output: %d", result);

    // loop end when user enter n
    printf("want to go on (y/n):");
    scanf(" %c", &a);
    if (a == 'n')
        break;
             
    }
    

return 0;

}