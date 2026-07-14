#include<stdio.h>
int main()
{
    char str[100], sub[100];
    int i, j, lensub, adr, count;

    printf("enter string : ");
    scanf(" %99[^\n]", str);
    printf("enter sub string : ");
    scanf(" %99[^\n]", sub);

    for (i = 0; sub[i] != '\0'; i++)
    {
    }
    lensub = i;
    printf("length of substring : %d\n", lensub);

    /*for (i = 0; sub[i] != '\0'; i++)
    {
        j = 0;
        while (str[j] != '\0')
        {
            if (str[j + i] == sub[i])
            {
                count++;
                printf("%c = %c\n", str[j], sub[i]);
                printf("value : %d\n", j);
            }
            
            j++;
        }
        
    }
   
    printf("count = %d", count);
   
    if (count == lensub)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}*/
i = 0, j = 0;
while (str[i] != '0' && sub[j] != '\0')
{
    if (str[i] == sub[j])
    {
    }
    
}
