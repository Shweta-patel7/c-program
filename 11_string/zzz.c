#include"stdio.h"
int main()
{
        char str1[100], str2[100], str3[100];
      
        int i =0, j=0, lenth=0, k = 0;

        printf("enter the first string: ");
        scanf("%[^\n]%*c", str1);

        printf("enter the second string: ");
        scanf("%[^\n]%*c", str2);
	
	/*calcuating lenth of str2*/
	for(i = 0; str2[i] != '\0'; i++)
	{}
	lenth = i;

	int count_char;

	i =0, j=0, k=0;

	while((str1[i] != '\0') && (str2[j] != '\0'))
	{

	       printf("str1[i] = %x\r\n", &str1[i]);
	       printf("str2[j] = %x\r\n", &str2[j]);



		/*run untill length of string2 characters is matched*/
		for (count_char=0; count_char < lenth; count_char++)
		{
			printf("count_char=%d\r\n",count_char);
			printf("str1[%d]= %c\r\n",i,str1[i]);
			printf("str2[%d]= %c\r\n",j,str2[j]);
			if (str1[i] == str2[j])
			{
				printf("i = %d\r\n",i);
				printf("j = %d\r\n",j);
				i++;
				j++;

				printf("i = %d\r\n",i);
                                printf("j = %d\r\n",j);



			}
			else
			{
				j = 0;
				i++;
				break;
			}

		}
               
		/*addition of two strings*/
		if (count_char == lenth)
		{	
			j = 0;
			for(k = 0; str2[j] != '\0'; k++)
			{
				printf("str3[%d]=%c\r\n", k, str3[k]);
				printf("str2[%d]=%c\r\n",j,str2[j]);

				str3[k] = str2[j];
				j++;

				printf("str3[%d]=%c\r\n",k,str3[k]);
                                printf("str2[%d]=%c\r\n",j,str2[j]);


			}
			while(str1[i] != '\0')
			{
				printf("str1[%d]=%c\r\n",i,str1[i]);
				printf("str3[%d]=%c\r\n",k,str3[k]);
				printf("i=%d\r\n",i);
				printf("k=%d\r\n",k);

				str3[k] = str1[i];
				printf("str3[%d]=%c\r\n",k,str3[k]);

				i++;
				k++;

				printf("str1[%d]=%c\r\n",i,str1[i]);
                                printf("str3[%d]=%c\r\n",k,str3[k]);
                                printf("i=%d\r\n",i);
                                printf("k=%d\r\n",k);
			}
			str3[k] = '\0';
			
			printf("duplicate string is: %s\n", str3);
		}

        
	
	}
	return 0;
}