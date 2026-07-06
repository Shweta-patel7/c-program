#include <stdio.h>
int main()
{
    int i = 0, j = 0, k = 0, match;
    char str[100], word[20], replace[20], result[100];
    printf("enter string : ");
    gets(str);
    printf("enter word to find : ");
    gets(word);
    printf("enter word to replace : ");
    gets(replace);

    while (str[i] != '\0')
    {
        match = 1; 
        j = 0;

        while (str[j] != 0)
        {
            if (str[i + j] != word[j])
            {
                match = 0;
                break;
            }
            j++;
        }
        
    }
    

}