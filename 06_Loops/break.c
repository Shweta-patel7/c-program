#include <stdio.h>
int main()
{
    int n;
    //taking input with user
    printf("Enter a number \n");
    scanf("%d", &n);

    //when n=0 then only it come out of loop
    while (n != 0)
    {
        //when n value is less then zero then it break the loop
        if (n < 0)
        {
            break;
        }
     //when n is more then zero so it will give output    
    printf("Enter a number \n");
    scanf("%d", &n);   
    }
return 0;    

}