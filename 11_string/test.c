#include<stdio.h>
#include<string.h>
void stringcom(char *s, char *bs)
{
    int i, j, k, ind1[50], ind2, coun = 0;
    char temp[50];
    for (i = 0; s[i] != 0; i++)
    {
        for (j = 0; bs[j] != '\0'; j++)
        {
            if (s[i] == bs[j])
            {
                ind1[coun] = i;
                coun++;
            }
        }

      for (i = 0; i < coun; i++)
            {
                int p = ind1[i];
                while (s[p] != '\0' && s[p] != ' ')
                {
                    printf("%c", s[p]);
                    p++;
                }
                
            }
            
        

    }   

        if (coun > 1)
        {
            printf("next word :");
            scanf(" %49[^\n]", temp);
            strcat(bs, temp);
            temp[50] = '\0';

            for (i = 0; s[i] != '\0'; i++)
            {
               j = 0;

               while (bs[j] != '\0' && s[i + j] == bs[j])
              {
                  j++;
              }
            
               if (bs[j] == '\0')
               {
                 ind2 = i;
               }
             
            }
        } 
         printf("output : %s\n", &s[ind2]);  

}

int main()
{
    char str[100], sub[50];
    printf("enter string : ");
    scanf(" %99[^\n]", str);
    printf("word to be found : ");
    scanf(" %49[^\n]", sub);
    stringcom(str, sub);


}